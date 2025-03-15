// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Waypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
    out << ", ";
  }

  // member: ignore_heading
  {
    out << "ignore_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_heading, out);
    out << ", ";
  }

  // member: allow_skip
  {
    out << "allow_skip: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_skip, out);
    out << ", ";
  }

  // member: allowed_distance
  {
    out << "allowed_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.allowed_distance, out);
    out << ", ";
  }

  // member: speed_ratio
  {
    out << "speed_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_ratio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }

  // member: ignore_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_heading, out);
    out << "\n";
  }

  // member: allow_skip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_skip: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_skip, out);
    out << "\n";
  }

  // member: allowed_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allowed_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.allowed_distance, out);
    out << "\n";
  }

  // member: speed_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Waypoint & msg, bool use_flow_style = false)
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
  const mrpt_msgs::msg::Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::Waypoint & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::Waypoint>()
{
  return "mrpt_msgs::msg::Waypoint";
}

template<>
inline const char * name<mrpt_msgs::msg::Waypoint>()
{
  return "mrpt_msgs/msg/Waypoint";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::Waypoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::Waypoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<mrpt_msgs::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
