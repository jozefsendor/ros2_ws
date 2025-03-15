// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_nav_interfaces:msg/GeoreferencingMetadata.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__TRAITS_HPP_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_nav_interfaces/msg/detail/georeferencing_metadata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 't_enu_to_map'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 't_enu_to_utm'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeoreferencingMetadata & msg,
  std::ostream & out)
{
  out << "{";
  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: t_enu_to_map
  {
    out << "t_enu_to_map: ";
    to_flow_style_yaml(msg.t_enu_to_map, out);
    out << ", ";
  }

  // member: t_enu_to_utm
  {
    out << "t_enu_to_utm: ";
    to_flow_style_yaml(msg.t_enu_to_utm, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: utm_zone
  {
    out << "utm_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.utm_zone, out);
    out << ", ";
  }

  // member: utm_band
  {
    out << "utm_band: ";
    rosidl_generator_traits::value_to_yaml(msg.utm_band, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeoreferencingMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: t_enu_to_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_enu_to_map:\n";
    to_block_style_yaml(msg.t_enu_to_map, out, indentation + 2);
  }

  // member: t_enu_to_utm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_enu_to_utm:\n";
    to_block_style_yaml(msg.t_enu_to_utm, out, indentation + 2);
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: utm_zone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.utm_zone, out);
    out << "\n";
  }

  // member: utm_band
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_band: ";
    rosidl_generator_traits::value_to_yaml(msg.utm_band, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeoreferencingMetadata & msg, bool use_flow_style = false)
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
  const mrpt_nav_interfaces::msg::GeoreferencingMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::msg::GeoreferencingMetadata & msg)
{
  return mrpt_nav_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::msg::GeoreferencingMetadata>()
{
  return "mrpt_nav_interfaces::msg::GeoreferencingMetadata";
}

template<>
inline const char * name<mrpt_nav_interfaces::msg::GeoreferencingMetadata>()
{
  return "mrpt_nav_interfaces/msg/GeoreferencingMetadata";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::msg::GeoreferencingMetadata>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::msg::GeoreferencingMetadata>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_nav_interfaces::msg::GeoreferencingMetadata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__TRAITS_HPP_
