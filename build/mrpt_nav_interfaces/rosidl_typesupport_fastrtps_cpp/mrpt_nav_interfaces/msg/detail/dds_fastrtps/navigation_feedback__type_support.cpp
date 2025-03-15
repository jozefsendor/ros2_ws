// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mrpt_nav_interfaces:msg/NavigationFeedback.idl
// generated code does not contain a copyright notice
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mrpt_nav_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_nav_interfaces
cdr_serialize(
  const mrpt_nav_interfaces::msg::NavigationFeedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: total_waypoints
  cdr << ros_message.total_waypoints;
  // Member: reached_waypoints
  cdr << ros_message.reached_waypoints;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_nav_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrpt_nav_interfaces::msg::NavigationFeedback & ros_message)
{
  // Member: total_waypoints
  cdr >> ros_message.total_waypoints;

  // Member: reached_waypoints
  cdr >> ros_message.reached_waypoints;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_nav_interfaces
get_serialized_size(
  const mrpt_nav_interfaces::msg::NavigationFeedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: total_waypoints
  {
    size_t item_size = sizeof(ros_message.total_waypoints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reached_waypoints
  {
    size_t item_size = sizeof(ros_message.reached_waypoints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_nav_interfaces
max_serialized_size_NavigationFeedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: total_waypoints
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: reached_waypoints
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrpt_nav_interfaces::msg::NavigationFeedback;
    is_plain =
      (
      offsetof(DataType, reached_waypoints) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _NavigationFeedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mrpt_nav_interfaces::msg::NavigationFeedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavigationFeedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mrpt_nav_interfaces::msg::NavigationFeedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavigationFeedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mrpt_nav_interfaces::msg::NavigationFeedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavigationFeedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_NavigationFeedback(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _NavigationFeedback__callbacks = {
  "mrpt_nav_interfaces::msg",
  "NavigationFeedback",
  _NavigationFeedback__cdr_serialize,
  _NavigationFeedback__cdr_deserialize,
  _NavigationFeedback__get_serialized_size,
  _NavigationFeedback__max_serialized_size
};

static rosidl_message_type_support_t _NavigationFeedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigationFeedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrpt_nav_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mrpt_nav_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_nav_interfaces::msg::NavigationFeedback>()
{
  return &mrpt_nav_interfaces::msg::typesupport_fastrtps_cpp::_NavigationFeedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrpt_nav_interfaces, msg, NavigationFeedback)() {
  return &mrpt_nav_interfaces::msg::typesupport_fastrtps_cpp::_NavigationFeedback__handle;
}

#ifdef __cplusplus
}
#endif
