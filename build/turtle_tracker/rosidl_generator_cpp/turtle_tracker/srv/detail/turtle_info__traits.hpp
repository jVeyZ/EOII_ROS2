// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_tracker:srv/TurtleInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__TRAITS_HPP_
#define TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_tracker/srv/detail/turtle_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_tracker
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleInfo_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleInfo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_tracker

namespace rosidl_generator_traits
{

[[deprecated("use turtle_tracker::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_tracker::srv::TurtleInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_tracker::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_tracker::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_tracker::srv::TurtleInfo_Request & msg)
{
  return turtle_tracker::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_tracker::srv::TurtleInfo_Request>()
{
  return "turtle_tracker::srv::TurtleInfo_Request";
}

template<>
inline const char * name<turtle_tracker::srv::TurtleInfo_Request>()
{
  return "turtle_tracker/srv/TurtleInfo_Request";
}

template<>
struct has_fixed_size<turtle_tracker::srv::TurtleInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_tracker::srv::TurtleInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_tracker::srv::TurtleInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_tracker
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleInfo_Response & msg,
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
  const TurtleInfo_Response & msg,
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

inline std::string to_yaml(const TurtleInfo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_tracker

namespace rosidl_generator_traits
{

[[deprecated("use turtle_tracker::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_tracker::srv::TurtleInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_tracker::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_tracker::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_tracker::srv::TurtleInfo_Response & msg)
{
  return turtle_tracker::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_tracker::srv::TurtleInfo_Response>()
{
  return "turtle_tracker::srv::TurtleInfo_Response";
}

template<>
inline const char * name<turtle_tracker::srv::TurtleInfo_Response>()
{
  return "turtle_tracker/srv/TurtleInfo_Response";
}

template<>
struct has_fixed_size<turtle_tracker::srv::TurtleInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_tracker::srv::TurtleInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_tracker::srv::TurtleInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_tracker::srv::TurtleInfo>()
{
  return "turtle_tracker::srv::TurtleInfo";
}

template<>
inline const char * name<turtle_tracker::srv::TurtleInfo>()
{
  return "turtle_tracker/srv/TurtleInfo";
}

template<>
struct has_fixed_size<turtle_tracker::srv::TurtleInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_tracker::srv::TurtleInfo_Request>::value &&
    has_fixed_size<turtle_tracker::srv::TurtleInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_tracker::srv::TurtleInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_tracker::srv::TurtleInfo_Request>::value &&
    has_bounded_size<turtle_tracker::srv::TurtleInfo_Response>::value
  >
{
};

template<>
struct is_service<turtle_tracker::srv::TurtleInfo>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_tracker::srv::TurtleInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_tracker::srv::TurtleInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__TRAITS_HPP_
