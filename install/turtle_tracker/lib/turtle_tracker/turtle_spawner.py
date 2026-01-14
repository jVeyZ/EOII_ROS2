#!/usr/bin/env python3
"""
E1 - Nodo para generar la tortuga explorer en TurtleSim.

Este nodo spawna una nueva tortuga llamada "explorer" en la posición
especificada por parámetros (por defecto x=2.0, y=2.0).
"""

import rclpy
from rclpy.node import Node
from turtlesim.srv import Spawn
import sys


class TurtleSpawner(Node):
    """Nodo que genera la tortuga explorer usando el servicio /spawn."""

    def __init__(self):
        super().__init__('turtle_spawner')
        
        # Declarar parámetros con valores por defecto
        self.declare_parameter('explorer_x', 2.0)
        self.declare_parameter('explorer_y', 2.0)
        self.declare_parameter('explorer_theta', 0.0)
        
        # Obtener valores de los parámetros
        self.explorer_x = self.get_parameter('explorer_x').get_parameter_value().double_value
        self.explorer_y = self.get_parameter('explorer_y').get_parameter_value().double_value
        self.explorer_theta = self.get_parameter('explorer_theta').get_parameter_value().double_value
        
        # Validar que la posición está dentro de los límites de TurtleSim (0-11)
        if not self._validate_position(self.explorer_x, self.explorer_y):
            self.get_logger().error(
                f'Posición fuera de límites: ({self.explorer_x}, {self.explorer_y}). '
                'El espacio válido es (0-11, 0-11)'
            )
            # Ajustar a posición válida
            self.explorer_x = max(0.5, min(10.5, self.explorer_x))
            self.explorer_y = max(0.5, min(10.5, self.explorer_y))
            self.get_logger().warn(
                f'Posición ajustada a: ({self.explorer_x}, {self.explorer_y})'
            )
        
        # Crear cliente del servicio /spawn
        self.spawn_client = self.create_client(Spawn, '/spawn')
        
        # Esperar a que el servicio esté disponible
        while not self.spawn_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Esperando al servicio /spawn...')
        
        # Ejecutar el spawn
        self.spawn_explorer()

    def _validate_position(self, x: float, y: float) -> bool:
        """Valida que la posición esté dentro de los límites de TurtleSim."""
        return 0.0 <= x <= 11.0 and 0.0 <= y <= 11.0

    def spawn_explorer(self):
        """Llama al servicio /spawn para crear la tortuga explorer."""
        request = Spawn.Request()
        request.x = self.explorer_x
        request.y = self.explorer_y
        request.theta = self.explorer_theta
        request.name = 'explorer'
        
        self.get_logger().info(
            f'Spawneando tortuga "explorer" en posición '
            f'({self.explorer_x:.2f}, {self.explorer_y:.2f})'
        )
        
        # Llamada asíncrona al servicio
        future = self.spawn_client.call_async(request)
        future.add_done_callback(self.spawn_callback)

    def spawn_callback(self, future):
        """Callback cuando el servicio responde."""
        try:
            response = future.result()
            self.get_logger().info(
                f'Tortuga "{response.name}" creada exitosamente!'
            )
        except Exception as e:
            self.get_logger().error(f'Error al crear tortuga: {e}')


def main(args=None):
    rclpy.init(args=args)
    
    node = TurtleSpawner()
    
    # Spin brevemente para procesar la respuesta del servicio
    rclpy.spin_once(node, timeout_sec=2.0)
    
    node.get_logger().info('Spawner completado.')
    
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
