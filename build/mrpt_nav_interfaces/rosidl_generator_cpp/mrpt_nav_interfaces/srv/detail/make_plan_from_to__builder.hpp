// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_nav_interfaces:srv/MakePlanFromTo.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_FROM_TO__BUILDER_HPP_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_FROM_TO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_nav_interfaces
{

namespace srv
{

namespace builder
{

class Init_MakePlanFromTo_Request_target
{
public:
  explicit Init_MakePlanFromTo_Request_target(::mrpt_nav_interfaces::srv::MakePlanFromTo_Request & msg)
  : msg_(msg)
  {}
  ::mrpt_nav_interfaces::srv::MakePlanFromTo_Request target(::mrpt_nav_interfaces::srv::MakePlanFromTo_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::MakePlanFromTo_Request msg_;
};

class Init_MakePlanFromTo_Request_start
{
public:
  Init_MakePlanFromTo_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakePlanFromTo_Request_target start(::mrpt_nav_interfaces::srv::MakePlanFromTo_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_MakePlanFromTo_Request_target(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::MakePlanFromTo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::srv::MakePlanFromTo_Request>()
{
  return mrpt_nav_interfaces::srv::builder::Init_MakePlanFromTo_Request_start();
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace srv
{

namespace builder
{

class Init_MakePlanFromTo_Response_waypoints
{
public:
  explicit Init_MakePlanFromTo_Response_waypoints(::mrpt_nav_interfaces::srv::MakePlanFromTo_Response & msg)
  : msg_(msg)
  {}
  ::mrpt_nav_interfaces::srv::MakePlanFromTo_Response waypoints(::mrpt_nav_interfaces::srv::MakePlanFromTo_Response::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::MakePlanFromTo_Response msg_;
};

class Init_MakePlanFromTo_Response_valid_path_found
{
public:
  Init_MakePlanFromTo_Response_valid_path_found()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakePlanFromTo_Response_waypoints valid_path_found(::mrpt_nav_interfaces::srv::MakePlanFromTo_Response::_valid_path_found_type arg)
  {
    msg_.valid_path_found = std::move(arg);
    return Init_MakePlanFromTo_Response_waypoints(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::MakePlanFromTo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::srv::MakePlanFromTo_Response>()
{
  return mrpt_nav_interfaces::srv::builder::Init_MakePlanFromTo_Response_valid_path_found();
}

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_FROM_TO__BUILDER_HPP_
