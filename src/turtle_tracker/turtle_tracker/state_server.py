#!/usr/bin/env python3
"""Nodo que ofrece el servicio `turtle_info` y además un Action Server `turtle_info_action`.
El servicio devuelve un snapshot instantáneo; el action devuelve feedback periódico
hasta que la tortuga 'explorer' alcance a 'turtle1'.
"""
import math
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from turtlesim.msg import Pose
# Evitar el uso de interfaces generadas por rosidl (problemas de compatibilidad)
from example_interfaces.srv import Trigger
from std_msgs.msg import String


def _distance(p1, p2):
    return math.hypot(p1.x - p2.x, p1.y - p2.y)

class StateServer(Node):
    def __init__(self):
        super().__init__('state_server')
        self.turtle1_pose = None
        self.explorer_pose = None
        qos = QoSProfile(depth=10)
        self.create_subscription(Pose, 'turtle1/pose', self._turtle1_cb, qos)
        self.create_subscription(Pose, 'explorer/pose', self._explorer_cb, qos)

        # Servicio que devuelve un snapshot (E3) — usamos Trigger y mensajes JSON en el campo "message"
        self.srv = self.create_service(Trigger, 'turtle_info', self.handle_turtle_info)

        # Servicios para iniciar/detener el stream de información (alternativa al Action Server)
        self.create_service(Trigger, 'turtle_info_stream_start', self.start_stream)
        self.create_service(Trigger, 'turtle_info_stream_stop', self.stop_stream)

        # Tópicos de feedback y resultado (std_msgs/String con JSON)
        self.pub_feedback = self.create_publisher(String, 'turtle_info_feedback', 10)
        self.pub_result = self.create_publisher(String, 'turtle_info_result', 10)
        self._streaming = False
        self.get_logger().info('State server iniciado (servicio y streaming por tópicos)')

    def _turtle1_cb(self, msg: Pose):
        self.turtle1_pose = msg

    def _explorer_cb(self, msg: Pose):
        self.explorer_pose = msg

    def handle_turtle_info(self, request, response):
        # Devolvemos los datos en el campo `message` codificados en JSON
        import json
        if self.turtle1_pose is None or self.explorer_pose is None:
            self.get_logger().warn('Datos incompletos: aún no se han recibido ambas poses')
            response.success = False
            response.message = ''
            return response
        data = {
            'turtle1': {'x': float(self.turtle1_pose.x), 'y': float(self.turtle1_pose.y), 'theta': float(self.turtle1_pose.theta)},
            'explorer': {'x': float(self.explorer_pose.x), 'y': float(self.explorer_pose.y), 'theta': float(self.explorer_pose.theta), 'linear': float(self.explorer_pose.linear_velocity), 'angular': float(self.explorer_pose.angular_velocity)},
            'distance': float(_distance(self.turtle1_pose, self.explorer_pose)),
        }
        response.success = True
        response.message = json.dumps(data)
        return response


    # Implementación alternativa del "action" mediante servicio y tópicos
    def start_stream(self, request, response):
        """Servicio Trigger que inicia el stream de información (publica en 'turtle_info_feedback').
        Devuelve success=True y message='' si se acepta la petición.
        """
        import threading, time, json
        if self._streaming:
            response.success = False
            response.message = 'Stream ya en ejecución'
            return response
        self._streaming = True

        def _stream_loop():
            while rclpy.ok() and self._streaming:
                if self.turtle1_pose is None or self.explorer_pose is None:
                    payload = {'ready': False}
                else:
                    payload = {
                        'turtle1': {'x': float(self.turtle1_pose.x), 'y': float(self.turtle1_pose.y), 'theta': float(self.turtle1_pose.theta)},
                        'explorer': {'x': float(self.explorer_pose.x), 'y': float(self.explorer_pose.y), 'theta': float(self.explorer_pose.theta), 'linear': float(self.explorer_pose.linear_velocity), 'angular': float(self.explorer_pose.angular_velocity)},
                        'distance': float(_distance(self.turtle1_pose, self.explorer_pose)),
                    }
                msg = String()
                msg.data = json.dumps(payload)
                self.pub_feedback.publish(msg)
                # Si alcanzó, publicar resultado final y parar
                if 'distance' in payload and payload['distance'] <= 0.5:
                    res_msg = String()
                    res_msg.data = json.dumps({'final': payload, 'success': True})
                    self.pub_result.publish(res_msg)
                    self.get_logger().info('Explorer alcanzó a turtle1; terminando stream')
                    self._streaming = False
                    break
                time.sleep(1.0)

        t = threading.Thread(target=_stream_loop, daemon=True)
        t.start()
        response.success = True
        response.message = ''
        return response

    def stop_stream(self, request, response):
        self._streaming = False
        response.success = True
        response.message = 'Stream detenido'
        return response


def main(args=None):
    rclpy.init(args=args)
    node = StateServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    try:
        rclpy.shutdown()
    except Exception:
        # Ignorar RCLError al cerrarse múltiples veces
        pass

if __name__ == '__main__':
    main()
