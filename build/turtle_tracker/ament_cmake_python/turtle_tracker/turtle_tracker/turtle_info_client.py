#!/usr/bin/env python3
"""Cliente que invoca el servicio `turtle_info` cada segundo y muestra la información.
Maneja el caso en que el servicio no esté disponible.
"""
import time
import rclpy
from rclpy.node import Node
from example_interfaces.srv import Trigger
import json

class TurtleInfoClient(Node):
    def __init__(self):
        super().__init__('turtle_info_client')
        self.client = self.create_client(Trigger, 'turtle_info')
        self.get_logger().info('Cliente iniciado: esperando servicio turtle_info...')

    def call_loop(self):
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn('Servicio turtle_info no disponible, reintentando...')
            time.sleep(1.0)
        try:
            while rclpy.ok():
                req = Trigger.Request()
                future = self.client.call_async(req)
                rclpy.spin_until_future_complete(self, future, timeout_sec=2.0)
                if future.done() and future.result() is not None:
                    res = future.result()
                    if res.success:
                        try:
                            data = json.loads(res.message)
                            self._print_json(data)
                        except Exception:
                            self.get_logger().warn('Respuesta no formateada: %s' % res.message)
                    else:
                        self.get_logger().warn('Servicio respondió success=False')
                else:
                    self.get_logger().error('Error al llamar al servicio turtle_info')
                time.sleep(1.0)
        except KeyboardInterrupt:
            pass

    def _print_json(self, data: dict):
        msg = (
            f"\n--- Información Turtle INFO ---\n"
            f"turtle1: x={data['turtle1']['x']:.2f}, y={data['turtle1']['y']:.2f}, theta={data['turtle1']['theta']:.2f}\n"
            f"explorer: x={data['explorer']['x']:.2f}, y={data['explorer']['y']:.2f}, theta={data['explorer']['theta']:.2f}\n"
            f"explorer vel lin={data['explorer'].get('linear',0.0):.2f}, ang={data['explorer'].get('angular',0.0):.2f}\n"
            f"distancia euclídea={data.get('distance',0.0):.3f}\n"
            f"-------------------------------\n"
        )
        self.get_logger().info(msg)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleInfoClient()
    node.call_loop()
    node.destroy_node()
    try:
        rclpy.shutdown()
    except Exception:
        pass

if __name__ == '__main__':
    main()
