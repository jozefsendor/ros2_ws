// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_nav_interfaces:srv/GetGridmapLayer.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__TRAITS_HPP_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_nav_interfaces/srv/detail/get_gridmap_layer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrpt_nav_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGridmapLayer_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: layer_name
  {
    out << "layer_name: ";
    rosidl_generator_traits::value_to_yaml(msg.layer_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGridmapLayer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: layer_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layer_name: ";
    rosidl_generator_traits::value_to_yaml(msg.layer_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGridmapLayer_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::srv::GetGridmapLayer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::srv::GetGridmapLayer_Request & msg)
{
  return mrpt_nav_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::srv::GetGridmapLayer_Request>()
{
  return "mrpt_nav_interfaces::srv::GetGridmapLayer_Request";
}

template<>
inline const char * name<mrpt_nav_interfaces::srv::GetGridmapLayer_Request>()
{
  return "mrpt_nav_interfaces/srv/GetGridmapLayer_Request";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::srv::GetGridmapLayer_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::srv::GetGridmapLayer_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_nav_interfaces::srv::GetGridmapLayer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'grid'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGridmapLayer_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: grid
  {
    out << "grid: ";
    to_flow_style_yaml(msg.grid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGridmapLayer_Response & msg,
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

  // member: grid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid:\n";
    to_block_style_yaml(msg.grid, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGridmapLayer_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::srv::GetGridmapLayer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::srv::GetGridmapLayer_Response & msg)
{
  return mrpt_nav_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::srv::GetGridmapLayer_Response>()
{
  return "mrpt_nav_interfaces::srv::GetGridmapLayer_Response";
}

template<>
inline const char * name<mrpt_nav_interfaces::srv::GetGridmapLayer_Response>()
{
  return "mrpt_nav_interfaces/srv/GetGridmapLayer_Response";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::srv::GetGridmapLayer_Response>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::srv::GetGridmapLayer_Response>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::srv::GetGridmapLayer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrpt_nav_interfaces::srv::GetGridmapLayer>()
{
  return "mrpt_nav_interfaces::srv::GetGridmapLayer";
}

template<>
inline const char * name<mrpt_nav_interfaces::srv::GetGridmapLayer>()
{
  return "mrpt_nav_interfaces/srv/GetGridmapLayer";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::srv::GetGridmapLayer>
  : std::integral_constant<
    bool,
    has_fixed_size<mrpt_nav_interfaces::srv::GetGridmapLayer_Request>::value &&
    has_fixed_size<mrpt_nav_interfaces::srv::GetGridmapLayer_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrpt_nav_interfaces::srv::GetGridmapLayer>
  : std::integral_constant<
    bool,
    has_bounded_size<mrpt_nav_interfaces::srv::GetGridmapLayer_Request>::value &&
    has_bounded_size<mrpt_nav_interfaces::srv::GetGridmapLayer_Response>::value
  >
{
};

template<>
struct is_service<mrpt_nav_interfaces::srv::GetGridmapLayer>
  : std::true_type
{
};

template<>
struct is_service_request<mrpt_nav_interfaces::srv::GetGridmapLayer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrpt_nav_interfaces::srv::GetGridmapLayer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__TRAITS_HPP_
