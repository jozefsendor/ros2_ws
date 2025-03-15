// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_nav_interfaces:msg/NavigationFeedback.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__BUILDER_HPP_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_nav_interfaces
{

namespace msg
{

namespace builder
{

class Init_NavigationFeedback_reached_waypoints
{
public:
  explicit Init_NavigationFeedback_reached_waypoints(::mrpt_nav_interfaces::msg::NavigationFeedback & msg)
  : msg_(msg)
  {}
  ::mrpt_nav_interfaces::msg::NavigationFeedback reached_waypoints(::mrpt_nav_interfaces::msg::NavigationFeedback::_reached_waypoints_type arg)
  {
    msg_.reached_waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::NavigationFeedback msg_;
};

class Init_NavigationFeedback_total_waypoints
{
public:
  Init_NavigationFeedback_total_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationFeedback_reached_waypoints total_waypoints(::mrpt_nav_interfaces::msg::NavigationFeedback::_total_waypoints_type arg)
  {
    msg_.total_waypoints = std::move(arg);
    return Init_NavigationFeedback_reached_waypoints(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::NavigationFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::msg::NavigationFeedback>()
{
  return mrpt_nav_interfaces::msg::builder::Init_NavigationFeedback_total_waypoints();
}

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__BUILDER_HPP_
