// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_nav_interfaces:msg/NavigationFinalStatus.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__BUILDER_HPP_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_nav_interfaces/msg/detail/navigation_final_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_nav_interfaces
{

namespace msg
{

namespace builder
{

class Init_NavigationFinalStatus_navigation_status
{
public:
  Init_NavigationFinalStatus_navigation_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_nav_interfaces::msg::NavigationFinalStatus navigation_status(::mrpt_nav_interfaces::msg::NavigationFinalStatus::_navigation_status_type arg)
  {
    msg_.navigation_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::NavigationFinalStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::msg::NavigationFinalStatus>()
{
  return mrpt_nav_interfaces::msg::builder::Init_NavigationFinalStatus_navigation_status();
}

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__BUILDER_HPP_
