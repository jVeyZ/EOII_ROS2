cmake_minimum_required(VERSION 3.10)
project(turtle_tracker)

# Encontrar paquetes necesarios
find_package(ament_cmake REQUIRED)

# NOTE: Se evita la generación de interfaces ROSIDL debido a problemas de compatibilidad
# con la instalación actual de ROS en el entorno del alumno. En su lugar se usan
# servicios y tópicos con tipos estándares (`example_interfaces/Trigger`, `std_msgs/String`).

# Instalación del paquete Python
ament_python_install_package(${PROJECT_NAME})

# Instalar ficheros de launch en share/<package>/launch para que ros2 launch
# pueda encontrarlos cuando se haga source al workspace
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

# Instalar scripts Python como ejecutables en lib/<package> para que ros2 launch
# pueda encontrarlos como <node pkg="turtle_tracker" exec="spawn_explorer" ...>
install(PROGRAMS
  "turtle_tracker/spawn_explorer"
  "turtle_tracker/explorer_follower"
  "turtle_tracker/state_server"
  "turtle_tracker/turtle_info_client"
  "turtle_tracker/turtle_info_action_client"
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
