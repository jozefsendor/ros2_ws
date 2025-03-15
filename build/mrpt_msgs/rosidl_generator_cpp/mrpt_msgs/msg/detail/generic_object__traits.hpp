// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/GenericObject.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/generic_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GenericObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GenericObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenericObject & msg, bool use_flow_style = false)
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
  const mrpt_msgs::msg::GenericObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::GenericObject & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::GenericObject>()
{
  return "mrpt_msgs::msg::GenericObject";
}

template<>
inline const char * name<mrpt_msgs::msg::GenericObject>()
{
  return "mrpt_msgs/msg/GenericObject";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::GenericObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::GenericObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_msgs::msg::GenericObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__TRAITS_HPP_
