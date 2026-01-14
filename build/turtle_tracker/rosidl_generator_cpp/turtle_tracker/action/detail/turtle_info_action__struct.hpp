// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_tracker:action/TurtleInfoAction.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__STRUCT_HPP_
#define TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_Goal __attribute__((deprecated))
#else
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_Goal __declspec(deprecated)
#endif

namespace turtle_tracker
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleInfoAction_Goal_
{
  using Type = TurtleInfoAction_Goal_<ContainerAllocator>;

  explicit TurtleInfoAction_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->update_rate = 0.0;
      this->catch_distance = 0.0;
    }
  }

  explicit TurtleInfoAction_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->update_rate = 0.0;
      this->catch_distance = 0.0;
    }
  }

  // field types and members
  using _update_rate_type =
    double;
  _update_rate_type update_rate;
  using _catch_distance_type =
    double;
  _catch_distance_type catch_distance;

  // setters for named parameter idiom
  Type & set__update_rate(
    const double & _arg)
  {
    this->update_rate = _arg;
    return *this;
  }
  Type & set__catch_distance(
    const double & _arg)
  {
    this->catch_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_Goal
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_Goal
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfoAction_Goal_ & other) const
  {
    if (this->update_rate != other.update_rate) {
      return false;
    }
    if (this->catch_distance != other.catch_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleInfoAction_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfoAction_Goal_

// alias to use template instance with default allocator
using TurtleInfoAction_Goal =
  turtle_tracker::action::TurtleInfoAction_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_tracker


#ifndef _WIN32
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_Result __attribute__((deprecated))
#else
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_Result __declspec(deprecated)
#endif

namespace turtle_tracker
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleInfoAction_Result_
{
  using Type = TurtleInfoAction_Result_<ContainerAllocator>;

  explicit TurtleInfoAction_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->final_distance = 0.0;
      this->total_time = 0.0;
    }
  }

  explicit TurtleInfoAction_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->final_distance = 0.0;
      this->total_time = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _final_distance_type =
    double;
  _final_distance_type final_distance;
  using _total_time_type =
    double;
  _total_time_type total_time;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__final_distance(
    const double & _arg)
  {
    this->final_distance = _arg;
    return *this;
  }
  Type & set__total_time(
    const double & _arg)
  {
    this->total_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_Result
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_Result
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfoAction_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->final_distance != other.final_distance) {
      return false;
    }
    if (this->total_time != other.total_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleInfoAction_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfoAction_Result_

// alias to use template instance with default allocator
using TurtleInfoAction_Result =
  turtle_tracker::action::TurtleInfoAction_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_tracker


#ifndef _WIN32
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_Feedback __declspec(deprecated)
#endif

namespace turtle_tracker
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleInfoAction_Feedback_
{
  using Type = TurtleInfoAction_Feedback_<ContainerAllocator>;

  explicit TurtleInfoAction_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit TurtleInfoAction_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_Feedback
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_Feedback
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfoAction_Feedback_ & other) const
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
  bool operator!=(const TurtleInfoAction_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfoAction_Feedback_

// alias to use template instance with default allocator
using TurtleInfoAction_Feedback =
  turtle_tracker::action::TurtleInfoAction_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_tracker


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "turtle_tracker/action/detail/turtle_info_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_SendGoal_Request __declspec(deprecated)
#endif

namespace turtle_tracker
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleInfoAction_SendGoal_Request_
{
  using Type = TurtleInfoAction_SendGoal_Request_<ContainerAllocator>;

  explicit TurtleInfoAction_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TurtleInfoAction_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const turtle_tracker::action::TurtleInfoAction_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_SendGoal_Request
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_SendGoal_Request
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfoAction_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleInfoAction_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfoAction_SendGoal_Request_

// alias to use template instance with default allocator
using TurtleInfoAction_SendGoal_Request =
  turtle_tracker::action::TurtleInfoAction_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_tracker


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_SendGoal_Response __declspec(deprecated)
#endif

namespace turtle_tracker
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleInfoAction_SendGoal_Response_
{
  using Type = TurtleInfoAction_SendGoal_Response_<ContainerAllocator>;

  explicit TurtleInfoAction_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TurtleInfoAction_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_SendGoal_Response
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_SendGoal_Response
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfoAction_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleInfoAction_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfoAction_SendGoal_Response_

// alias to use template instance with default allocator
using TurtleInfoAction_SendGoal_Response =
  turtle_tracker::action::TurtleInfoAction_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_tracker

namespace turtle_tracker
{

namespace action
{

struct TurtleInfoAction_SendGoal
{
  using Request = turtle_tracker::action::TurtleInfoAction_SendGoal_Request;
  using Response = turtle_tracker::action::TurtleInfoAction_SendGoal_Response;
};

}  // namespace action

}  // namespace turtle_tracker


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_GetResult_Request __declspec(deprecated)
#endif

namespace turtle_tracker
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleInfoAction_GetResult_Request_
{
  using Type = TurtleInfoAction_GetResult_Request_<ContainerAllocator>;

  explicit TurtleInfoAction_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TurtleInfoAction_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_GetResult_Request
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_GetResult_Request
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfoAction_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleInfoAction_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfoAction_GetResult_Request_

// alias to use template instance with default allocator
using TurtleInfoAction_GetResult_Request =
  turtle_tracker::action::TurtleInfoAction_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_tracker


// Include directives for member types
// Member 'result'
// already included above
// #include "turtle_tracker/action/detail/turtle_info_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_GetResult_Response __declspec(deprecated)
#endif

namespace turtle_tracker
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleInfoAction_GetResult_Response_
{
  using Type = TurtleInfoAction_GetResult_Response_<ContainerAllocator>;

  explicit TurtleInfoAction_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TurtleInfoAction_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const turtle_tracker::action::TurtleInfoAction_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_GetResult_Response
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_GetResult_Response
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfoAction_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleInfoAction_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfoAction_GetResult_Response_

// alias to use template instance with default allocator
using TurtleInfoAction_GetResult_Response =
  turtle_tracker::action::TurtleInfoAction_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_tracker

namespace turtle_tracker
{

namespace action
{

struct TurtleInfoAction_GetResult
{
  using Request = turtle_tracker::action::TurtleInfoAction_GetResult_Request;
  using Response = turtle_tracker::action::TurtleInfoAction_GetResult_Response;
};

}  // namespace action

}  // namespace turtle_tracker


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "turtle_tracker/action/detail/turtle_info_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__turtle_tracker__action__TurtleInfoAction_FeedbackMessage __declspec(deprecated)
#endif

namespace turtle_tracker
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleInfoAction_FeedbackMessage_
{
  using Type = TurtleInfoAction_FeedbackMessage_<ContainerAllocator>;

  explicit TurtleInfoAction_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TurtleInfoAction_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const turtle_tracker::action::TurtleInfoAction_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_FeedbackMessage
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_tracker__action__TurtleInfoAction_FeedbackMessage
    std::shared_ptr<turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfoAction_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleInfoAction_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfoAction_FeedbackMessage_

// alias to use template instance with default allocator
using TurtleInfoAction_FeedbackMessage =
  turtle_tracker::action::TurtleInfoAction_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_tracker

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace turtle_tracker
{

namespace action
{

struct TurtleInfoAction
{
  /// The goal message defined in the action definition.
  using Goal = turtle_tracker::action::TurtleInfoAction_Goal;
  /// The result message defined in the action definition.
  using Result = turtle_tracker::action::TurtleInfoAction_Result;
  /// The feedback message defined in the action definition.
  using Feedback = turtle_tracker::action::TurtleInfoAction_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = turtle_tracker::action::TurtleInfoAction_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = turtle_tracker::action::TurtleInfoAction_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = turtle_tracker::action::TurtleInfoAction_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TurtleInfoAction TurtleInfoAction;

}  // namespace action

}  // namespace turtle_tracker

#endif  // TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__STRUCT_HPP_
