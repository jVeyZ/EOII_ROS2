#!/usr/bin/env python3
"""
E3 - Servicio turtle_info.

Proporciona información completa sobre las tortugas:
- Posición (x, y) de ambas tortugas
- Orientación (theta) de ambas tortugas
- Velocidades lineales y angulares actuales
- Distancia euclidiana entre ambas tortugas
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
from turtlesim.msg import Pose
from datetime import datetime
import math

from turtle_tracker.srv import TurtleInfo


class TurtleInfoService(Node):
    """Nodo servidor del servicio turtle_info."""

    def __init__(self):
        super().__init__('turtle_info_service')
        
        # Estado de las tortugas
        self.turtle1_pose = None
        self.explorer_pose = None
        
        # Velocidades (obtenidas de las poses que incluyen linear_velocity y angular_velocity)
        self.turtle1_linear_vel = 0.0
        self.turtle1_angular_vel = 0.0
        self.explorer_linear_vel = 0.0
        self.explorer_angular_vel = 0.0
        
        # Suscriptores a las poses
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
        
        # Crear el servicio turtle_info
        self.service = self.create_service(
            TurtleInfo,
            'turtle_info',
            self.turtle_info_callback
        )
        
        self.get_logger().info('Servicio turtle_info iniciado y listo.')

    def turtle1_pose_callback(self, msg: Pose):
        """Callback para actualizar pose y velocidades de turtle1."""
        self.turtle1_pose = msg
        self.turtle1_linear_vel = msg.linear_velocity
        self.turtle1_angular_vel = msg.angular_velocity

    def explorer_pose_callback(self, msg: Pose):
        """Callback para actualizar pose y velocidades de explorer."""
        self.explorer_pose = msg
        self.explorer_linear_vel = msg.linear_velocity
        self.explorer_angular_vel = msg.angular_velocity

    def calculate_distance(self) -> float:
        """Calcula la distancia euclidiana entre las dos tortugas."""
        if self.turtle1_pose is None or self.explorer_pose is None:
            return -1.0
        
        dx = self.turtle1_pose.x - self.explorer_pose.x
        dy = self.turtle1_pose.y - self.explorer_pose.y
        return math.sqrt(dx**2 + dy**2)

    def turtle_info_callback(self, request, response):
        """Callback del servicio que retorna la información de las tortugas."""
        self.get_logger().info('Solicitud de información recibida')
        
        # Llenar la respuesta con la información de turtle1
        if self.turtle1_pose is not None:
            response.turtle1_x = self.turtle1_pose.x
            response.turtle1_y = self.turtle1_pose.y
            response.turtle1_theta = self.turtle1_pose.theta
            response.turtle1_linear_vel = self.turtle1_linear_vel
            response.turtle1_angular_vel = self.turtle1_angular_vel
        else:
            self.get_logger().warn('turtle1 pose no disponible')
            response.turtle1_x = -1.0
            response.turtle1_y = -1.0
            response.turtle1_theta = 0.0
            response.turtle1_linear_vel = 0.0
            response.turtle1_angular_vel = 0.0
        
        # Llenar la respuesta con la información de explorer
        if self.explorer_pose is not None:
            response.explorer_x = self.explorer_pose.x
            response.explorer_y = self.explorer_pose.y
            response.explorer_theta = self.explorer_pose.theta
            response.explorer_linear_vel = self.explorer_linear_vel
            response.explorer_angular_vel = self.explorer_angular_vel
        else:
            self.get_logger().warn('explorer pose no disponible')
            response.explorer_x = -1.0
            response.explorer_y = -1.0
            response.explorer_theta = 0.0
            response.explorer_linear_vel = 0.0
            response.explorer_angular_vel = 0.0
        
        # Calcular y establecer la distancia
        response.distance = self.calculate_distance()
        
        # Timestamp
        response.timestamp = datetime.now().strftime('%Y-%m-%d %H:%M:%S.%f')[:-3]
        
        self.get_logger().info(f'Distancia actual: {response.distance:.3f}')
        
        return response


def main(args=None):
    rclpy.init(args=args)
    
    node = TurtleInfoService()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
