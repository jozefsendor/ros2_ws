// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/WaypointSequence.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/waypoint_sequence__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'waypoints'
#include "mrpt_msgs/msg/detail/waypoint__traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaypointSequence & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointSequence & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointSequence & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mrpt_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_msgs::msg::WaypointSequence & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::WaypointSequence & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::WaypointSequence>()
{
  return "mrpt_msgs::msg::WaypointSequence";
}

template<>
inline const char * name<mrpt_msgs::msg::WaypointSequence>()
{
  return "mrpt_msgs/msg/WaypointSequence";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::WaypointSequence>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::WaypointSequence>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_msgs::msg::WaypointSequence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__TRAITS_HPP_
