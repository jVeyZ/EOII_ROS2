// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_tracker:srv/TurtleInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__STRUCT_H_
#define TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TurtleInfo in the package turtle_tracker.
typedef struct turtle_tracker__srv__TurtleInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} turtle_tracker__srv__TurtleInfo_Request;

// Struct for a sequence of turtle_tracker__srv__TurtleInfo_Request.
typedef struct turtle_tracker__srv__TurtleInfo_Request__Sequence
{
  turtle_tracker__srv__TurtleInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_tracker__srv__TurtleInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TurtleInfo in the package turtle_tracker.
typedef struct turtle_tracker__srv__TurtleInfo_Response
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
  /// Timestamp de la información
  rosidl_runtime_c__String timestamp;
} turtle_tracker__srv__TurtleInfo_Response;

// Struct for a sequence of turtle_tracker__srv__TurtleInfo_Response.
typedef struct turtle_tracker__srv__TurtleInfo_Response__Sequence
{
  turtle_tracker__srv__TurtleInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_tracker__srv__TurtleInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__STRUCT_H_
