#!/usr/bin/env python3
"""Nodo que crea la tortuga 'explorer' usando el servicio /spawn.
Parámetros:
 - explorer_x (float) posición x por defecto 2.0
 - explorer_y (float) posición y por defecto 2.0
Comprueba que la posición esté dentro de los límites de la simulación
(campea entre 0.5 y 10.5).
"""
import rclpy
from rclpy.node import Node
from turtlesim.srv import Spawn

class SpawnExplorer(Node):
    def __init__(self):
        super().__init__('spawn_explorer')
        # Parámetros para la posición inicial
        self.declare_parameter('explorer_x', 2.0)
        self.declare_parameter('explorer_y', 2.0)
        x = self.get_parameter('explorer_x').value
        y = self.get_parameter('explorer_y').value
        x, y = self._clamp_position(x, y)
        self.get_logger().info(f"Creando tortuga 'explorer' en ({x:.2f}, {y:.2f})")
        # Llamada al servicio /spawn
        client = self.create_client(Spawn, 'spawn')
        if not client.wait_for_service(timeout_sec=5.0):
            self.get_logger().error('Servicio /spawn no disponible')
            return
        req = Spawn.Request()
        req.x = float(x)
        req.y = float(y)
        req.theta = 0.0
        req.name = 'explorer'
        future = client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            self.get_logger().info(f"Tortuga creada con nombre: {future.result().name}")
        else:
            self.get_logger().error('Fallo al invocar servicio /spawn')

    def _clamp_position(self, x, y):
        # Límites razonables para turtlesim
        min_v, max_v = 0.5, 10.5
        if x < min_v or x > max_v or y < min_v or y > max_v:
            self.get_logger().warn('Posición fuera de límites, se ajustará al interior del mapa')
        x = max(min_v, min(max_v, x))
        y = max(min_v, min(max_v, y))
        return x, y


def main(args=None):
    rclpy.init(args=args)
    node = SpawnExplorer()
    # No hace falta mantener el nodo corriendo.
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
