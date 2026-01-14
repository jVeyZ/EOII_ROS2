#!/usr/bin/env python3
"""
E6 - Action Client para el servicio de información de tortugas.

Invoca el action server y muestra el feedback periódico
hasta que explorer alcance a turtle1.
"""

# Configurar PYTHONPATH para encontrar interfaces generadas
import sys
import os
from pathlib import Path

# Buscar el directorio de site-packages del paquete
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
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle

from turtle_tracker.action import TurtleInfoAction


class TurtleInfoActionClient(Node):
    """
    Cliente del action server turtle_info_action.
    
    Solicita información periódica y muestra el feedback en consola.
    """

    def __init__(self):
        super().__init__('turtle_info_action_client')
        
        # Parámetros
        self.declare_parameter('update_rate', 1.0)  # Hz
        self.declare_parameter('catch_distance', 0.5)  # unidades
        
        self.update_rate = self.get_parameter('update_rate').get_parameter_value().double_value
        self.catch_distance = self.get_parameter('catch_distance').get_parameter_value().double_value
        
        # Action client
        self._action_client = ActionClient(
            self,
            TurtleInfoAction,
            'turtle_info_action'
        )
        
        # Contador de feedback
        self.feedback_count = 0
        
        self.get_logger().info('Action Client iniciado')

    def send_goal(self):
        """Envía el goal al action server."""
        self.get_logger().info('Esperando al Action Server...')
        
        if not self._action_client.wait_for_server(timeout_sec=10.0):
            self.get_logger().error('Action Server no disponible')
            return
        
        # Crear goal
        goal_msg = TurtleInfoAction.Goal()
        goal_msg.update_rate = self.update_rate
        goal_msg.catch_distance = self.catch_distance
        
        self.get_logger().info(
            f'Enviando goal: update_rate={self.update_rate}, '
            f'catch_distance={self.catch_distance}'
        )
        
        # Enviar goal con callbacks
        send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        """Callback cuando el servidor acepta/rechaza el goal."""
        goal_handle: ClientGoalHandle = future.result()
        
        if not goal_handle.accepted:
            self.get_logger().error('Goal rechazado por el servidor')
            return
        
        self.get_logger().info('Goal aceptado. Esperando resultado...')
        
        # Esperar resultado
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.result_callback)

    def feedback_callback(self, feedback_msg):
        """Callback para cada feedback recibido."""
        self.feedback_count += 1
        feedback = feedback_msg.feedback
        
        # Mostrar información formateada
        self._display_feedback(feedback)

    def _display_feedback(self, feedback):
        """Muestra el feedback de forma estructurada."""
        separator = '=' * 60
        
        info_msg = f"""
{separator}
  🔄 FEEDBACK #{self.feedback_count}
  Timestamp: {feedback.timestamp}
{separator}

  🐢 TURTLE1 (Principal)
  ├── Posición:    x = {feedback.turtle1_x:7.3f}  y = {feedback.turtle1_y:7.3f}
  ├── Orientación: θ = {feedback.turtle1_theta:7.3f} rad ({self._rad_to_deg(feedback.turtle1_theta):6.1f}°)
  └── Velocidad:   lineal = {feedback.turtle1_linear_vel:6.3f}  angular = {feedback.turtle1_angular_vel:6.3f}

  🐢 EXPLORER (Perseguidora)
  ├── Posición:    x = {feedback.explorer_x:7.3f}  y = {feedback.explorer_y:7.3f}
  ├── Orientación: θ = {feedback.explorer_theta:7.3f} rad ({self._rad_to_deg(feedback.explorer_theta):6.1f}°)
  └── Velocidad:   lineal = {feedback.explorer_linear_vel:6.3f}  angular = {feedback.explorer_angular_vel:6.3f}

  📏 DISTANCIA: {feedback.distance:7.3f} unidades
{separator}
"""
        print(info_msg)

    def result_callback(self, future):
        """Callback cuando se recibe el resultado final."""
        result = future.result().result
        
        separator = '*' * 60
        
        result_msg = f"""

{separator}
  🏁 RESULTADO FINAL
{separator}

  ✅ Éxito: {'Sí' if result.success else 'No'}
  📝 Mensaje: {result.message}
  📏 Distancia final: {result.final_distance:.3f} unidades
  ⏱️  Tiempo total: {result.total_time:.2f} segundos
  📊 Total feedbacks recibidos: {self.feedback_count}

{separator}
"""
        print(result_msg)
        
        # Terminar el cliente
        rclpy.shutdown()

    def _rad_to_deg(self, rad: float) -> float:
        """Convierte radianes a grados."""
        import math
        return rad * 180.0 / math.pi


def main(args=None):
    rclpy.init(args=args)
    
    node = TurtleInfoActionClient()
    
    # Enviar goal
    node.send_goal()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print('\n\nCliente detenido por el usuario.')
    finally:
        if rclpy.ok():
            node.destroy_node()
            rclpy.shutdown()


if __name__ == '__main__':
    main()
