#!/usr/bin/env python3
"""Cliente de ejemplo para el Action Server `turtle_info_action`.
Envía un goal vacío y muestra feedback periódico hasta completar.
"""
import rclpy
from rclpy.node import Node
from example_interfaces.srv import Trigger
from std_msgs.msg import String
import json

class TurtleInfoActionClient(Node):
    def __init__(self):
        super().__init__('turtle_info_action_client')
        self.cli = self.create_client(Trigger, 'turtle_info_stream_start')
        self.create_subscription(String, 'turtle_info_feedback', self._fb_cb, 10)
        self.create_subscription(String, 'turtle_info_result', self._result_cb, 10)
        self._running = False

    def send_start(self):
        self.get_logger().info('Llamando a turtle_info_stream_start...')
        if not self.cli.wait_for_service(timeout_sec=5.0):
            self.get_logger().error('Servicio de stream no disponible')
            return
        req = Trigger.Request()
        future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self, future, timeout_sec=2.0)
        if future.done() and future.result() is not None and future.result().success:
            self.get_logger().info('Stream iniciado; recibiendo feedback en topic')
            self._running = True
        else:
            self.get_logger().error('No se pudo iniciar el stream')

    def _fb_cb(self, msg: String):
        try:
            data = json.loads(msg.data)
            self.get_logger().info(f"Feedback: dist={data.get('distance',0.0):.3f}")
        except Exception:
            self.get_logger().info(f"Feedback raw: {msg.data}")

    def _result_cb(self, msg: String):
        try:
            data = json.loads(msg.data)
            self.get_logger().info(f"Resultado final: success={data.get('success')}")
        except Exception:
            self.get_logger().info(f"Resultado (raw): {msg.data}")


def main(args=None):
    rclpy.init(args=args)
    node = TurtleInfoActionClient()
    node.send_goal()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    try:
        rclpy.shutdown()
    except Exception:
        pass

if __name__ == '__main__':
    main()
