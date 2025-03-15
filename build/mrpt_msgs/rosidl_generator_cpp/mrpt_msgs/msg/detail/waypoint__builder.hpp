// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoint_speed_ratio
{
public:
  explicit Init_Waypoint_speed_ratio(::mrpt_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::Waypoint speed_ratio(::mrpt_msgs::msg::Waypoint::_speed_ratio_type arg)
  {
    msg_.speed_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_allowed_distance
{
public:
  explicit Init_Waypoint_allowed_distance(::mrpt_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_speed_ratio allowed_distance(::mrpt_msgs::msg::Waypoint::_allowed_distance_type arg)
  {
    msg_.allowed_distance = std::move(arg);
    return Init_Waypoint_speed_ratio(msg_);
  }

private:
  ::mrpt_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_allow_skip
{
public:
  explicit Init_Waypoint_allow_skip(::mrpt_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_allowed_distance allow_skip(::mrpt_msgs::msg::Waypoint::_allow_skip_type arg)
  {
    msg_.allow_skip = std::move(arg);
    return Init_Waypoint_allowed_distance(msg_);
  }

private:
  ::mrpt_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_ignore_heading
{
public:
  explicit Init_Waypoint_ignore_heading(::mrpt_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_allow_skip ignore_heading(::mrpt_msgs::msg::Waypoint::_ignore_heading_type arg)
  {
    msg_.ignore_heading = std::move(arg);
    return Init_Waypoint_allow_skip(msg_);
  }

private:
  ::mrpt_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_target
{
public:
  Init_Waypoint_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_ignore_heading target(::mrpt_msgs::msg::Waypoint::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_Waypoint_ignore_heading(msg_);
  }

private:
  ::mrpt_msgs::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::Waypoint>()
{
  return mrpt_msgs::msg::builder::Init_Waypoint_target();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
