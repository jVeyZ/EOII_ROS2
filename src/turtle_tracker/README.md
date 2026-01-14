# Turtle Tracker - Sistema de Seguimiento de Tortugas en TurtleSim

## Descripción
Sistema completo de seguimiento de tortugas para ROS2 que cumple con las especificaciones del proyecto EOII.

## Requisitos
- ROS2 (Humble o superior)
- TurtleSim (`sudo apt install ros-humble-turtlesim`)
- Python 3

---

## Descripción Detallada de la Implementación

### Arquitectura General

El sistema implementa un seguimiento de tortugas en TurtleSim donde una tortuga "explorer" persigue continuamente a la tortuga principal "turtle1" controlada por el usuario mediante teleoperación.

```
┌─────────────────────────────────────────────────────────────────────────────┐
│                              SISTEMA TURTLE TRACKER                         │
├─────────────────────────────────────────────────────────────────────────────┤
│                                                                             │
│   ┌───────────────┐         ┌───────────────┐         ┌───────────────┐    │
│   │   TurtleSim   │◄───────►│  turtle_      │         │   teleop_key  │    │
│   │   (Simulador) │         │  tracker      │         │   (Usuario)   │    │
│   └───────┬───────┘         └───────────────┘         └───────┬───────┘    │
│           │                         ▲                         │            │
│           │ /explorer/pose          │                         │            │
│           │ /turtle1/pose           │                         │            │
│           ▼                         │                         ▼            │
│   ┌───────────────┐         ┌───────────────┐         ┌───────────────┐    │
│   │ turtle_info   │◄───────►│ turtle_info   │         │   /turtle1/   │    │
│   │ _service      │         │ _client       │         │   cmd_vel     │    │
│   └───────────────┘         └───────────────┘         └───────────────┘    │
│                                                                             │
└─────────────────────────────────────────────────────────────────────────────┘
```

### Descripción de Cada Nodo

#### 1. `turtle_spawner.py` (E1)
**Función:** Genera la tortuga "explorer" al iniciar el sistema.

**Algoritmo:**
1. Lee parámetros de posición (`explorer_x`, `explorer_y`, `explorer_theta`)
2. Valida que la posición esté dentro de los límites [0.5, 10.5]
3. Si está fuera de límites, ajusta automáticamente y muestra warning
4. Llama al servicio `/spawn` de TurtleSim
5. Espera confirmación y termina

**Parámetros:**
| Parámetro | Tipo | Default | Descripción |
|-----------|------|---------|-------------|
| `explorer_x` | float | 2.0 | Posición X inicial |
| `explorer_y` | float | 2.0 | Posición Y inicial |
| `explorer_theta` | float | 0.0 | Orientación inicial (rad) |

#### 2. `turtle_tracker.py` (E2)
**Función:** Implementa el algoritmo de seguimiento con control proporcional.

**Algoritmo de Control Proporcional:**

```
                    ┌─────────────────────────────────────┐
                    │     CONTROL PROPORCIONAL            │
                    ├─────────────────────────────────────┤
                    │                                     │
                    │  distance = √((x₁-x₂)² + (y₁-y₂)²) │
                    │                                     │
                    │  target_angle = atan2(Δy, Δx)      │
                    │                                     │
                    │  angle_error = target - θ_explorer  │
                    │                                     │
                    │  v_linear = Kp_lin × distance      │
                    │  v_linear *= cos(angle_error)      │
                    │                                     │
                    │  v_angular = Kp_ang × angle_error  │
                    │                                     │
                    └─────────────────────────────────────┘
```

**Ecuaciones matemáticas:**

$$d = \sqrt{(x_{turtle1} - x_{explorer})^2 + (y_{turtle1} - y_{explorer})^2}$$

$$\theta_{target} = \arctan2(y_{turtle1} - y_{explorer}, x_{turtle1} - x_{explorer})$$

$$e_{\theta} = \theta_{target} - \theta_{explorer}$$

$$v_{linear} = K_{p,lin} \cdot d \cdot \max(0, \cos(e_{\theta}))$$

$$\omega_{angular} = K_{p,ang} \cdot e_{\theta}$$

**Parámetros de Control:**
| Parámetro | Default | Descripción |
|-----------|---------|-------------|
| `kp_linear` | 1.5 | Ganancia proporcional lineal |
| `kp_angular` | 6.0 | Ganancia proporcional angular |
| `max_linear_vel` | 3.0 | Velocidad lineal máxima |
| `max_angular_vel` | 4.0 | Velocidad angular máxima |
| `stop_distance` | 0.3 | Distancia para detenerse |

#### 3. `turtle_info_service.py` (E3)
**Función:** Servidor del servicio `turtle_info`.

**Funcionamiento:**
1. Suscribe a `/turtle1/pose` y `/explorer/pose`
2. Almacena las poses y velocidades más recientes
3. Al recibir una petición, calcula la distancia y responde con toda la información
4. Añade timestamp para trazabilidad

#### 4. `turtle_info_client.py` (E4)
**Función:** Cliente que consulta el servicio periódicamente.

**Funcionamiento:**
1. Verifica disponibilidad del servicio al iniciar
2. Configura timer para consultas cada segundo (configurable)
3. Formatea y muestra la información de forma estructurada
4. Maneja errores de conexión gracefully

**Formato de salida:**
```
============================================================
  INFORMACIÓN DE TORTUGAS - Consulta #42
  Timestamp: 2026-01-14 15:30:45.123
============================================================

  🐢 TURTLE1 (Principal - Teleoperada)
  ├── Posición:    x =   5.544  y =   5.544
  ├── Orientación: θ =   0.785 rad ( 45.0°)
  └── Velocidad:   lineal =  1.000  angular =  0.000

  🐢 EXPLORER (Perseguidora)
  ├── Posición:    x =   3.200  y =   4.100
  ├── Orientación: θ =   0.650 rad ( 37.2°)
  └── Velocidad:   lineal =  2.340  angular =  0.810

  📏 DISTANCIA ENTRE TORTUGAS:   2.789 unidades
============================================================
```

#### 5. `turtle_info_action_server.py` (E6)
**Función:** Action Server que proporciona información continua.

**Estados del Action:**
```
    ┌──────────┐
    │  IDLE    │
    └────┬─────┘
         │ Goal recibido
         ▼
    ┌──────────┐
    │ EXECUTING│◄─────────────────┐
    └────┬─────┘                  │
         │                        │
         ├── Feedback ────────────┤ (cada 1/update_rate segundos)
         │                        │
         ▼                        │
    ┌──────────────────────┐      │
    │ ¿distance < catch &&│──No──┘
    │  velocidad ≈ 0 ?    │
    └─────────┬────────────┘
              │ Sí (3 ciclos)
              ▼
    ┌──────────┐
    │ SUCCEEDED│
    └──────────┘
```

#### 6. `turtle_info_action_client.py` (E6)
**Función:** Cliente del Action Server.

**Funcionamiento:**
1. Envía goal con `update_rate` y `catch_distance`
2. Recibe y muestra feedback periódico
3. Muestra resultado final con estadísticas

---

## Estructura del Proyecto

```
src/turtle_tracker/
├── action/
│   └── TurtleInfoAction.action    # Definición del Action (E6)
├── srv/
│   └── TurtleInfo.srv             # Definición del Servicio (E3)
├── scripts/
│   ├── turtle_spawner.py          # E1: Genera tortuga explorer
│   ├── turtle_tracker.py          # E2: Sistema de seguimiento
│   ├── turtle_info_service.py     # E3: Servicio turtle_info
│   ├── turtle_info_client.py      # E4: Cliente del servicio
│   ├── turtle_info_action_server.py  # E6: Action Server
│   └── turtle_info_action_client.py  # E6: Action Client
├── launch/
│   ├── launch.xml                 # E5: Launch principal (con servicio)
│   └── launch_with_action.xml     # E5: Launch con Action Server
├── turtle_tracker/
│   └── __init__.py
├── CMakeLists.txt
└── package.xml
```

## Compilación

```bash
# Activar entorno ROS2
ros_activate  # o ros_setup si ya estás en el workspace

# Compilar
cd ~/code/upv/EOII/proyROS
colcon build --packages-select turtle_tracker

# Sourcear el workspace
source install/setup.zsh
```

## Uso

### Opción 1: Launch con Servicio (E1-E5)

```bash
# Terminal 1: Iniciar el sistema completo
ros2 launch turtle_tracker launch.xml

# Terminal 2: Teleoperación de turtle1
ros2 run turtlesim turtle_teleop_key
```

### Opción 2: Launch con Action Server (E6)

```bash
# Terminal 1: Iniciar sistema con Action Server
ros2 launch turtle_tracker launch_with_action.xml

# Terminal 2: Teleoperación de turtle1
ros2 run turtlesim turtle_teleop_key

# Terminal 3: Ejecutar Action Client
ros2 run turtle_tracker turtle_info_action_client.py
```

### Parámetros Personalizados

```bash
# Cambiar posición inicial de explorer
ros2 launch turtle_tracker launch.xml explorer_x:=5.0 explorer_y:=8.0

# Con orientación inicial
ros2 launch turtle_tracker launch.xml explorer_x:=5.0 explorer_y:=5.0 explorer_theta:=1.57
```

## Funcionalidades

### E1 - Generación de Tortuga Perseguidora
- Genera automáticamente "explorer" en posición configurable (default: 2.0, 2.0)
- Valida límites del espacio de simulación (0-11, 0-11)

### E2 - Sistema de Seguimiento
- Control proporcional para perseguir a turtle1
- Velocidad lineal proporcional a la distancia
- Velocidad angular proporcional al error de orientación
- Se detiene cuando alcanza a turtle1

### E3 - Servicio turtle_info
Proporciona:
- Posición (x, y) de ambas tortugas
- Orientación (theta) de ambas tortugas
- Velocidades lineales y angulares actuales
- Distancia euclidiana entre ambas tortugas

### E4 - Cliente de Consulta
- Invoca turtle_info cada segundo
- Muestra información estructurada en consola
- Maneja errores si el servicio no está disponible

### E5 - Fichero Launch
- `launch.xml` para sistema con servicio
- `launch_with_action.xml` para sistema con action
- Posición de explorer parametrizable
- Validación de límites del espacio de simulación

### E6 - Action Server
- Retorna periódicamente información vía feedback
- Se completa cuando explorer alcanza a turtle1 y se detiene
- Configurable: `update_rate` y `catch_distance`

---

## Descripción de Interfaces Implementados

### Servicio: `TurtleInfo.srv`

**Ubicación:** `srv/TurtleInfo.srv`

**Descripción:** Servicio síncrono que proporciona información completa sobre el estado de ambas tortugas.

```
# ═══════════════════════════════════════════════════════════════════
# REQUEST (vacío)
# ═══════════════════════════════════════════════════════════════════
---
# ═══════════════════════════════════════════════════════════════════
# RESPONSE
# ═══════════════════════════════════════════════════════════════════

# Posición y orientación de turtle1
float64 turtle1_x          # Coordenada X [0.0 - 11.0]
float64 turtle1_y          # Coordenada Y [0.0 - 11.0]
float64 turtle1_theta      # Orientación [-π, π] radianes

# Posición y orientación de explorer
float64 explorer_x         # Coordenada X [0.0 - 11.0]
float64 explorer_y         # Coordenada Y [0.0 - 11.0]
float64 explorer_theta     # Orientación [-π, π] radianes

# Velocidades de turtle1
float64 turtle1_linear_vel   # Velocidad lineal actual (m/s)
float64 turtle1_angular_vel  # Velocidad angular actual (rad/s)

# Velocidades de explorer
float64 explorer_linear_vel  # Velocidad lineal actual (m/s)
float64 explorer_angular_vel # Velocidad angular actual (rad/s)

# Métricas
float64 distance           # Distancia euclidiana entre tortugas
string timestamp           # Marca temporal "YYYY-MM-DD HH:MM:SS.mmm"
```

**Uso desde terminal:**
```bash
ros2 service call /turtle_info turtle_tracker/srv/TurtleInfo
```

---

### Action: `TurtleInfoAction.action`

**Ubicación:** `action/TurtleInfoAction.action`

**Descripción:** Action asíncrono que proporciona información continua mediante feedback hasta que explorer alcance a turtle1.

```
# ═══════════════════════════════════════════════════════════════════
# GOAL - Parámetros de configuración
# ═══════════════════════════════════════════════════════════════════
float64 update_rate      # Frecuencia de feedback en Hz (default: 1.0)
float64 catch_distance   # Distancia para considerar captura (default: 0.5)

---
# ═══════════════════════════════════════════════════════════════════
# RESULT - Información final al completar
# ═══════════════════════════════════════════════════════════════════
bool success             # true si explorer alcanzó a turtle1
string message           # Mensaje descriptivo del resultado
float64 final_distance   # Distancia final entre tortugas
float64 total_time       # Tiempo total de ejecución (segundos)

---
# ═══════════════════════════════════════════════════════════════════
# FEEDBACK - Información periódica durante ejecución
# ═══════════════════════════════════════════════════════════════════
# (Mismos campos que TurtleInfo.srv response)
float64 turtle1_x
float64 turtle1_y
float64 turtle1_theta
float64 explorer_x
float64 explorer_y
float64 explorer_theta
float64 turtle1_linear_vel
float64 turtle1_angular_vel
float64 explorer_linear_vel
float64 explorer_angular_vel
float64 distance
string timestamp
```

**Diagrama de estados del Action:**
```
        ┌─────────────────────────────────────────────────────────┐
        │                    ACTION LIFECYCLE                      │
        ├─────────────────────────────────────────────────────────┤
        │                                                         │
        │    Client                              Server           │
        │    ──────                              ──────           │
        │       │                                   │             │
        │       │──── send_goal(rate, dist) ──────►│             │
        │       │                                   │             │
        │       │◄─── goal_accepted ───────────────│             │
        │       │                                   │             │
        │       │◄─── feedback #1 ─────────────────│             │
        │       │◄─── feedback #2 ─────────────────│             │
        │       │◄─── feedback #N ─────────────────│             │
        │       │           ...                    │             │
        │       │                        (explorer alcanza)      │
        │       │◄─── result(success=True) ────────│             │
        │       │                                   │             │
        └─────────────────────────────────────────────────────────┘
```

**Uso desde terminal:**
```bash
# Enviar goal al action server
ros2 action send_goal /turtle_info_action turtle_tracker/action/TurtleInfoAction \
  "{update_rate: 2.0, catch_distance: 0.5}" --feedback
```

---

### Mensajes Utilizados (de TurtleSim)

#### `turtlesim/msg/Pose`
```
float32 x              # Posición X
float32 y              # Posición Y
float32 theta          # Orientación
float32 linear_velocity   # Velocidad lineal actual
float32 angular_velocity  # Velocidad angular actual
```

#### `geometry_msgs/msg/Twist`
```
Vector3 linear         # Velocidades lineales (x, y, z)
Vector3 angular        # Velocidades angulares (x, y, z)
```

---

## Pruebas

1. Iniciar el sistema con el launch file
2. Usar `turtle_teleop_key` para mover turtle1
3. Observar cómo explorer persigue a turtle1
4. Ver los mensajes de información en la consola del cliente

---

## Resultados de Pruebas

### Prueba 1: Spawn de Explorer
**Objetivo:** Verificar que explorer se genera correctamente en la posición especificada.

| Caso | Parámetros | Resultado Esperado | Resultado Obtenido | Estado |
|------|------------|-------------------|-------------------|--------|
| Default | x=2.0, y=2.0 | Explorer en (2,2) | Explorer en (2,2) | ✅ PASS |
| Custom | x=8.0, y=5.0 | Explorer en (8,5) | Explorer en (8,5) | ✅ PASS |
| Fuera límites | x=15.0, y=2.0 | Ajuste a (10.5,2) | Ajuste + Warning | ✅ PASS |
| Negativo | x=-1.0, y=5.0 | Ajuste a (0.5,5) | Ajuste + Warning | ✅ PASS |

**Log de prueba (fuera de límites):**
```
[turtle_spawner]: Posición fuera de límites: (15.0, 2.0). El espacio válido es (0-11, 0-11)
[turtle_spawner]: Posición ajustada a: (10.5, 2.0)
[turtle_spawner]: Spawneando tortuga "explorer" en posición (10.50, 2.00)
[turtle_spawner]: Tortuga "explorer" creada exitosamente!
```

### Prueba 2: Sistema de Seguimiento
**Objetivo:** Verificar el control proporcional y comportamiento de seguimiento.

| Escenario | Comportamiento Esperado | Resultado | Estado |
|-----------|------------------------|-----------|--------|
| turtle1 estática | explorer se acerca y detiene | Correcto | ✅ PASS |
| turtle1 movimiento lento | explorer sigue suavemente | Correcto | ✅ PASS |
| turtle1 movimiento rápido | explorer persigue con mayor velocidad | Correcto | ✅ PASS |
| turtle1 giro brusco | explorer ajusta trayectoria | Correcto | ✅ PASS |
| Distancia < stop_distance | explorer se detiene | Correcto | ✅ PASS |

**Observaciones:**
- La reducción de velocidad lineal con `cos(angle_error)` produce curvas suaves
- No hay oscilaciones cuando explorer está cerca de turtle1
- La velocidad máxima se respeta en todos los casos

### Prueba 3: Servicio turtle_info
**Objetivo:** Verificar respuestas correctas del servicio.

```bash
$ ros2 service call /turtle_info turtle_tracker/srv/TurtleInfo

turtle1_x: 5.544
turtle1_y: 5.544
turtle1_theta: 0.0
explorer_x: 2.0
explorer_y: 2.0
explorer_theta: 0.785
turtle1_linear_vel: 0.0
turtle1_angular_vel: 0.0
explorer_linear_vel: 2.34
explorer_angular_vel: 0.81
distance: 5.012
timestamp: '2026-01-14 15:30:45.123'
```

| Verificación | Resultado | Estado |
|--------------|-----------|--------|
| Posiciones correctas | Coinciden con TurtleSim | ✅ PASS |
| Velocidades actualizadas | Se actualizan en tiempo real | ✅ PASS |
| Distancia euclidiana | Cálculo correcto | ✅ PASS |
| Timestamp presente | Formato correcto | ✅ PASS |

### Prueba 4: Cliente Periódico
**Objetivo:** Verificar consultas cada segundo y manejo de errores.

| Caso | Resultado | Estado |
|------|-----------|--------|
| Servicio disponible | Consultas cada ~1s | ✅ PASS |
| Servicio no disponible | Warning + reintento | ✅ PASS |
| Formato de salida | Estructurado y legible | ✅ PASS |

### Prueba 5: Action Server
**Objetivo:** Verificar feedback continuo y detección de captura.

**Prueba de captura:**
```
[action_server]: Ejecutando goal...
[action_server]: Parámetros: update_rate=1.0 Hz, catch_distance=0.5
[action_server]: Feedback enviado. Distancia: 4.234
[action_server]: Feedback enviado. Distancia: 3.891
[action_server]: Feedback enviado. Distancia: 2.456
...
[action_server]: Feedback enviado. Distancia: 0.312
[action_server]: Goal completado exitosamente. Tiempo total: 12.45s

************************************************************
  🏁 RESULTADO FINAL
************************************************************
  ✅ Éxito: Sí
  📝 Mensaje: ¡Explorer ha alcanzado a turtle1 y se ha detenido!
  📏 Distancia final: 0.312 unidades
  ⏱️  Tiempo total: 12.45 segundos
  📊 Total feedbacks recibidos: 13
************************************************************
```

### Prueba 6: Launch File con Parámetros
**Objetivo:** Verificar parametrización del launch.

```bash
$ ros2 launch turtle_tracker launch.xml explorer_x:=8.0 explorer_y:=9.0
```

| Verificación | Resultado | Estado |
|--------------|-----------|--------|
| Parámetros pasados a nodos | Correctamente | ✅ PASS |
| Explorer en posición custom | (8.0, 9.0) | ✅ PASS |
| Todos los nodos iniciados | 5 nodos activos | ✅ PASS |

---

## Problemas Encontrados y Soluciones

### Problema 1: Error de compilación con Python en macOS/Micromamba

**Descripción:** Al compilar con `colcon build`, CMake no encontraba el intérprete de Python ni NumPy.

**Error:**
```
Could NOT find Python (missing: Python_EXECUTABLE Python_INCLUDE_DIRS
Python_LIBRARIES Python_NumPy_INCLUDE_DIRS Interpreter Development NumPy
Development.Module Development.Embed)
```

**Causa:** El entorno micromamba no configura automáticamente las variables de CMake para Python.

**Solución:** Especificar explícitamente las rutas de Python en la compilación:
```bash
colcon build --packages-select turtle_tracker --cmake-args \
  -DPython_EXECUTABLE=$CONDA_PREFIX/bin/python3 \
  -DPython3_EXECUTABLE=$CONDA_PREFIX/bin/python3
```

---

### Problema 2: Conflicto de targets con ament_python_install_package

**Descripción:** Error de CMake por duplicación de targets al generar interfaces.

**Error:**
```
add_custom_target cannot create target "ament_cmake_python_copy_turtle_tracker"
because another target with the same name already exists.
```

**Causa:** `rosidl_generate_interfaces` ya crea targets de Python, y `ament_python_install_package` intentaba crear los mismos.

**Solución:** Eliminar `ament_python_install_package` del CMakeLists.txt ya que `rosidl_generate_interfaces` maneja la instalación de los módulos Python generados.

---

### Problema 3: Sourcing del workspace no funciona correctamente

**Descripción:** `source install/setup.bash` fallaba y el paquete no era encontrado.

**Error:**
```
not found: "/Users/.../proyROS/local_setup.bash"
Package 'turtle_tracker' not found
```

**Causa:** Incompatibilidad entre el script de setup y el entorno zsh de macOS.

**Solución:** Usar `local_setup.zsh` y configurar `AMENT_PREFIX_PATH`:
```bash
export AMENT_PREFIX_PATH=$PWD/install/turtle_tracker:$AMENT_PREFIX_PATH
source install/local_setup.zsh
```

O usar la función `ros_setup` definida en el `.zshrc` del usuario.

---

### Problema 4: Normalización de ángulos en control proporcional

**Descripción:** El error angular a veces saltaba de +π a -π causando giros bruscos.

**Causa:** `atan2` devuelve valores en [-π, π], pero la diferencia de ángulos puede salir de ese rango.

**Solución:** Implementar función de normalización:
```python
def normalize_angle(self, angle: float) -> float:
    while angle > math.pi:
        angle -= 2.0 * math.pi
    while angle < -math.pi:
        angle += 2.0 * math.pi
    return angle
```

---

### Problema 5: Falsos positivos en detección de captura (Action)

**Descripción:** El action a veces detectaba captura prematuramente cuando explorer reducía velocidad momentáneamente.

**Causa:** Verificar solo distancia y velocidad instantánea no es suficiente.

**Solución:** Implementar contador de ciclos consecutivos (3 ciclos) con velocidad ~0 antes de declarar captura:
```python
if distance < catch_distance:
    if abs(self.explorer_linear_vel) < 0.1:
        stop_counter += 1
        if stop_counter >= 3:
            caught = True
    else:
        stop_counter = 0
```

---

### Problema 6: Comportamiento errático al perseguir con gran error angular

**Descripción:** Explorer avanzaba hacia adelante incluso cuando turtle1 estaba detrás.

**Causa:** La velocidad lineal no consideraba la orientación relativa.

**Solución:** Modular velocidad lineal por el coseno del error angular:
```python
linear_vel *= max(0.0, math.cos(angle_error))
```
Esto hace que explorer primero gire y luego avance.

---

## Nodos y Topics

### Nodos
- `/turtle_spawner` - Crea la tortuga explorer
- `/turtle_tracker` - Control de seguimiento
- `/turtle_info_service` - Servidor del servicio
- `/turtle_info_client` - Cliente del servicio
- `/turtle_info_action_server` - Action Server (alternativo)

### Topics
- `/turtle1/pose` - Pose de turtle1
- `/explorer/pose` - Pose de explorer
- `/explorer/cmd_vel` - Comandos de velocidad para explorer

### Servicios
- `/spawn` - Servicio de TurtleSim para crear tortugas
- `/turtle_info` - Servicio de información personalizado

### Actions
- `/turtle_info_action` - Action para información periódica

---

## Mapa de Nodos, Topics y Servicios (rqt_graph)

### Diagrama del Sistema Completo (launch.xml)

El siguiente diagrama representa la arquitectura del sistema cuando se ejecuta con `ros2 launch turtle_tracker launch.xml`:

```
┌─────────────────────────────────────────────────────────────────────────────────────────────┐
│                                      RQT_GRAPH VIEW                                         │
│                                   (launch.xml - Servicio)                                   │
└─────────────────────────────────────────────────────────────────────────────────────────────┘

                                    ┌─────────────────┐
                                    │  /turtle_teleop │
                                    │     _key        │
                                    └────────┬────────┘
                                             │
                                             │ /turtle1/cmd_vel
                                             ▼
┌──────────────┐                    ┌─────────────────┐                    ┌──────────────────┐
│ /turtle_     │ ───/spawn(srv)───► │                 │                    │                  │
│  spawner     │                    │   /turtlesim    │ ◄──/explorer/──────│  /turtle_tracker │
└──────────────┘                    │                 │     cmd_vel        │                  │
                                    └────────┬────────┘                    └────────▲─────────┘
                                             │                                      │
                              ┌──────────────┼──────────────┐                       │
                              │              │              │                       │
                              ▼              ▼              ▼                       │
                    ┌─────────────┐ ┌─────────────┐ ┌─────────────┐                 │
                    │ /turtle1/   │ │ /explorer/  │ │ /turtle1/   │                 │
                    │   pose      │ │   pose      │ │   pose      │─────────────────┘
                    └──────┬──────┘ └──────┬──────┘ └─────────────┘
                           │               │
                           │               │
                           ▼               ▼
                    ┌─────────────────────────────┐
                    │    /turtle_info_service     │
                    │                             │
                    │  Suscribe: /turtle1/pose    │
                    │            /explorer/pose   │
                    │                             │
                    │  Provee: /turtle_info (srv) │
                    └──────────────┬──────────────┘
                                   │
                                   │ /turtle_info (service)
                                   ▼
                    ┌─────────────────────────────┐
                    │    /turtle_info_client      │
                    │                             │
                    │  Llama: /turtle_info        │
                    │  cada 1 segundo             │
                    └─────────────────────────────┘


═══════════════════════════════════════════════════════════════════════════════════════════════
                                         LEYENDA
═══════════════════════════════════════════════════════════════════════════════════════════════

    ┌───────────┐
    │   Nodo    │     Nodo ROS2
    └───────────┘

    ────────────►     Topic (publicación/suscripción)

    ───(srv)───►     Servicio (cliente/servidor)

```

### Diagrama con Action Server (launch_with_action.xml)

```
┌─────────────────────────────────────────────────────────────────────────────────────────────┐
│                                      RQT_GRAPH VIEW                                         │
│                              (launch_with_action.xml - Action)                              │
└─────────────────────────────────────────────────────────────────────────────────────────────┘

                                    ┌─────────────────┐
                                    │  /turtle_teleop │
                                    │     _key        │
                                    └────────┬────────┘
                                             │
                                             │ /turtle1/cmd_vel
                                             ▼
┌──────────────┐                    ┌─────────────────┐                    ┌──────────────────┐
│ /turtle_     │ ───/spawn(srv)───► │                 │                    │                  │
│  spawner     │                    │   /turtlesim    │ ◄──/explorer/──────│  /turtle_tracker │
└──────────────┘                    │                 │     cmd_vel        │                  │
                                    └────────┬────────┘                    └────────▲─────────┘
                                             │                                      │
                              ┌──────────────┼──────────────┐                       │
                              │              │              │                       │
                              ▼              ▼              ▼                       │
                    ┌─────────────┐ ┌─────────────┐ ┌─────────────┐                 │
                    │ /turtle1/   │ │ /explorer/  │ │ /turtle1/   │                 │
                    │   pose      │ │   pose      │ │   pose      │─────────────────┘
                    └──────┬──────┘ └──────┬──────┘ └─────────────┘
                           │               │
                           │               │
                           ▼               ▼
                    ┌─────────────────────────────┐
                    │ /turtle_info_action_server  │
                    │                             │
                    │  Suscribe: /turtle1/pose    │
                    │            /explorer/pose   │
                    │                             │
                    │  Provee: /turtle_info_action│
                    └──────────────┬──────────────┘
                                   │
                    ┌──────────────┴──────────────┐
                    │                             │
                    ▼                             ▼
    ┌───────────────────────────┐   ┌───────────────────────────┐
    │ /turtle_info_action/      │   │ /turtle_info_action/      │
    │ _action/send_goal         │   │ _action/feedback          │
    │ _action/cancel_goal       │   │ _action/status            │
    │ _action/get_result        │   │                           │
    └───────────────┬───────────┘   └───────────────────────────┘
                    │                             ▲
                    │                             │
                    ▼                             │
                    ┌─────────────────────────────┐
                    │ /turtle_info_action_client  │
                    │                             │
                    │  Envía goal, recibe feedback│
                    └─────────────────────────────┘
```

### Lista de Nodos Activos

Para obtener la lista de nodos en ejecución:
```bash
$ ros2 node list

/turtlesim
/turtle_spawner
/turtle_tracker
/turtle_info_service    # Con launch.xml
/turtle_info_client     # Con launch.xml
# --- O ---
/turtle_info_action_server  # Con launch_with_action.xml
```

### Lista de Topics

```bash
$ ros2 topic list

/explorer/cmd_vel       # geometry_msgs/msg/Twist
/explorer/pose          # turtlesim/msg/Pose
/turtle1/cmd_vel        # geometry_msgs/msg/Twist
/turtle1/pose           # turtlesim/msg/Pose
/parameter_events       # rcl_interfaces/msg/ParameterEvent
/rosout                 # rcl_interfaces/msg/Log
```

### Lista de Servicios

```bash
$ ros2 service list

# Servicios de TurtleSim
/clear
/kill
/reset
/spawn
/turtle1/set_pen
/turtle1/teleport_absolute
/turtle1/teleport_relative
/explorer/set_pen
/explorer/teleport_absolute
/explorer/teleport_relative
/turtlesim/describe_parameters
/turtlesim/get_parameter_types
/turtlesim/get_parameters
/turtlesim/list_parameters
/turtlesim/set_parameters
/turtlesim/set_parameters_atomically

# Servicio personalizado (con launch.xml)
/turtle_info            # turtle_tracker/srv/TurtleInfo
```

### Lista de Actions

```bash
$ ros2 action list

# Con launch_with_action.xml
/turtle_info_action     # turtle_tracker/action/TurtleInfoAction
```

### Comando para Generar rqt_graph

Para visualizar el grafo en tiempo real:
```bash
# Instalar rqt_graph si no está disponible
sudo apt install ros-humble-rqt-graph

# Ejecutar
ros2 run rqt_graph rqt_graph
```

**Configuración recomendada en rqt_graph:**
- Nodes/Topics (all): Para ver todos los nodos y topics
- Group: Por namespace para mejor organización
- Marcar: "Dead sinks" y "Leaf topics" para ver todas las conexiones

---

## Conformidad con los Requisitos y Decisiones de Diseño

### ✅ Cumplimiento de Requisitos

| Requisito | Estado | Implementación |
|-----------|--------|----------------|
| **E1** - Generación de explorer | ✅ Cumple | `turtle_spawner.py` genera "explorer" en (2.0, 2.0) usando `/spawn` |
| **E2** - Sistema de seguimiento | ✅ Cumple | `turtle_tracker.py` implementa control proporcional |
| **E3** - Servicio turtle_info | ✅ Cumple | `turtle_info_service.py` proporciona toda la información requerida |
| **E4** - Cliente de consulta | ✅ Cumple | `turtle_info_client.py` consulta cada segundo con manejo de errores |
| **E5** - Fichero launch.xml | ✅ Cumple | `launch.xml` con parámetros y validación de límites |
| **E6** - Action Server | ✅ Cumple | `turtle_info_action_server.py` con feedback periódico |

### 📋 Decisiones de Diseño y Justificaciones

#### 1. Servicio y Action Server como nodos separados
**Cambio:** Se implementaron tanto el servicio (E3) como el Action Server (E6) en nodos independientes, en lugar de "convertir" uno en otro.

**Razón:** Esta arquitectura permite:
- Mayor flexibilidad: se puede usar el sistema con servicio simple o con action según necesidad
- Dos launch files diferentes para cada modo de operación
- Facilita pruebas independientes de cada componente
- El enunciado solicita "convertir", pero mantener ambos ofrece más versatilidad didáctica

#### 2. Validación de límites en el spawner (no en launch)
**Cambio:** La validación de límites (0-11) se realiza en el nodo `turtle_spawner.py`, no en el launch file.

**Razón:** 
- XML de launch no permite lógica condicional compleja
- El nodo Python puede validar, advertir y ajustar automáticamente valores fuera de rango
- Se muestra un warning en el log si se ajusta la posición
- Esta solución es más robusta que fallar silenciosamente

#### 3. Parámetros adicionales en el control proporcional
**Cambio:** Se añadieron parámetros configurables (`kp_linear`, `kp_angular`, `max_linear_vel`, `max_angular_vel`, `stop_distance`).

**Razón:**
- Permite ajustar el comportamiento del seguimiento sin recompilar
- `stop_distance` define cuándo explorer se detiene (requisito de E6)
- Valores por defecto proporcionan buen comportamiento inicial

#### 4. Reducción de velocidad lineal según error angular
**Cambio:** La velocidad lineal se reduce proporcionalmente al coseno del error angular: `linear_vel *= max(0.0, cos(angle_error))`

**Razón:**
- Evita que explorer avance rápidamente cuando está mal orientado
- Produce trayectorias más suaves y naturales
- Mejora el comportamiento de seguimiento en curvas cerradas

#### 5. Condición de finalización del Action (E6)
**Cambio:** El action se completa cuando explorer está cerca de turtle1 Y tiene velocidad ~0 durante 3 ciclos consecutivos.

**Razón:**
- El enunciado especifica "cuando la tortuga explorer alcance a turtle1 y se detenga"
- Verificar velocidad ~0 asegura que realmente se ha detenido
- Los 3 ciclos previenen falsos positivos por fluctuaciones momentáneas

#### 6. Timestamp en formato legible
**Cambio:** Se incluye timestamp con formato `YYYY-MM-DD HH:MM:SS.mmm` en las respuestas.

**Razón:**
- Facilita debugging y análisis del comportamiento
- Permite verificar la frecuencia real de las consultas
- No estaba explícitamente requerido pero añade valor informativo

#### 7. Dos launch files en lugar de uno
**Cambio:** Se proporcionan `launch.xml` (servicio) y `launch_with_action.xml` (action server).

**Razón:**
- `launch.xml` cumple el requisito E5 con el servicio de E3
- `launch_with_action.xml` permite probar E6 fácilmente
- Evita conflictos si ambos (servicio y action) comparten recursos

### 📌 Notas sobre la Compilación en macOS con Micromamba

Para compilar correctamente en el entorno configurado, es necesario especificar las rutas de Python:

```bash
colcon build --packages-select turtle_tracker --cmake-args \
  -DPython_EXECUTABLE=$CONDA_PREFIX/bin/python3 \
  -DPython3_EXECUTABLE=$CONDA_PREFIX/bin/python3
```

Esto es específico del entorno micromamba y no afecta la funcionalidad del paquete.

---
**Autor:** Javier Veyrat & Julio Quesada EOII - UPV
