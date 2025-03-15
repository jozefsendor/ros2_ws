// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_nav_interfaces:msg/NavigationFeedback.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__TRAITS_HPP_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrpt_nav_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigationFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: total_waypoints
  {
    out << "total_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.total_waypoints, out);
    out << ", ";
  }

  // member: reached_waypoints
  {
    out << "reached_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_waypoints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigationFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: total_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.total_waypoints, out);
    out << "\n";
  }

  // member: reached_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_waypoints, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigationFeedback & msg, bool use_flow_style = false)
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

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::msg::NavigationFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::msg::NavigationFeedback & msg)
{
  return mrpt_nav_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::msg::NavigationFeedback>()
{
  return "mrpt_nav_interfaces::msg::NavigationFeedback";
}

template<>
inline const char * name<mrpt_nav_interfaces::msg::NavigationFeedback>()
{
  return "mrpt_nav_interfaces/msg/NavigationFeedback";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::msg::NavigationFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::msg::NavigationFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrpt_nav_interfaces::msg::NavigationFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__TRAITS_HPP_
