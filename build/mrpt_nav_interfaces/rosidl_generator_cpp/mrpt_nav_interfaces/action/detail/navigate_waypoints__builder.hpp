// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_nav_interfaces:action/NavigateWaypoints.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_WAYPOINTS__BUILDER_HPP_
#define MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_nav_interfaces/action/detail/navigate_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_nav_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateWaypoints_Goal_waypoints
{
public:
  Init_NavigateWaypoints_Goal_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_nav_interfaces::action::NavigateWaypoints_Goal waypoints(::mrpt_nav_interfaces::action::NavigateWaypoints_Goal::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::action::NavigateWaypoints_Goal>()
{
  return mrpt_nav_interfaces::action::builder::Init_NavigateWaypoints_Goal_waypoints();
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateWaypoints_Result_state
{
public:
  Init_NavigateWaypoints_Result_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_nav_interfaces::action::NavigateWaypoints_Result state(::mrpt_nav_interfaces::action::NavigateWaypoints_Result::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::action::NavigateWaypoints_Result>()
{
  return mrpt_nav_interfaces::action::builder::Init_NavigateWaypoints_Result_state();
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateWaypoints_Feedback_state
{
public:
  Init_NavigateWaypoints_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_nav_interfaces::action::NavigateWaypoints_Feedback state(::mrpt_nav_interfaces::action::NavigateWaypoints_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::action::NavigateWaypoints_Feedback>()
{
  return mrpt_nav_interfaces::action::builder::Init_NavigateWaypoints_Feedback_state();
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateWaypoints_SendGoal_Request_goal
{
public:
  explicit Init_NavigateWaypoints_SendGoal_Request_goal(::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request goal(::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request msg_;
};

class Init_NavigateWaypoints_SendGoal_Request_goal_id
{
public:
  Init_NavigateWaypoints_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateWaypoints_SendGoal_Request_goal goal_id(::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateWaypoints_SendGoal_Request_goal(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request>()
{
  return mrpt_nav_interfaces::action::builder::Init_NavigateWaypoints_SendGoal_Request_goal_id();
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateWaypoints_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateWaypoints_SendGoal_Response_stamp(::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response stamp(::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response msg_;
};

class Init_NavigateWaypoints_SendGoal_Response_accepted
{
public:
  Init_NavigateWaypoints_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateWaypoints_SendGoal_Response_stamp accepted(::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateWaypoints_SendGoal_Response_stamp(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response>()
{
  return mrpt_nav_interfaces::action::builder::Init_NavigateWaypoints_SendGoal_Response_accepted();
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateWaypoints_GetResult_Request_goal_id
{
public:
  Init_NavigateWaypoints_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request goal_id(::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request>()
{
  return mrpt_nav_interfaces::action::builder::Init_NavigateWaypoints_GetResult_Request_goal_id();
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateWaypoints_GetResult_Response_result
{
public:
  explicit Init_NavigateWaypoints_GetResult_Response_result(::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response result(::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response msg_;
};

class Init_NavigateWaypoints_GetResult_Response_status
{
public:
  Init_NavigateWaypoints_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateWaypoints_GetResult_Response_result status(::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateWaypoints_GetResult_Response_result(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response>()
{
  return mrpt_nav_interfaces::action::builder::Init_NavigateWaypoints_GetResult_Response_status();
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateWaypoints_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateWaypoints_FeedbackMessage_feedback(::mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage feedback(::mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage msg_;
};

class Init_NavigateWaypoints_FeedbackMessage_goal_id
{
public:
  Init_NavigateWaypoints_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateWaypoints_FeedbackMessage_feedback goal_id(::mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateWaypoints_FeedbackMessage_feedback(msg_);
  }

private:
  ::mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage>()
{
  return mrpt_nav_interfaces::action::builder::Init_NavigateWaypoints_FeedbackMessage_goal_id();
}

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_WAYPOINTS__BUILDER_HPP_
