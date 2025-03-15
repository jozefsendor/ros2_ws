// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_nav_interfaces:srv/GetLayers.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__TRAITS_HPP_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_nav_interfaces/srv/detail/get_layers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrpt_nav_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLayers_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLayers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLayers_Request & msg, bool use_flow_style = false)
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
  const mrpt_nav_interfaces::srv::GetLayers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::srv::GetLayers_Request & msg)
{
  return mrpt_nav_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::srv::GetLayers_Request>()
{
  return "mrpt_nav_interfaces::srv::GetLayers_Request";
}

template<>
inline const char * name<mrpt_nav_interfaces::srv::GetLayers_Request>()
{
  return "mrpt_nav_interfaces/srv/GetLayers_Request";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::srv::GetLayers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::srv::GetLayers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrpt_nav_interfaces::srv::GetLayers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mrpt_nav_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLayers_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: layers
  {
    if (msg.layers.size() == 0) {
      out << "layers: []";
    } else {
      out << "layers: [";
      size_t pending_items = msg.layers.size();
      for (auto item : msg.layers) {
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
  const GetLayers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: layers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.layers.size() == 0) {
      out << "layers: []\n";
    } else {
      out << "layers:\n";
      for (auto item : msg.layers) {
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

inline std::string to_yaml(const GetLayers_Response & msg, bool use_flow_style = false)
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
  const mrpt_nav_interfaces::srv::GetLayers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::srv::GetLayers_Response & msg)
{
  return mrpt_nav_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::srv::GetLayers_Response>()
{
  return "mrpt_nav_interfaces::srv::GetLayers_Response";
}

template<>
inline const char * name<mrpt_nav_interfaces::srv::GetLayers_Response>()
{
  return "mrpt_nav_interfaces/srv/GetLayers_Response";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::srv::GetLayers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::srv::GetLayers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_nav_interfaces::srv::GetLayers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrpt_nav_interfaces::srv::GetLayers>()
{
  return "mrpt_nav_interfaces::srv::GetLayers";
}

template<>
inline const char * name<mrpt_nav_interfaces::srv::GetLayers>()
{
  return "mrpt_nav_interfaces/srv/GetLayers";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::srv::GetLayers>
  : std::integral_constant<
    bool,
    has_fixed_size<mrpt_nav_interfaces::srv::GetLayers_Request>::value &&
    has_fixed_size<mrpt_nav_interfaces::srv::GetLayers_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrpt_nav_interfaces::srv::GetLayers>
  : std::integral_constant<
    bool,
    has_bounded_size<mrpt_nav_interfaces::srv::GetLayers_Request>::value &&
    has_bounded_size<mrpt_nav_interfaces::srv::GetLayers_Response>::value
  >
{
};

template<>
struct is_service<mrpt_nav_interfaces::srv::GetLayers>
  : std::true_type
{
};

template<>
struct is_service_request<mrpt_nav_interfaces::srv::GetLayers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrpt_nav_interfaces::srv::GetLayers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__TRAITS_HPP_
