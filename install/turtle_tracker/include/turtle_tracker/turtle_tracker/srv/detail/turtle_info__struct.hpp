// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_tracker:srv/TurtleInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__STRUCT_HPP_
#define TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_tracker__srv__TurtleInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_tracker__srv__TurtleInfo_Request __declspec(deprecated)
#endif

namespace turtle_tracker
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleInfo_Request_
{
  using Type = TurtleInfo_Request_<ContainerAllocator>;

  explicit TurtleInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TurtleInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_tracker__srv__TurtleInfo_Request
    std::shared_ptr<turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_tracker__srv__TurtleInfo_Request
    std::shared_ptr<turtle_tracker::srv::TurtleInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfo_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfo_Request_

// alias to use template instance with default allocator
using TurtleInfo_Request =
  turtle_tracker::srv::TurtleInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_tracker


#ifndef _WIN32
# define DEPRECATED__turtle_tracker__srv__TurtleInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_tracker__srv__TurtleInfo_Response __declspec(deprecated)
#endif

namespace turtle_tracker
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleInfo_Response_
{
  using Type = TurtleInfo_Response_<ContainerAllocator>;

  explicit TurtleInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle1_x = 0.0;
      this->turtle1_y = 0.0;
      this->turtle1_theta = 0.0;
      this->explorer_x = 0.0;
      this->explorer_y = 0.0;
      this->explorer_theta = 0.0;
      this->turtle1_linear_vel = 0.0;
      this->turtle1_angular_vel = 0.0;
      this->explorer_linear_vel = 0.0;
      this->explorer_angular_vel = 0.0;
      this->distance = 0.0;
      this->timestamp = "";
    }
  }

  explicit TurtleInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle1_x = 0.0;
      this->turtle1_y = 0.0;
      this->turtle1_theta = 0.0;
      this->explorer_x = 0.0;
      this->explorer_y = 0.0;
      this->explorer_theta = 0.0;
      this->turtle1_linear_vel = 0.0;
      this->turtle1_angular_vel = 0.0;
      this->explorer_linear_vel = 0.0;
      this->explorer_angular_vel = 0.0;
      this->distance = 0.0;
      this->timestamp = "";
    }
  }

  // field types and members
  using _turtle1_x_type =
    double;
  _turtle1_x_type turtle1_x;
  using _turtle1_y_type =
    double;
  _turtle1_y_type turtle1_y;
  using _turtle1_theta_type =
    double;
  _turtle1_theta_type turtle1_theta;
  using _explorer_x_type =
    double;
  _explorer_x_type explorer_x;
  using _explorer_y_type =
    double;
  _explorer_y_type explorer_y;
  using _explorer_theta_type =
    double;
  _explorer_theta_type explorer_theta;
  using _turtle1_linear_vel_type =
    double;
  _turtle1_linear_vel_type turtle1_linear_vel;
  using _turtle1_angular_vel_type =
    double;
  _turtle1_angular_vel_type turtle1_angular_vel;
  using _explorer_linear_vel_type =
    double;
  _explorer_linear_vel_type explorer_linear_vel;
  using _explorer_angular_vel_type =
    double;
  _explorer_angular_vel_type explorer_angular_vel;
  using _distance_type =
    double;
  _distance_type distance;
  using _timestamp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__turtle1_x(
    const double & _arg)
  {
    this->turtle1_x = _arg;
    return *this;
  }
  Type & set__turtle1_y(
    const double & _arg)
  {
    this->turtle1_y = _arg;
    return *this;
  }
  Type & set__turtle1_theta(
    const double & _arg)
  {
    this->turtle1_theta = _arg;
    return *this;
  }
  Type & set__explorer_x(
    const double & _arg)
  {
    this->explorer_x = _arg;
    return *this;
  }
  Type & set__explorer_y(
    const double & _arg)
  {
    this->explorer_y = _arg;
    return *this;
  }
  Type & set__explorer_theta(
    const double & _arg)
  {
    this->explorer_theta = _arg;
    return *this;
  }
  Type & set__turtle1_linear_vel(
    const double & _arg)
  {
    this->turtle1_linear_vel = _arg;
    return *this;
  }
  Type & set__turtle1_angular_vel(
    const double & _arg)
  {
    this->turtle1_angular_vel = _arg;
    return *this;
  }
  Type & set__explorer_linear_vel(
    const double & _arg)
  {
    this->explorer_linear_vel = _arg;
    return *this;
  }
  Type & set__explorer_angular_vel(
    const double & _arg)
  {
    this->explorer_angular_vel = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__timestamp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_tracker__srv__TurtleInfo_Response
    std::shared_ptr<turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_tracker__srv__TurtleInfo_Response
    std::shared_ptr<turtle_tracker::srv::TurtleInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfo_Response_ & other) const
  {
    if (this->turtle1_x != other.turtle1_x) {
      return false;
    }
    if (this->turtle1_y != other.turtle1_y) {
      return false;
    }
    if (this->turtle1_theta != other.turtle1_theta) {
      return false;
    }
    if (this->explorer_x != other.explorer_x) {
      return false;
    }
    if (this->explorer_y != other.explorer_y) {
      return false;
    }
    if (this->explorer_theta != other.explorer_theta) {
      return false;
    }
    if (this->turtle1_linear_vel != other.turtle1_linear_vel) {
      return false;
    }
    if (this->turtle1_angular_vel != other.turtle1_angular_vel) {
      return false;
    }
    if (this->explorer_linear_vel != other.explorer_linear_vel) {
      return false;
    }
    if (this->explorer_angular_vel != other.explorer_angular_vel) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfo_Response_

// alias to use template instance with default allocator
using TurtleInfo_Response =
  turtle_tracker::srv::TurtleInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_tracker

namespace turtle_tracker
{

namespace srv
{

struct TurtleInfo
{
  using Request = turtle_tracker::srv::TurtleInfo_Request;
  using Response = turtle_tracker::srv::TurtleInfo_Response;
};

}  // namespace srv

}  // namespace turtle_tracker

#endif  // TURTLE_TRACKER__SRV__DETAIL__TURTLE_INFO__STRUCT_HPP_
