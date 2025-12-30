#!/usr/bin/env python3
"""Nodo que hace que la tortuga 'explorer' persiga a 'turtle1'.
Control proporcional: velocidad lineal ~ Kp * distancia, velocidad angular ~ Ktheta * error_ángulo.
"""
import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose


def _angle_diff(a, b):
    d = a - b
    while d > math.pi:
        d -= 2*math.pi
    while d < -math.pi:
        d += 2*math.pi
    return d

class ExplorerFollower(Node):
    def __init__(self):
        super().__init__('explorer_follower')
        self.declare_parameter('linear_k', 1.0)
        self.declare_parameter('angular_k', 4.0)
        self.declare_parameter('max_linear', 2.0)
        self.declare_parameter('max_angular', 4.0)
        self.declare_parameter('catch_distance', 0.5)
        self.linear_k = self.get_parameter('linear_k').value
        self.angular_k = self.get_parameter('angular_k').value
        self.max_linear = self.get_parameter('max_linear').value
        self.max_angular = self.get_parameter('max_angular').value
        self.catch_distance = self.get_parameter('catch_distance').value

        self.turtle1_pose = None
        self.explorer_pose = None

        self.pub = self.create_publisher(Twist, 'explorer/cmd_vel', 10)
        self.create_subscription(Pose, 'turtle1/pose', self._turtle1_cb, 10)
        self.create_subscription(Pose, 'explorer/pose', self._explorer_cb, 10)

        self.create_timer(0.05, self.control_loop)
        self.get_logger().info('Nodo follower iniciado')

    def _turtle1_cb(self, msg: Pose):
        self.turtle1_pose = msg

    def _explorer_cb(self, msg: Pose):
        self.explorer_pose = msg

    def control_loop(self):
        if self.turtle1_pose is None or self.explorer_pose is None:
            return
        dx = self.turtle1_pose.x - self.explorer_pose.x
        dy = self.turtle1_pose.y - self.explorer_pose.y
        distance = math.hypot(dx, dy)
        target_angle = math.atan2(dy, dx)
        angle_err = _angle_diff(target_angle, self.explorer_pose.theta)

        twist = Twist()
        if distance > self.catch_distance:
            linear = self.linear_k * distance
            angular = self.angular_k * angle_err
            # límites
            linear = max(-self.max_linear, min(self.max_linear, linear))
            angular = max(-self.max_angular, min(self.max_angular, angular))
            twist.linear.x = float(linear)
            twist.angular.z = float(angular)
        else:
            # Cerca suficiente: detenerse
            twist.linear.x = 0.0
            twist.angular.z = 0.0
        self.pub.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    node = ExplorerFollower()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    try:
        rclpy.shutdown()
    except Exception:
        # Ignorar errores en shutdown para evitar fallos por doble shutdown
        pass

if __name__ == '__main__':
    main()
