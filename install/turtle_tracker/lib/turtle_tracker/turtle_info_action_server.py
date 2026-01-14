#!/usr/bin/env python3
"""
E6 - Action Server para información de tortugas.

Retorna periódicamente la información de las tortugas mediante feedback.
Se considera terminado cuando explorer alcanza a turtle1 y se detiene.
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
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from turtlesim.msg import Pose
from datetime import datetime
import math
import time

from turtle_tracker.action import TurtleInfoAction


class TurtleInfoActionServer(Node):
    """
    Action Server que proporciona información periódica de las tortugas.
    
    - Acepta goals con update_rate y catch_distance
    - Envía feedback con la información de las tortugas
    - Completa cuando explorer alcanza a turtle1
    """

    def __init__(self):
        super().__init__('turtle_info_action_server')
        
        # Callback group para permitir concurrencia
        self._cb_group = ReentrantCallbackGroup()
        
        # Estado de las tortugas
        self.turtle1_pose = None
        self.explorer_pose = None
        
        # Velocidades
        self.turtle1_linear_vel = 0.0
        self.turtle1_angular_vel = 0.0
        self.explorer_linear_vel = 0.0
        self.explorer_angular_vel = 0.0
        
        # Suscriptores a las poses
        self.turtle1_sub = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.turtle1_pose_callback,
            10,
            callback_group=self._cb_group
        )
        
        self.explorer_sub = self.create_subscription(
            Pose,
            '/explorer/pose',
            self.explorer_pose_callback,
            10,
            callback_group=self._cb_group
        )
        
        # Crear el Action Server
        self._action_server = ActionServer(
            self,
            TurtleInfoAction,
            'turtle_info_action',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            callback_group=self._cb_group
        )
        
        self.get_logger().info('Action Server turtle_info_action iniciado y listo.')

    def turtle1_pose_callback(self, msg: Pose):
        """Callback para actualizar pose de turtle1."""
        self.turtle1_pose = msg
        self.turtle1_linear_vel = msg.linear_velocity
        self.turtle1_angular_vel = msg.angular_velocity

    def explorer_pose_callback(self, msg: Pose):
        """Callback para actualizar pose de explorer."""
        self.explorer_pose = msg
        self.explorer_linear_vel = msg.linear_velocity
        self.explorer_angular_vel = msg.angular_velocity

    def calculate_distance(self) -> float:
        """Calcula la distancia euclidiana entre las dos tortugas."""
        if self.turtle1_pose is None or self.explorer_pose is None:
            return float('inf')
        
        dx = self.turtle1_pose.x - self.explorer_pose.x
        dy = self.turtle1_pose.y - self.explorer_pose.y
        return math.sqrt(dx**2 + dy**2)

    def goal_callback(self, goal_request):
        """Callback para aceptar o rechazar un goal."""
        self.get_logger().info('Recibida solicitud de goal')
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        """Callback para manejar cancelaciones."""
        self.get_logger().info('Recibida solicitud de cancelación')
        return CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        """
        Ejecuta el action: envía feedback periódico hasta que explorer
        alcance a turtle1.
        """
        self.get_logger().info('Ejecutando goal...')
        
        # Obtener parámetros del goal
        update_rate = goal_handle.request.update_rate
        if update_rate <= 0:
            update_rate = 1.0  # Default 1 Hz
        
        catch_distance = goal_handle.request.catch_distance
        if catch_distance <= 0:
            catch_distance = 0.5  # Default 0.5 unidades
        
        self.get_logger().info(
            f'Parámetros: update_rate={update_rate} Hz, catch_distance={catch_distance}'
        )
        
        # Variables de tracking
        feedback_msg = TurtleInfoAction.Feedback()
        result = TurtleInfoAction.Result()
        start_time = time.time()
        period = 1.0 / update_rate
        
        # Esperar a tener datos de ambas tortugas
        wait_count = 0
        while self.turtle1_pose is None or self.explorer_pose is None:
            if wait_count > 50:  # 5 segundos máximo
                goal_handle.abort()
                result.success = False
                result.message = 'Timeout esperando poses de las tortugas'
                result.final_distance = -1.0
                result.total_time = time.time() - start_time
                return result
            
            await self._async_sleep(0.1)
            wait_count += 1
        
        # Bucle principal
        caught = False
        stop_counter = 0
        
        while rclpy.ok():
            # Verificar cancelación
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result.success = False
                result.message = 'Goal cancelado por el usuario'
                result.final_distance = self.calculate_distance()
                result.total_time = time.time() - start_time
                self.get_logger().info('Goal cancelado')
                return result
            
            # Calcular distancia actual
            distance = self.calculate_distance()
            
            # Llenar feedback
            feedback_msg.turtle1_x = self.turtle1_pose.x if self.turtle1_pose else 0.0
            feedback_msg.turtle1_y = self.turtle1_pose.y if self.turtle1_pose else 0.0
            feedback_msg.turtle1_theta = self.turtle1_pose.theta if self.turtle1_pose else 0.0
            feedback_msg.turtle1_linear_vel = self.turtle1_linear_vel
            feedback_msg.turtle1_angular_vel = self.turtle1_angular_vel
            
            feedback_msg.explorer_x = self.explorer_pose.x if self.explorer_pose else 0.0
            feedback_msg.explorer_y = self.explorer_pose.y if self.explorer_pose else 0.0
            feedback_msg.explorer_theta = self.explorer_pose.theta if self.explorer_pose else 0.0
            feedback_msg.explorer_linear_vel = self.explorer_linear_vel
            feedback_msg.explorer_angular_vel = self.explorer_angular_vel
            
            feedback_msg.distance = distance
            feedback_msg.timestamp = datetime.now().strftime('%Y-%m-%d %H:%M:%S.%f')[:-3]
            
            # Publicar feedback
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Feedback enviado. Distancia: {distance:.3f}')
            
            # Verificar condición de finalización
            # Explorer ha alcanzado a turtle1 Y está detenido
            if distance < catch_distance:
                # Verificar que explorer está detenido (velocidad muy baja)
                if abs(self.explorer_linear_vel) < 0.1 and abs(self.explorer_angular_vel) < 0.1:
                    stop_counter += 1
                    if stop_counter >= 3:  # Confirmar que está detenido por 3 ciclos
                        caught = True
                        break
                else:
                    stop_counter = 0
            else:
                stop_counter = 0
            
            # Esperar hasta el siguiente ciclo
            await self._async_sleep(period)
        
        # Goal completado
        total_time = time.time() - start_time
        
        if caught:
            goal_handle.succeed()
            result.success = True
            result.message = f'¡Explorer ha alcanzado a turtle1 y se ha detenido!'
            result.final_distance = distance
            result.total_time = total_time
            self.get_logger().info(
                f'Goal completado exitosamente. Tiempo total: {total_time:.2f}s'
            )
        else:
            goal_handle.abort()
            result.success = False
            result.message = 'El goal fue abortado'
            result.final_distance = distance
            result.total_time = total_time
        
        return result

    async def _async_sleep(self, duration: float):
        """Sleep asíncrono para no bloquear el executor."""
        import asyncio
        await asyncio.sleep(duration)


def main(args=None):
    rclpy.init(args=args)
    
    node = TurtleInfoActionServer()
    
    # Usar MultiThreadedExecutor para manejar callbacks concurrentes
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
