# turtle_tracker

Sistema de seguimiento de tortugas para TurtleSim (EOII Trabajo 2)

Contenido:
- Nodo `spawn_explorer`: crea la tortuga `explorer` mediante `/spawn` (parámetros `explorer_x`, `explorer_y`)
- Nodo `explorer_follower`: realiza seguimiento proporcional de `turtle1` por parte de `explorer`
- Nodo `state_server`: provee servicio `turtle_info` (snapshot) y Action Server `turtle_info_action` (feedback periódico hasta captura)
- Nodo `turtle_info_client`: cliente que consulta el servicio `turtle_info` cada segundo
- Nodo `turtle_info_action_client`: ejemplo de cliente de acción que recibe feedback

Instrucciones rápidas:
1. Activar entorno ROS2: usa tu alias `ros_activate` como indicaste.
2. Compilar el paquete:
   - Coloca este paquete en `src/` de tu workspace y ejecuta `colcon build` desde la raíz del workspace.
   - Fuente del entorno de instalación: `source install/setup.bash` (o `source install/setup.zsh` según shell) o ejecuta `ros_activate` si ya lo tienes definido.

4. Lanzar el sistema completo (en una terminal):
   - `ros2 launch turtle_tracker turtle_tracker_launch.xml`

5. Teleoperar `turtle1` (en otra terminal):
   - `ros2 run turtlesim turtle_teleop_key`

6. Verificar comportamiento:
   - Observa que aparece la tortuga `explorer` en la posición configurada y que persigue a `turtle1` cuando la mueves.
   - El nodo `turtle_info_client` imprimirá la información cada segundo en la consola (E4).
   - Si quieres probar el Action Server envía un goal con:
     `ros2 run turtle_tracker turtle_info_action_client` (muestra feedback periódico y termina cuando se alcanza `turtle1`).

7. Parámetros y límites:
   - Puedes cambiar la posición inicial de `explorer` en `launch/turtle_tracker_launch.xml` (parámetros `explorer_x` y `explorer_y`).
   - Si la posición está fuera de los límites [0.5, 10.5] se ajustará automáticamente al rango válido.

Notas:
- Los parámetros `explorer_x` y `explorer_y` se validan en `spawn_explorer` para garantizar que estén dentro de los límites de la simulación (0.5..10.5).
- Todos los scripts están en Python y los comentarios/documentación en castellano.
