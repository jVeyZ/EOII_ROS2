#!/usr/bin/env python3
"""
E2 - Nodo de seguimiento de tortugas.

La tortuga "explorer" persigue continuamente a "turtle1" usando
control proporcional. La velocidad es proporcional a la distancia.
"""

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
import math


class TurtleTracker(Node):
    """
    Nodo que implementa el sistema de seguimiento.
    
    Explorer persigue a turtle1 con control proporcional:
    - Velocidad lineal proporcional a la distancia
    - Velocidad angular proporcional al error de orientación
    """

    def __init__(self):
        super().__init__('turtle_tracker')
        
        # Parámetros de control proporcional
        self.declare_parameter('kp_linear', 1.5)    # Ganancia proporcional lineal
        self.declare_parameter('kp_angular', 6.0)   # Ganancia proporcional angular
        self.declare_parameter('max_linear_vel', 3.0)
        self.declare_parameter('max_angular_vel', 4.0)
        self.declare_parameter('stop_distance', 0.3)  # Distancia para detenerse
        
        self.kp_linear = self.get_parameter('kp_linear').get_parameter_value().double_value
        self.kp_angular = self.get_parameter('kp_angular').get_parameter_value().double_value
        self.max_linear_vel = self.get_parameter('max_linear_vel').get_parameter_value().double_value
        self.max_angular_vel = self.get_parameter('max_angular_vel').get_parameter_value().double_value
        self.stop_distance = self.get_parameter('stop_distance').get_parameter_value().double_value
        
        # Estado de las tortugas
        self.turtle1_pose = None
        self.explorer_pose = None
        
        # Velocidades actuales (para el servicio de información)
        self.explorer_linear_vel = 0.0
        self.explorer_angular_vel = 0.0
        
        # Suscriptores a las poses de las tortugas
        self.turtle1_sub = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.turtle1_pose_callback,
            10
        )
        
        self.explorer_sub = self.create_subscription(
            Pose,
            '/explorer/pose',
            self.explorer_pose_callback,
            10
        )
        
        # Publicador de comandos de velocidad para explorer
        self.cmd_vel_pub = self.create_publisher(
            Twist,
            '/explorer/cmd_vel',
            10
        )
        
        # Timer para el control (50 Hz)
        self.control_timer = self.create_timer(0.02, self.control_loop)
        
        self.get_logger().info('Nodo tracker iniciado. Explorer persiguiendo a turtle1...')

    def turtle1_pose_callback(self, msg: Pose):
        """Callback para actualizar la pose de turtle1."""
        self.turtle1_pose = msg

    def explorer_pose_callback(self, msg: Pose):
        """Callback para actualizar la pose de explorer."""
        self.explorer_pose = msg

    def calculate_distance(self) -> float:
        """Calcula la distancia euclidiana entre las dos tortugas."""
        if self.turtle1_pose is None or self.explorer_pose is None:
            return float('inf')
        
        dx = self.turtle1_pose.x - self.explorer_pose.x
        dy = self.turtle1_pose.y - self.explorer_pose.y
        return math.sqrt(dx**2 + dy**2)

    def normalize_angle(self, angle: float) -> float:
        """Normaliza un ángulo al rango [-pi, pi]."""
        while angle > math.pi:
            angle -= 2.0 * math.pi
        while angle < -math.pi:
            angle += 2.0 * math.pi
        return angle

    def control_loop(self):
        """Bucle de control principal con control proporcional."""
        # Verificar que tenemos las poses de ambas tortugas
        if self.turtle1_pose is None or self.explorer_pose is None:
            return
        
        # Calcular distancia
        distance = self.calculate_distance()
        
        # Calcular ángulo hacia turtle1
        dx = self.turtle1_pose.x - self.explorer_pose.x
        dy = self.turtle1_pose.y - self.explorer_pose.y
        target_angle = math.atan2(dy, dx)
        
        # Error de orientación
        angle_error = self.normalize_angle(target_angle - self.explorer_pose.theta)
        
        # Crear mensaje de velocidad
        cmd = Twist()
        
        if distance > self.stop_distance:
            # Control proporcional
            # Velocidad lineal proporcional a la distancia
            linear_vel = self.kp_linear * distance
            linear_vel = min(linear_vel, self.max_linear_vel)
            
            # Reducir velocidad lineal si hay mucho error angular
            linear_vel *= max(0.0, math.cos(angle_error))
            
            # Velocidad angular proporcional al error de orientación
            angular_vel = self.kp_angular * angle_error
            angular_vel = max(-self.max_angular_vel, min(self.max_angular_vel, angular_vel))
            
            cmd.linear.x = linear_vel
            cmd.angular.z = angular_vel
            
            # Guardar velocidades actuales
            self.explorer_linear_vel = linear_vel
            self.explorer_angular_vel = angular_vel
        else:
            # Detener cuando está cerca
            cmd.linear.x = 0.0
            cmd.angular.z = 0.0
            self.explorer_linear_vel = 0.0
            self.explorer_angular_vel = 0.0
        
        # Publicar comando
        self.cmd_vel_pub.publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    
    node = TurtleTracker()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
