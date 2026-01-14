// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_tracker:srv/TurtleInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__BUILDER_HPP_
#define TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_tracker/srv/detail/turtle_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_tracker
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_tracker::srv::TurtleInfo_Request>()
{
  return ::turtle_tracker::srv::TurtleInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtle_tracker


namespace turtle_tracker
{

namespace srv
{

namespace builder
{

class Init_TurtleInfo_Response_timestamp
{
public:
  explicit Init_TurtleInfo_Response_timestamp(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  ::turtle_tracker::srv::TurtleInfo_Response timestamp(::turtle_tracker::srv::TurtleInfo_Response::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_distance
{
public:
  explicit Init_TurtleInfo_Response_distance(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_Response_timestamp distance(::turtle_tracker::srv::TurtleInfo_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_TurtleInfo_Response_timestamp(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_explorer_angular_vel
{
public:
  explicit Init_TurtleInfo_Response_explorer_angular_vel(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_Response_distance explorer_angular_vel(::turtle_tracker::srv::TurtleInfo_Response::_explorer_angular_vel_type arg)
  {
    msg_.explorer_angular_vel = std::move(arg);
    return Init_TurtleInfo_Response_distance(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_explorer_linear_vel
{
public:
  explicit Init_TurtleInfo_Response_explorer_linear_vel(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_Response_explorer_angular_vel explorer_linear_vel(::turtle_tracker::srv::TurtleInfo_Response::_explorer_linear_vel_type arg)
  {
    msg_.explorer_linear_vel = std::move(arg);
    return Init_TurtleInfo_Response_explorer_angular_vel(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_turtle1_angular_vel
{
public:
  explicit Init_TurtleInfo_Response_turtle1_angular_vel(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_Response_explorer_linear_vel turtle1_angular_vel(::turtle_tracker::srv::TurtleInfo_Response::_turtle1_angular_vel_type arg)
  {
    msg_.turtle1_angular_vel = std::move(arg);
    return Init_TurtleInfo_Response_explorer_linear_vel(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_turtle1_linear_vel
{
public:
  explicit Init_TurtleInfo_Response_turtle1_linear_vel(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_Response_turtle1_angular_vel turtle1_linear_vel(::turtle_tracker::srv::TurtleInfo_Response::_turtle1_linear_vel_type arg)
  {
    msg_.turtle1_linear_vel = std::move(arg);
    return Init_TurtleInfo_Response_turtle1_angular_vel(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_explorer_theta
{
public:
  explicit Init_TurtleInfo_Response_explorer_theta(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_Response_turtle1_linear_vel explorer_theta(::turtle_tracker::srv::TurtleInfo_Response::_explorer_theta_type arg)
  {
    msg_.explorer_theta = std::move(arg);
    return Init_TurtleInfo_Response_turtle1_linear_vel(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_explorer_y
{
public:
  explicit Init_TurtleInfo_Response_explorer_y(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_Response_explorer_theta explorer_y(::turtle_tracker::srv::TurtleInfo_Response::_explorer_y_type arg)
  {
    msg_.explorer_y = std::move(arg);
    return Init_TurtleInfo_Response_explorer_theta(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_explorer_x
{
public:
  explicit Init_TurtleInfo_Response_explorer_x(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_Response_explorer_y explorer_x(::turtle_tracker::srv::TurtleInfo_Response::_explorer_x_type arg)
  {
    msg_.explorer_x = std::move(arg);
    return Init_TurtleInfo_Response_explorer_y(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_turtle1_theta
{
public:
  explicit Init_TurtleInfo_Response_turtle1_theta(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_Response_explorer_x turtle1_theta(::turtle_tracker::srv::TurtleInfo_Response::_turtle1_theta_type arg)
  {
    msg_.turtle1_theta = std::move(arg);
    return Init_TurtleInfo_Response_explorer_x(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_turtle1_y
{
public:
  explicit Init_TurtleInfo_Response_turtle1_y(::turtle_tracker::srv::TurtleInfo_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_Response_turtle1_theta turtle1_y(::turtle_tracker::srv::TurtleInfo_Response::_turtle1_y_type arg)
  {
    msg_.turtle1_y = std::move(arg);
    return Init_TurtleInfo_Response_turtle1_theta(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

class Init_TurtleInfo_Response_turtle1_x
{
public:
  Init_TurtleInfo_Response_turtle1_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleInfo_Response_turtle1_y turtle1_x(::turtle_tracker::srv::TurtleInfo_Response::_turtle1_x_type arg)
  {
    msg_.turtle1_x = std::move(arg);
    return Init_TurtleInfo_Response_turtle1_y(msg_);
  }

private:
  ::turtle_tracker::srv::TurtleInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_tracker::srv::TurtleInfo_Response>()
{
  return turtle_tracker::srv::builder::Init_TurtleInfo_Response_turtle1_x();
}

}  // namespace turtle_tracker

#endif  // TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__BUILDER_HPP_
