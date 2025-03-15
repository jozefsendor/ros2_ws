// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrpt_nav_interfaces:msg/NavigationFeedback.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrpt_nav_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigationFeedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrpt_nav_interfaces::msg::NavigationFeedback(_init);
}

void NavigationFeedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrpt_nav_interfaces::msg::NavigationFeedback *>(message_memory);
  typed_message->~NavigationFeedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigationFeedback_message_member_array[2] = {
  {
    "total_waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces::msg::NavigationFeedback, total_waypoints),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reached_waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces::msg::NavigationFeedback, reached_waypoints),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigationFeedback_message_members = {
  "mrpt_nav_interfaces::msg",  // message namespace
  "NavigationFeedback",  // message name
  2,  // number of fields
  sizeof(mrpt_nav_interfaces::msg::NavigationFeedback),
  NavigationFeedback_message_member_array,  // message members
  NavigationFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigationFeedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigationFeedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigationFeedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrpt_nav_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_nav_interfaces::msg::NavigationFeedback>()
{
  return &::mrpt_nav_interfaces::msg::rosidl_typesupport_introspection_cpp::NavigationFeedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_nav_interfaces, msg, NavigationFeedback)() {
  return &::mrpt_nav_interfaces::msg::rosidl_typesupport_introspection_cpp::NavigationFeedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
