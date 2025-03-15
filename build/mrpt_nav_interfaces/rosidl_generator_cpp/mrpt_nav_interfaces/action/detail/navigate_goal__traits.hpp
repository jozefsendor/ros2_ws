// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_nav_interfaces:action/NavigateGoal.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_GOAL__TRAITS_HPP_
#define MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_nav_interfaces/action/detail/navigate_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateGoal_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateGoal_Goal & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateGoal_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::action::NavigateGoal_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::action::NavigateGoal_Goal & msg)
{
  return mrpt_nav_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::action::NavigateGoal_Goal>()
{
  return "mrpt_nav_interfaces::action::NavigateGoal_Goal";
}

template<>
inline const char * name<mrpt_nav_interfaces::action::NavigateGoal_Goal>()
{
  return "mrpt_nav_interfaces/action/NavigateGoal_Goal";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::action::NavigateGoal_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "mrpt_nav_interfaces/msg/detail/navigation_final_status__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateGoal_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateGoal_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateGoal_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::action::NavigateGoal_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::action::NavigateGoal_Result & msg)
{
  return mrpt_nav_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::action::NavigateGoal_Result>()
{
  return "mrpt_nav_interfaces::action::NavigateGoal_Result";
}

template<>
inline const char * name<mrpt_nav_interfaces::action::NavigateGoal_Result>()
{
  return "mrpt_nav_interfaces/action/NavigateGoal_Result";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_Result>
  : std::integral_constant<bool, has_fixed_size<mrpt_nav_interfaces::msg::NavigationFinalStatus>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_Result>
  : std::integral_constant<bool, has_bounded_size<mrpt_nav_interfaces::msg::NavigationFinalStatus>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::action::NavigateGoal_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateGoal_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateGoal_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateGoal_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::action::NavigateGoal_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::action::NavigateGoal_Feedback & msg)
{
  return mrpt_nav_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::action::NavigateGoal_Feedback>()
{
  return "mrpt_nav_interfaces::action::NavigateGoal_Feedback";
}

template<>
inline const char * name<mrpt_nav_interfaces::action::NavigateGoal_Feedback>()
{
  return "mrpt_nav_interfaces/action/NavigateGoal_Feedback";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_Feedback>
  : std::integral_constant<bool, has_fixed_size<mrpt_nav_interfaces::msg::NavigationFeedback>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_Feedback>
  : std::integral_constant<bool, has_bounded_size<mrpt_nav_interfaces::msg::NavigationFeedback>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::action::NavigateGoal_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "mrpt_nav_interfaces/action/detail/navigate_goal__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateGoal_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateGoal_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateGoal_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request & msg)
{
  return mrpt_nav_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request>()
{
  return "mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request";
}

template<>
inline const char * name<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request>()
{
  return "mrpt_nav_interfaces/action/NavigateGoal_SendGoal_Request";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateGoal_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateGoal_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateGoal_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response & msg)
{
  return mrpt_nav_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response>()
{
  return "mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response";
}

template<>
inline const char * name<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response>()
{
  return "mrpt_nav_interfaces/action/NavigateGoal_SendGoal_Response";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrpt_nav_interfaces::action::NavigateGoal_SendGoal>()
{
  return "mrpt_nav_interfaces::action::NavigateGoal_SendGoal";
}

template<>
inline const char * name<mrpt_nav_interfaces::action::NavigateGoal_SendGoal>()
{
  return "mrpt_nav_interfaces/action/NavigateGoal_SendGoal";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request>::value &&
    has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request>::value &&
    has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<mrpt_nav_interfaces::action::NavigateGoal_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrpt_nav_interfaces::action::NavigateGoal_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateGoal_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateGoal_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateGoal_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request & msg)
{
  return mrpt_nav_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request>()
{
  return "mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request";
}

template<>
inline const char * name<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request>()
{
  return "mrpt_nav_interfaces/action/NavigateGoal_GetResult_Request";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "mrpt_nav_interfaces/action/detail/navigate_goal__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateGoal_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateGoal_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateGoal_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response & msg)
{
  return mrpt_nav_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response>()
{
  return "mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response";
}

template<>
inline const char * name<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response>()
{
  return "mrpt_nav_interfaces/action/NavigateGoal_GetResult_Response";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_Result>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_Result>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrpt_nav_interfaces::action::NavigateGoal_GetResult>()
{
  return "mrpt_nav_interfaces::action::NavigateGoal_GetResult";
}

template<>
inline const char * name<mrpt_nav_interfaces::action::NavigateGoal_GetResult>()
{
  return "mrpt_nav_interfaces/action/NavigateGoal_GetResult";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request>::value &&
    has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request>::value &&
    has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response>::value
  >
{
};

template<>
struct is_service<mrpt_nav_interfaces::action::NavigateGoal_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrpt_nav_interfaces::action::NavigateGoal_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "mrpt_nav_interfaces/action/detail/navigate_goal__traits.hpp"

namespace mrpt_nav_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateGoal_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateGoal_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateGoal_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mrpt_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_nav_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_nav_interfaces::action::NavigateGoal_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_nav_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_nav_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_nav_interfaces::action::NavigateGoal_FeedbackMessage & msg)
{
  return mrpt_nav_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_nav_interfaces::action::NavigateGoal_FeedbackMessage>()
{
  return "mrpt_nav_interfaces::action::NavigateGoal_FeedbackMessage";
}

template<>
inline const char * name<mrpt_nav_interfaces::action::NavigateGoal_FeedbackMessage>()
{
  return "mrpt_nav_interfaces/action/NavigateGoal_FeedbackMessage";
}

template<>
struct has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<mrpt_nav_interfaces::action::NavigateGoal_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<mrpt_nav_interfaces::action::NavigateGoal_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mrpt_nav_interfaces::action::NavigateGoal_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<mrpt_nav_interfaces::action::NavigateGoal>
  : std::true_type
{
};

template<>
struct is_action_goal<mrpt_nav_interfaces::action::NavigateGoal_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<mrpt_nav_interfaces::action::NavigateGoal_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<mrpt_nav_interfaces::action::NavigateGoal_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_GOAL__TRAITS_HPP_
