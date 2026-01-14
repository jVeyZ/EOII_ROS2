// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_tracker:action/TurtleInfoAction.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__STRUCT_H_
#define TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/TurtleInfoAction in the package turtle_tracker.
typedef struct turtle_tracker__action__TurtleInfoAction_Goal
{
  /// Goal (vacío o con parámetros opcionales)
  /// Frecuencia de actualización en Hz (por defecto 1.0)
  double update_rate;
  /// Distancia para considerar que explorer alcanzó a turtle1 (default 0.5)
  double catch_distance;
} turtle_tracker__action__TurtleInfoAction_Goal;

// Struct for a sequence of turtle_tracker__action__TurtleInfoAction_Goal.
typedef struct turtle_tracker__action__TurtleInfoAction_Goal__Sequence
{
  turtle_tracker__action__TurtleInfoAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_tracker__action__TurtleInfoAction_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TurtleInfoAction in the package turtle_tracker.
typedef struct turtle_tracker__action__TurtleInfoAction_Result
{
  bool success;
  rosidl_runtime_c__String message;
  double final_distance;
  double total_time;
} turtle_tracker__action__TurtleInfoAction_Result;

// Struct for a sequence of turtle_tracker__action__TurtleInfoAction_Result.
typedef struct turtle_tracker__action__TurtleInfoAction_Result__Sequence
{
  turtle_tracker__action__TurtleInfoAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_tracker__action__TurtleInfoAction_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TurtleInfoAction in the package turtle_tracker.
typedef struct turtle_tracker__action__TurtleInfoAction_Feedback
{
  double turtle1_x;
  double turtle1_y;
  double turtle1_theta;
  /// Posición y orientación de explorer
  double explorer_x;
  double explorer_y;
  double explorer_theta;
  /// Velocidades de turtle1
  double turtle1_linear_vel;
  double turtle1_angular_vel;
  /// Velocidades de explorer
  double explorer_linear_vel;
  double explorer_angular_vel;
  /// Distancia euclidiana entre ambas tortugas
  double distance;
  /// Timestamp
  rosidl_runtime_c__String timestamp;
} turtle_tracker__action__TurtleInfoAction_Feedback;

// Struct for a sequence of turtle_tracker__action__TurtleInfoAction_Feedback.
typedef struct turtle_tracker__action__TurtleInfoAction_Feedback__Sequence
{
  turtle_tracker__action__TurtleInfoAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_tracker__action__TurtleInfoAction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "turtle_tracker/action/detail/turtle_info_action__struct.h"

/// Struct defined in action/TurtleInfoAction in the package turtle_tracker.
typedef struct turtle_tracker__action__TurtleInfoAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtle_tracker__action__TurtleInfoAction_Goal goal;
} turtle_tracker__action__TurtleInfoAction_SendGoal_Request;

// Struct for a sequence of turtle_tracker__action__TurtleInfoAction_SendGoal_Request.
typedef struct turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence
{
  turtle_tracker__action__TurtleInfoAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_tracker__action__TurtleInfoAction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TurtleInfoAction in the package turtle_tracker.
typedef struct turtle_tracker__action__TurtleInfoAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} turtle_tracker__action__TurtleInfoAction_SendGoal_Response;

// Struct for a sequence of turtle_tracker__action__TurtleInfoAction_SendGoal_Response.
typedef struct turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence
{
  turtle_tracker__action__TurtleInfoAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_tracker__action__TurtleInfoAction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TurtleInfoAction in the package turtle_tracker.
typedef struct turtle_tracker__action__TurtleInfoAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} turtle_tracker__action__TurtleInfoAction_GetResult_Request;

// Struct for a sequence of turtle_tracker__action__TurtleInfoAction_GetResult_Request.
typedef struct turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence
{
  turtle_tracker__action__TurtleInfoAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_tracker__action__TurtleInfoAction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "turtle_tracker/action/detail/turtle_info_action__struct.h"

/// Struct defined in action/TurtleInfoAction in the package turtle_tracker.
typedef struct turtle_tracker__action__TurtleInfoAction_GetResult_Response
{
  int8_t status;
  turtle_tracker__action__TurtleInfoAction_Result result;
} turtle_tracker__action__TurtleInfoAction_GetResult_Response;

// Struct for a sequence of turtle_tracker__action__TurtleInfoAction_GetResult_Response.
typedef struct turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence
{
  turtle_tracker__action__TurtleInfoAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_tracker__action__TurtleInfoAction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "turtle_tracker/action/detail/turtle_info_action__struct.h"

/// Struct defined in action/TurtleInfoAction in the package turtle_tracker.
typedef struct turtle_tracker__action__TurtleInfoAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtle_tracker__action__TurtleInfoAction_Feedback feedback;
} turtle_tracker__action__TurtleInfoAction_FeedbackMessage;

// Struct for a sequence of turtle_tracker__action__TurtleInfoAction_FeedbackMessage.
typedef struct turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence
{
  turtle_tracker__action__TurtleInfoAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_tracker__action__TurtleInfoAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__STRUCT_H_
