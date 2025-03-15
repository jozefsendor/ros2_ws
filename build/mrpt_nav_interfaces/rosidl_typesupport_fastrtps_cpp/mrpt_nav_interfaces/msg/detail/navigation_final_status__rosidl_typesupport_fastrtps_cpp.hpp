// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mrpt_nav_interfaces:msg/NavigationFinalStatus.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_nav_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mrpt_nav_interfaces/msg/detail/navigation_final_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace mrpt_nav_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_nav_interfaces
cdr_serialize(
  const mrpt_nav_interfaces::msg::NavigationFinalStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_nav_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrpt_nav_interfaces::msg::NavigationFinalStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_nav_interfaces
get_serialized_size(
  const mrpt_nav_interfaces::msg::NavigationFinalStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_nav_interfaces
max_serialized_size_NavigationFinalStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrpt_nav_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_nav_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrpt_nav_interfaces, msg, NavigationFinalStatus)();

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
