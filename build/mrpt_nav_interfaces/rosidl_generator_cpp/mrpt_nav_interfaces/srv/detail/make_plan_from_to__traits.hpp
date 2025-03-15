// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_nav_interfaces:srv/MakePlanFromTo.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_FROM_TO__TRAITS_HPP_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_FROM_TO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start'
// Member 'target'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MakePlanFromTo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakePlanFromTo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakePlanFromTo_Request & msg, bool use_flow_style = false)
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
  const mrpt_nav_interfaces::srv::MakePlanFromTo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::srv::MakePlanFromTo_Request & msg)
{
  return mrpt_nav_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::srv::MakePlanFromTo_Request>()
{
  return "mrpt_nav_interfaces::srv::MakePlanFromTo_Request";
}

template<>
inline const char * name<mrpt_nav_interfaces::srv::MakePlanFromTo_Request>()
{
  return "mrpt_nav_interfaces/srv/MakePlanFromTo_Request";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::srv::MakePlanFromTo_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::srv::MakePlanFromTo_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::srv::MakePlanFromTo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'waypoints'
#include "mrpt_msgs/msg/detail/waypoint_sequence__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MakePlanFromTo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: valid_path_found
  {
    out << "valid_path_found: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_path_found, out);
    out << ", ";
  }

  // member: waypoints
  {
    out << "waypoints: ";
    to_flow_style_yaml(msg.waypoints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakePlanFromTo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valid_path_found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_path_found: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_path_found, out);
    out << "\n";
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints:\n";
    to_block_style_yaml(msg.waypoints, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakePlanFromTo_Response & msg, bool use_flow_style = false)
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
  const mrpt_nav_interfaces::srv::MakePlanFromTo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::srv::MakePlanFromTo_Response & msg)
{
  return mrpt_nav_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::srv::MakePlanFromTo_Response>()
{
  return "mrpt_nav_interfaces::srv::MakePlanFromTo_Response";
}

template<>
inline const char * name<mrpt_nav_interfaces::srv::MakePlanFromTo_Response>()
{
  return "mrpt_nav_interfaces/srv/MakePlanFromTo_Response";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::srv::MakePlanFromTo_Response>
  : std::integral_constant<bool, has_fixed_size<mrpt_msgs::msg::WaypointSequence>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::srv::MakePlanFromTo_Response>
  : std::integral_constant<bool, has_bounded_size<mrpt_msgs::msg::WaypointSequence>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::srv::MakePlanFromTo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrpt_nav_interfaces::srv::MakePlanFromTo>()
{
  return "mrpt_nav_interfaces::srv::MakePlanFromTo";
}

template<>
inline const char * name<mrpt_nav_interfaces::srv::MakePlanFromTo>()
{
  return "mrpt_nav_interfaces/srv/MakePlanFromTo";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::srv::MakePlanFromTo>
  : std::integral_constant<
    bool,
    has_fixed_size<mrpt_nav_interfaces::srv::MakePlanFromTo_Request>::value &&
    has_fixed_size<mrpt_nav_interfaces::srv::MakePlanFromTo_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrpt_nav_interfaces::srv::MakePlanFromTo>
  : std::integral_constant<
    bool,
    has_bounded_size<mrpt_nav_interfaces::srv::MakePlanFromTo_Request>::value &&
    has_bounded_size<mrpt_nav_interfaces::srv::MakePlanFromTo_Response>::value
  >
{
};

template<>
struct is_service<mrpt_nav_interfaces::srv::MakePlanFromTo>
  : std::true_type
{
};

template<>
struct is_service_request<mrpt_nav_interfaces::srv::MakePlanFromTo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrpt_nav_interfaces::srv::MakePlanFromTo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_FROM_TO__TRAITS_HPP_
