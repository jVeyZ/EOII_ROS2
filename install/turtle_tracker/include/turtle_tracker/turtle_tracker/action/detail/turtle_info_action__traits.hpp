// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_tracker:action/TurtleInfoAction.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__TRAITS_HPP_
#define TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_tracker/action/detail/turtle_info_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_tracker
{

namespace action
{

inline void to_flow_style_yaml(
  const TurtleInfoAction_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: update_rate
  {
    out << "update_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.update_rate, out);
    out << ", ";
  }

  // member: catch_distance
  {
    out << "catch_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.catch_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleInfoAction_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: update_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.update_rate, out);
    out << "\n";
  }

  // member: catch_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "catch_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.catch_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleInfoAction_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_tracker

namespace rosidl_generator_traits
{

[[deprecated("use turtle_tracker::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_tracker::action::TurtleInfoAction_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_tracker::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_tracker::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_tracker::action::TurtleInfoAction_Goal & msg)
{
  return turtle_tracker::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_tracker::action::TurtleInfoAction_Goal>()
{
  return "turtle_tracker::action::TurtleInfoAction_Goal";
}

template<>
inline const char * name<turtle_tracker::action::TurtleInfoAction_Goal>()
{
  return "turtle_tracker/action/TurtleInfoAction_Goal";
}

template<>
struct has_fixed_size<turtle_tracker::action::TurtleInfoAction_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_tracker::action::TurtleInfoAction_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_tracker::action::TurtleInfoAction_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_tracker
{

namespace action
{

inline void to_flow_style_yaml(
  const TurtleInfoAction_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: final_distance
  {
    out << "final_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.final_distance, out);
    out << ", ";
  }

  // member: total_time
  {
    out << "total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleInfoAction_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: final_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.final_distance, out);
    out << "\n";
  }

  // member: total_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleInfoAction_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_tracker

namespace rosidl_generator_traits
{

[[deprecated("use turtle_tracker::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_tracker::action::TurtleInfoAction_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_tracker::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_tracker::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_tracker::action::TurtleInfoAction_Result & msg)
{
  return turtle_tracker::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_tracker::action::TurtleInfoAction_Result>()
{
  return "turtle_tracker::action::TurtleInfoAction_Result";
}

template<>
inline const char * name<turtle_tracker::action::TurtleInfoAction_Result>()
{
  return "turtle_tracker/action/TurtleInfoAction_Result";
}

template<>
struct has_fixed_size<turtle_tracker::action::TurtleInfoAction_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_tracker::action::TurtleInfoAction_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_tracker::action::TurtleInfoAction_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_tracker
{

namespace action
{

inline void to_flow_style_yaml(
  const TurtleInfoAction_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle1_x
  {
    out << "turtle1_x: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle1_x, out);
    out << ", ";
  }

  // member: turtle1_y
  {
    out << "turtle1_y: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle1_y, out);
    out << ", ";
  }

  // member: turtle1_theta
  {
    out << "turtle1_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle1_theta, out);
    out << ", ";
  }

  // member: explorer_x
  {
    out << "explorer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.explorer_x, out);
    out << ", ";
  }

  // member: explorer_y
  {
    out << "explorer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.explorer_y, out);
    out << ", ";
  }

  // member: explorer_theta
  {
    out << "explorer_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.explorer_theta, out);
    out << ", ";
  }

  // member: turtle1_linear_vel
  {
    out << "turtle1_linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle1_linear_vel, out);
    out << ", ";
  }

  // member: turtle1_angular_vel
  {
    out << "turtle1_angular_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle1_angular_vel, out);
    out << ", ";
  }

  // member: explorer_linear_vel
  {
    out << "explorer_linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.explorer_linear_vel, out);
    out << ", ";
  }

  // member: explorer_angular_vel
  {
    out << "explorer_angular_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.explorer_angular_vel, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleInfoAction_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtle1_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle1_x: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle1_x, out);
    out << "\n";
  }

  // member: turtle1_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle1_y: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle1_y, out);
    out << "\n";
  }

  // member: turtle1_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle1_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle1_theta, out);
    out << "\n";
  }

  // member: explorer_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "explorer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.explorer_x, out);
    out << "\n";
  }

  // member: explorer_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "explorer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.explorer_y, out);
    out << "\n";
  }

  // member: explorer_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "explorer_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.explorer_theta, out);
    out << "\n";
  }

  // member: turtle1_linear_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle1_linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle1_linear_vel, out);
    out << "\n";
  }

  // member: turtle1_angular_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle1_angular_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle1_angular_vel, out);
    out << "\n";
  }

  // member: explorer_linear_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "explorer_linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.explorer_linear_vel, out);
    out << "\n";
  }

  // member: explorer_angular_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "explorer_angular_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.explorer_angular_vel, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleInfoAction_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_tracker

namespace rosidl_generator_traits
{

[[deprecated("use turtle_tracker::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_tracker::action::TurtleInfoAction_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_tracker::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_tracker::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_tracker::action::TurtleInfoAction_Feedback & msg)
{
  return turtle_tracker::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_tracker::action::TurtleInfoAction_Feedback>()
{
  return "turtle_tracker::action::TurtleInfoAction_Feedback";
}

template<>
inline const char * name<turtle_tracker::action::TurtleInfoAction_Feedback>()
{
  return "turtle_tracker/action/TurtleInfoAction_Feedback";
}

template<>
struct has_fixed_size<turtle_tracker::action::TurtleInfoAction_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_tracker::action::TurtleInfoAction_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_tracker::action::TurtleInfoAction_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "turtle_tracker/action/detail/turtle_info_action__traits.hpp"

namespace turtle_tracker
{

namespace action
{

inline void to_flow_style_yaml(
  const TurtleInfoAction_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleInfoAction_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleInfoAction_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_tracker

namespace rosidl_generator_traits
{

[[deprecated("use turtle_tracker::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_tracker::action::TurtleInfoAction_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_tracker::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_tracker::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_tracker::action::TurtleInfoAction_SendGoal_Request & msg)
{
  return turtle_tracker::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_tracker::action::TurtleInfoAction_SendGoal_Request>()
{
  return "turtle_tracker::action::TurtleInfoAction_SendGoal_Request";
}

template<>
inline const char * name<turtle_tracker::action::TurtleInfoAction_SendGoal_Request>()
{
  return "turtle_tracker/action/TurtleInfoAction_SendGoal_Request";
}

template<>
struct has_fixed_size<turtle_tracker::action::TurtleInfoAction_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<turtle_tracker::action::TurtleInfoAction_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtle_tracker::action::TurtleInfoAction_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<turtle_tracker::action::TurtleInfoAction_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtle_tracker::action::TurtleInfoAction_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace turtle_tracker
{

namespace action
{

inline void to_flow_style_yaml(
  const TurtleInfoAction_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleInfoAction_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleInfoAction_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_tracker

namespace rosidl_generator_traits
{

[[deprecated("use turtle_tracker::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_tracker::action::TurtleInfoAction_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_tracker::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_tracker::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_tracker::action::TurtleInfoAction_SendGoal_Response & msg)
{
  return turtle_tracker::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_tracker::action::TurtleInfoAction_SendGoal_Response>()
{
  return "turtle_tracker::action::TurtleInfoAction_SendGoal_Response";
}

template<>
inline const char * name<turtle_tracker::action::TurtleInfoAction_SendGoal_Response>()
{
  return "turtle_tracker/action/TurtleInfoAction_SendGoal_Response";
}

template<>
struct has_fixed_size<turtle_tracker::action::TurtleInfoAction_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<turtle_tracker::action::TurtleInfoAction_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<turtle_tracker::action::TurtleInfoAction_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_tracker::action::TurtleInfoAction_SendGoal>()
{
  return "turtle_tracker::action::TurtleInfoAction_SendGoal";
}

template<>
inline const char * name<turtle_tracker::action::TurtleInfoAction_SendGoal>()
{
  return "turtle_tracker/action/TurtleInfoAction_SendGoal";
}

template<>
struct has_fixed_size<turtle_tracker::action::TurtleInfoAction_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_tracker::action::TurtleInfoAction_SendGoal_Request>::value &&
    has_fixed_size<turtle_tracker::action::TurtleInfoAction_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_tracker::action::TurtleInfoAction_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_tracker::action::TurtleInfoAction_SendGoal_Request>::value &&
    has_bounded_size<turtle_tracker::action::TurtleInfoAction_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<turtle_tracker::action::TurtleInfoAction_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_tracker::action::TurtleInfoAction_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_tracker::action::TurtleInfoAction_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace turtle_tracker
{

namespace action
{

inline void to_flow_style_yaml(
  const TurtleInfoAction_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleInfoAction_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleInfoAction_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_tracker

namespace rosidl_generator_traits
{

[[deprecated("use turtle_tracker::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_tracker::action::TurtleInfoAction_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_tracker::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_tracker::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_tracker::action::TurtleInfoAction_GetResult_Request & msg)
{
  return turtle_tracker::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_tracker::action::TurtleInfoAction_GetResult_Request>()
{
  return "turtle_tracker::action::TurtleInfoAction_GetResult_Request";
}

template<>
inline const char * name<turtle_tracker::action::TurtleInfoAction_GetResult_Request>()
{
  return "turtle_tracker/action/TurtleInfoAction_GetResult_Request";
}

template<>
struct has_fixed_size<turtle_tracker::action::TurtleInfoAction_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtle_tracker::action::TurtleInfoAction_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtle_tracker::action::TurtleInfoAction_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "turtle_tracker/action/detail/turtle_info_action__traits.hpp"

namespace turtle_tracker
{

namespace action
{

inline void to_flow_style_yaml(
  const TurtleInfoAction_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleInfoAction_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleInfoAction_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_tracker

namespace rosidl_generator_traits
{

[[deprecated("use turtle_tracker::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_tracker::action::TurtleInfoAction_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_tracker::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_tracker::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_tracker::action::TurtleInfoAction_GetResult_Response & msg)
{
  return turtle_tracker::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_tracker::action::TurtleInfoAction_GetResult_Response>()
{
  return "turtle_tracker::action::TurtleInfoAction_GetResult_Response";
}

template<>
inline const char * name<turtle_tracker::action::TurtleInfoAction_GetResult_Response>()
{
  return "turtle_tracker/action/TurtleInfoAction_GetResult_Response";
}

template<>
struct has_fixed_size<turtle_tracker::action::TurtleInfoAction_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<turtle_tracker::action::TurtleInfoAction_Result>::value> {};

template<>
struct has_bounded_size<turtle_tracker::action::TurtleInfoAction_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<turtle_tracker::action::TurtleInfoAction_Result>::value> {};

template<>
struct is_message<turtle_tracker::action::TurtleInfoAction_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_tracker::action::TurtleInfoAction_GetResult>()
{
  return "turtle_tracker::action::TurtleInfoAction_GetResult";
}

template<>
inline const char * name<turtle_tracker::action::TurtleInfoAction_GetResult>()
{
  return "turtle_tracker/action/TurtleInfoAction_GetResult";
}

template<>
struct has_fixed_size<turtle_tracker::action::TurtleInfoAction_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_tracker::action::TurtleInfoAction_GetResult_Request>::value &&
    has_fixed_size<turtle_tracker::action::TurtleInfoAction_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_tracker::action::TurtleInfoAction_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_tracker::action::TurtleInfoAction_GetResult_Request>::value &&
    has_bounded_size<turtle_tracker::action::TurtleInfoAction_GetResult_Response>::value
  >
{
};

template<>
struct is_service<turtle_tracker::action::TurtleInfoAction_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_tracker::action::TurtleInfoAction_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_tracker::action::TurtleInfoAction_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "turtle_tracker/action/detail/turtle_info_action__traits.hpp"

namespace turtle_tracker
{

namespace action
{

inline void to_flow_style_yaml(
  const TurtleInfoAction_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleInfoAction_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleInfoAction_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_tracker

namespace rosidl_generator_traits
{

[[deprecated("use turtle_tracker::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_tracker::action::TurtleInfoAction_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_tracker::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_tracker::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_tracker::action::TurtleInfoAction_FeedbackMessage & msg)
{
  return turtle_tracker::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_tracker::action::TurtleInfoAction_FeedbackMessage>()
{
  return "turtle_tracker::action::TurtleInfoAction_FeedbackMessage";
}

template<>
inline const char * name<turtle_tracker::action::TurtleInfoAction_FeedbackMessage>()
{
  return "turtle_tracker/action/TurtleInfoAction_FeedbackMessage";
}

template<>
struct has_fixed_size<turtle_tracker::action::TurtleInfoAction_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<turtle_tracker::action::TurtleInfoAction_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtle_tracker::action::TurtleInfoAction_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<turtle_tracker::action::TurtleInfoAction_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtle_tracker::action::TurtleInfoAction_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<turtle_tracker::action::TurtleInfoAction>
  : std::true_type
{
};

template<>
struct is_action_goal<turtle_tracker::action::TurtleInfoAction_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<turtle_tracker::action::TurtleInfoAction_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<turtle_tracker::action::TurtleInfoAction_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__TRAITS_HPP_
