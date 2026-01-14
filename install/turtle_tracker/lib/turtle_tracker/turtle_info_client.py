#!/usr/bin/env python3
"""
E4 - Cliente del servicio turtle_info.

Invoca el servicio turtle_info cada segundo y muestra
la información de forma clara y estructurada.
Maneja errores si el servicio no está disponible.
"""

# Configurar PYTHONPATH para encontrar interfaces generadas
import sys
from pathlib import Path

_script_dir = Path(__file__).resolve().parent
_lib_dir = _script_dir.parent  # lib/turtle_tracker -> lib
_site_packages = _lib_dir / 'python3.11' / 'site-packages'

# IMPORTANTE: Eliminar el directorio del script del path para evitar
# conflicto con turtle_tracker.py (el script) vs turtle_tracker (el paquete)
_script_dir_str = str(_script_dir)
if _script_dir_str in sys.path:
    sys.path.remove(_script_dir_str)

# Añadir site-packages al inicio del path
if _site_packages.exists() and str(_site_packages) not in sys.path:
    sys.path.insert(0, str(_site_packages))

import rclpy
from rclpy.node import Node

from turtle_tracker.srv import TurtleInfo


class TurtleInfoClient(Node):
    """Nodo cliente que consulta el servicio turtle_info periódicamente."""

    def __init__(self):
        super().__init__('turtle_info_client')
        
        # Parámetro para frecuencia de consulta
        self.declare_parameter('query_rate', 1.0)  # Hz
        self.query_rate = self.get_parameter('query_rate').get_parameter_value().double_value
        
        # Cliente del servicio
        self.client = self.create_client(TurtleInfo, 'turtle_info')
        
        # Contador de consultas
        self.query_count = 0
        
        # Verificar disponibilidad del servicio al inicio
        if not self.client.wait_for_service(timeout_sec=5.0):
            self.get_logger().error(
                'Servicio turtle_info no disponible. '
                '¿Está el servidor ejecutándose?'
            )
            self.service_available = False
        else:
            self.service_available = True
            self.get_logger().info('Conectado al servicio turtle_info')
        
        # Timer para consultas periódicas
        timer_period = 1.0 / self.query_rate  # segundos
        self.timer = self.create_timer(timer_period, self.query_service)
        
        self.get_logger().info(
            f'Cliente iniciado. Consultando cada {timer_period:.1f} segundos...'
        )

    def query_service(self):
        """Consulta el servicio y muestra la información."""
        # Verificar si el servicio está disponible
        if not self.client.service_is_ready():
            self.get_logger().warn(
                'Servicio turtle_info no disponible en este momento. Reintentando...'
            )
            return
        
        self.query_count += 1
        
        # Crear request vacío
        request = TurtleInfo.Request()
        
        # Llamada asíncrona
        future = self.client.call_async(request)
        future.add_done_callback(self.response_callback)

    def response_callback(self, future):
        """Callback para procesar la respuesta del servicio."""
        try:
            response = future.result()
            self.display_info(response)
        except Exception as e:
            self.get_logger().error(f'Error al obtener información: {e}')

    def display_info(self, response):
        """Muestra la información de forma estructurada y clara."""
        separator = '=' * 60
        
        # Construir mensaje formateado
        info_msg = f"""
{separator}
  INFORMACIÓN DE TORTUGAS - Consulta #{self.query_count}
  Timestamp: {response.timestamp}
{separator}

  🐢 TURTLE1 (Principal - Teleoperada)
  ├── Posición:    x = {response.turtle1_x:7.3f}  y = {response.turtle1_y:7.3f}
  ├── Orientación: θ = {response.turtle1_theta:7.3f} rad ({self._rad_to_deg(response.turtle1_theta):6.1f}°)
  └── Velocidad:   lineal = {response.turtle1_linear_vel:6.3f}  angular = {response.turtle1_angular_vel:6.3f}

  🐢 EXPLORER (Perseguidora)
  ├── Posición:    x = {response.explorer_x:7.3f}  y = {response.explorer_y:7.3f}
  ├── Orientación: θ = {response.explorer_theta:7.3f} rad ({self._rad_to_deg(response.explorer_theta):6.1f}°)
  └── Velocidad:   lineal = {response.explorer_linear_vel:6.3f}  angular = {response.explorer_angular_vel:6.3f}

  📏 DISTANCIA ENTRE TORTUGAS: {response.distance:7.3f} unidades
{separator}
"""
        
        # Usar print para mejor formato en consola
        print(info_msg)

    def _rad_to_deg(self, rad: float) -> float:
        """Convierte radianes a grados."""
        import math
        return rad * 180.0 / math.pi


def main(args=None):
    rclpy.init(args=args)
    
    node = TurtleInfoClient()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print('\n\nCliente detenido por el usuario.')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
