// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/WaypointSequence.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/waypoint_sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointSequence_waypoints
{
public:
  explicit Init_WaypointSequence_waypoints(::mrpt_msgs::msg::WaypointSequence & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::WaypointSequence waypoints(::mrpt_msgs::msg::WaypointSequence::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::WaypointSequence msg_;
};

class Init_WaypointSequence_header
{
public:
  Init_WaypointSequence_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointSequence_waypoints header(::mrpt_msgs::msg::WaypointSequence::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WaypointSequence_waypoints(msg_);
  }

private:
  ::mrpt_msgs::msg::WaypointSequence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::WaypointSequence>()
{
  return mrpt_msgs::msg::builder::Init_WaypointSequence_header();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__BUILDER_HPP_
