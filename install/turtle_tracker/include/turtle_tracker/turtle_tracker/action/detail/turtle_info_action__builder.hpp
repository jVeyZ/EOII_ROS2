// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_tracker:action/TurtleInfoAction.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__BUILDER_HPP_
#define TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_tracker/action/detail/turtle_info_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_tracker
{

namespace action
{

namespace builder
{

class Init_TurtleInfoAction_Goal_catch_distance
{
public:
  explicit Init_TurtleInfoAction_Goal_catch_distance(::turtle_tracker::action::TurtleInfoAction_Goal & msg)
  : msg_(msg)
  {}
  ::turtle_tracker::action::TurtleInfoAction_Goal catch_distance(::turtle_tracker::action::TurtleInfoAction_Goal::_catch_distance_type arg)
  {
    msg_.catch_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Goal msg_;
};

class Init_TurtleInfoAction_Goal_update_rate
{
public:
  Init_TurtleInfoAction_Goal_update_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleInfoAction_Goal_catch_distance update_rate(::turtle_tracker::action::TurtleInfoAction_Goal::_update_rate_type arg)
  {
    msg_.update_rate = std::move(arg);
    return Init_TurtleInfoAction_Goal_catch_distance(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_tracker::action::TurtleInfoAction_Goal>()
{
  return turtle_tracker::action::builder::Init_TurtleInfoAction_Goal_update_rate();
}

}  // namespace turtle_tracker


namespace turtle_tracker
{

namespace action
{

namespace builder
{

class Init_TurtleInfoAction_Result_total_time
{
public:
  explicit Init_TurtleInfoAction_Result_total_time(::turtle_tracker::action::TurtleInfoAction_Result & msg)
  : msg_(msg)
  {}
  ::turtle_tracker::action::TurtleInfoAction_Result total_time(::turtle_tracker::action::TurtleInfoAction_Result::_total_time_type arg)
  {
    msg_.total_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Result msg_;
};

class Init_TurtleInfoAction_Result_final_distance
{
public:
  explicit Init_TurtleInfoAction_Result_final_distance(::turtle_tracker::action::TurtleInfoAction_Result & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Result_total_time final_distance(::turtle_tracker::action::TurtleInfoAction_Result::_final_distance_type arg)
  {
    msg_.final_distance = std::move(arg);
    return Init_TurtleInfoAction_Result_total_time(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Result msg_;
};

class Init_TurtleInfoAction_Result_message
{
public:
  explicit Init_TurtleInfoAction_Result_message(::turtle_tracker::action::TurtleInfoAction_Result & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Result_final_distance message(::turtle_tracker::action::TurtleInfoAction_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_TurtleInfoAction_Result_final_distance(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Result msg_;
};

class Init_TurtleInfoAction_Result_success
{
public:
  Init_TurtleInfoAction_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleInfoAction_Result_message success(::turtle_tracker::action::TurtleInfoAction_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TurtleInfoAction_Result_message(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_tracker::action::TurtleInfoAction_Result>()
{
  return turtle_tracker::action::builder::Init_TurtleInfoAction_Result_success();
}

}  // namespace turtle_tracker


namespace turtle_tracker
{

namespace action
{

namespace builder
{

class Init_TurtleInfoAction_Feedback_timestamp
{
public:
  explicit Init_TurtleInfoAction_Feedback_timestamp(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  ::turtle_tracker::action::TurtleInfoAction_Feedback timestamp(::turtle_tracker::action::TurtleInfoAction_Feedback::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_distance
{
public:
  explicit Init_TurtleInfoAction_Feedback_distance(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Feedback_timestamp distance(::turtle_tracker::action::TurtleInfoAction_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_TurtleInfoAction_Feedback_timestamp(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_explorer_angular_vel
{
public:
  explicit Init_TurtleInfoAction_Feedback_explorer_angular_vel(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Feedback_distance explorer_angular_vel(::turtle_tracker::action::TurtleInfoAction_Feedback::_explorer_angular_vel_type arg)
  {
    msg_.explorer_angular_vel = std::move(arg);
    return Init_TurtleInfoAction_Feedback_distance(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_explorer_linear_vel
{
public:
  explicit Init_TurtleInfoAction_Feedback_explorer_linear_vel(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Feedback_explorer_angular_vel explorer_linear_vel(::turtle_tracker::action::TurtleInfoAction_Feedback::_explorer_linear_vel_type arg)
  {
    msg_.explorer_linear_vel = std::move(arg);
    return Init_TurtleInfoAction_Feedback_explorer_angular_vel(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_turtle1_angular_vel
{
public:
  explicit Init_TurtleInfoAction_Feedback_turtle1_angular_vel(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Feedback_explorer_linear_vel turtle1_angular_vel(::turtle_tracker::action::TurtleInfoAction_Feedback::_turtle1_angular_vel_type arg)
  {
    msg_.turtle1_angular_vel = std::move(arg);
    return Init_TurtleInfoAction_Feedback_explorer_linear_vel(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_turtle1_linear_vel
{
public:
  explicit Init_TurtleInfoAction_Feedback_turtle1_linear_vel(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Feedback_turtle1_angular_vel turtle1_linear_vel(::turtle_tracker::action::TurtleInfoAction_Feedback::_turtle1_linear_vel_type arg)
  {
    msg_.turtle1_linear_vel = std::move(arg);
    return Init_TurtleInfoAction_Feedback_turtle1_angular_vel(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_explorer_theta
{
public:
  explicit Init_TurtleInfoAction_Feedback_explorer_theta(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Feedback_turtle1_linear_vel explorer_theta(::turtle_tracker::action::TurtleInfoAction_Feedback::_explorer_theta_type arg)
  {
    msg_.explorer_theta = std::move(arg);
    return Init_TurtleInfoAction_Feedback_turtle1_linear_vel(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_explorer_y
{
public:
  explicit Init_TurtleInfoAction_Feedback_explorer_y(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Feedback_explorer_theta explorer_y(::turtle_tracker::action::TurtleInfoAction_Feedback::_explorer_y_type arg)
  {
    msg_.explorer_y = std::move(arg);
    return Init_TurtleInfoAction_Feedback_explorer_theta(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_explorer_x
{
public:
  explicit Init_TurtleInfoAction_Feedback_explorer_x(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Feedback_explorer_y explorer_x(::turtle_tracker::action::TurtleInfoAction_Feedback::_explorer_x_type arg)
  {
    msg_.explorer_x = std::move(arg);
    return Init_TurtleInfoAction_Feedback_explorer_y(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_turtle1_theta
{
public:
  explicit Init_TurtleInfoAction_Feedback_turtle1_theta(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Feedback_explorer_x turtle1_theta(::turtle_tracker::action::TurtleInfoAction_Feedback::_turtle1_theta_type arg)
  {
    msg_.turtle1_theta = std::move(arg);
    return Init_TurtleInfoAction_Feedback_explorer_x(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_turtle1_y
{
public:
  explicit Init_TurtleInfoAction_Feedback_turtle1_y(::turtle_tracker::action::TurtleInfoAction_Feedback & msg)
  : msg_(msg)
  {}
  Init_TurtleInfoAction_Feedback_turtle1_theta turtle1_y(::turtle_tracker::action::TurtleInfoAction_Feedback::_turtle1_y_type arg)
  {
    msg_.turtle1_y = std::move(arg);
    return Init_TurtleInfoAction_Feedback_turtle1_theta(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

class Init_TurtleInfoAction_Feedback_turtle1_x
{
public:
  Init_TurtleInfoAction_Feedback_turtle1_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleInfoAction_Feedback_turtle1_y turtle1_x(::turtle_tracker::action::TurtleInfoAction_Feedback::_turtle1_x_type arg)
  {
    msg_.turtle1_x = std::move(arg);
    return Init_TurtleInfoAction_Feedback_turtle1_y(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_tracker::action::TurtleInfoAction_Feedback>()
{
  return turtle_tracker::action::builder::Init_TurtleInfoAction_Feedback_turtle1_x();
}

}  // namespace turtle_tracker


namespace turtle_tracker
{

namespace action
{

namespace builder
{

class Init_TurtleInfoAction_SendGoal_Request_goal
{
public:
  explicit Init_TurtleInfoAction_SendGoal_Request_goal(::turtle_tracker::action::TurtleInfoAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::turtle_tracker::action::TurtleInfoAction_SendGoal_Request goal(::turtle_tracker::action::TurtleInfoAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_SendGoal_Request msg_;
};

class Init_TurtleInfoAction_SendGoal_Request_goal_id
{
public:
  Init_TurtleInfoAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleInfoAction_SendGoal_Request_goal goal_id(::turtle_tracker::action::TurtleInfoAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TurtleInfoAction_SendGoal_Request_goal(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_tracker::action::TurtleInfoAction_SendGoal_Request>()
{
  return turtle_tracker::action::builder::Init_TurtleInfoAction_SendGoal_Request_goal_id();
}

}  // namespace turtle_tracker


namespace turtle_tracker
{

namespace action
{

namespace builder
{

class Init_TurtleInfoAction_SendGoal_Response_stamp
{
public:
  explicit Init_TurtleInfoAction_SendGoal_Response_stamp(::turtle_tracker::action::TurtleInfoAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::turtle_tracker::action::TurtleInfoAction_SendGoal_Response stamp(::turtle_tracker::action::TurtleInfoAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_SendGoal_Response msg_;
};

class Init_TurtleInfoAction_SendGoal_Response_accepted
{
public:
  Init_TurtleInfoAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleInfoAction_SendGoal_Response_stamp accepted(::turtle_tracker::action::TurtleInfoAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TurtleInfoAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_tracker::action::TurtleInfoAction_SendGoal_Response>()
{
  return turtle_tracker::action::builder::Init_TurtleInfoAction_SendGoal_Response_accepted();
}

}  // namespace turtle_tracker


namespace turtle_tracker
{

namespace action
{

namespace builder
{

class Init_TurtleInfoAction_GetResult_Request_goal_id
{
public:
  Init_TurtleInfoAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_tracker::action::TurtleInfoAction_GetResult_Request goal_id(::turtle_tracker::action::TurtleInfoAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_tracker::action::TurtleInfoAction_GetResult_Request>()
{
  return turtle_tracker::action::builder::Init_TurtleInfoAction_GetResult_Request_goal_id();
}

}  // namespace turtle_tracker


namespace turtle_tracker
{

namespace action
{

namespace builder
{

class Init_TurtleInfoAction_GetResult_Response_result
{
public:
  explicit Init_TurtleInfoAction_GetResult_Response_result(::turtle_tracker::action::TurtleInfoAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::turtle_tracker::action::TurtleInfoAction_GetResult_Response result(::turtle_tracker::action::TurtleInfoAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_GetResult_Response msg_;
};

class Init_TurtleInfoAction_GetResult_Response_status
{
public:
  Init_TurtleInfoAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleInfoAction_GetResult_Response_result status(::turtle_tracker::action::TurtleInfoAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TurtleInfoAction_GetResult_Response_result(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_tracker::action::TurtleInfoAction_GetResult_Response>()
{
  return turtle_tracker::action::builder::Init_TurtleInfoAction_GetResult_Response_status();
}

}  // namespace turtle_tracker


namespace turtle_tracker
{

namespace action
{

namespace builder
{

class Init_TurtleInfoAction_FeedbackMessage_feedback
{
public:
  explicit Init_TurtleInfoAction_FeedbackMessage_feedback(::turtle_tracker::action::TurtleInfoAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::turtle_tracker::action::TurtleInfoAction_FeedbackMessage feedback(::turtle_tracker::action::TurtleInfoAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_FeedbackMessage msg_;
};

class Init_TurtleInfoAction_FeedbackMessage_goal_id
{
public:
  Init_TurtleInfoAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleInfoAction_FeedbackMessage_feedback goal_id(::turtle_tracker::action::TurtleInfoAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TurtleInfoAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::turtle_tracker::action::TurtleInfoAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_tracker::action::TurtleInfoAction_FeedbackMessage>()
{
  return turtle_tracker::action::builder::Init_TurtleInfoAction_FeedbackMessage_goal_id();
}

}  // namespace turtle_tracker

#endif  // TURTLE_TRACKER__ACTION__DETAIL__TURTLE_INFO_ACTION__BUILDER_HPP_
