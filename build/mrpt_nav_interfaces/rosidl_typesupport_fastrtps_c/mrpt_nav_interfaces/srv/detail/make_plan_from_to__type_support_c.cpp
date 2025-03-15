// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrpt_nav_interfaces:srv/MakePlanFromTo.idl
// generated code does not contain a copyright notice
#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrpt_nav_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__struct.h"
#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // start, target

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_nav_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_nav_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_nav_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _MakePlanFromTo_Request__ros_msg_type = mrpt_nav_interfaces__srv__MakePlanFromTo_Request;

static bool _MakePlanFromTo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MakePlanFromTo_Request__ros_msg_type * ros_message = static_cast<const _MakePlanFromTo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start, cdr))
    {
      return false;
    }
  }

  // Field name: target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->target, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MakePlanFromTo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MakePlanFromTo_Request__ros_msg_type * ros_message = static_cast<_MakePlanFromTo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start))
    {
      return false;
    }
  }

  // Field name: target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->target))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_nav_interfaces
size_t get_serialized_size_mrpt_nav_interfaces__srv__MakePlanFromTo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MakePlanFromTo_Request__ros_msg_type * ros_message = static_cast<const _MakePlanFromTo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name start

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->start), current_alignment);
  // field.name target

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->target), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MakePlanFromTo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrpt_nav_interfaces__srv__MakePlanFromTo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_nav_interfaces
size_t max_serialized_size_mrpt_nav_interfaces__srv__MakePlanFromTo_Request(
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

  // member: start
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: target
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrpt_nav_interfaces__srv__MakePlanFromTo_Request;
    is_plain =
      (
      offsetof(DataType, target) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MakePlanFromTo_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrpt_nav_interfaces__srv__MakePlanFromTo_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MakePlanFromTo_Request = {
  "mrpt_nav_interfaces::srv",
  "MakePlanFromTo_Request",
  _MakePlanFromTo_Request__cdr_serialize,
  _MakePlanFromTo_Request__cdr_deserialize,
  _MakePlanFromTo_Request__get_serialized_size,
  _MakePlanFromTo_Request__max_serialized_size
};

static rosidl_message_type_support_t _MakePlanFromTo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MakePlanFromTo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_nav_interfaces, srv, MakePlanFromTo_Request)() {
  return &_MakePlanFromTo_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mrpt_nav_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__struct.h"
// already included above
// #include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mrpt_msgs/msg/detail/waypoint_sequence__functions.h"  // waypoints

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_nav_interfaces
size_t get_serialized_size_mrpt_msgs__msg__WaypointSequence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_nav_interfaces
size_t max_serialized_size_mrpt_msgs__msg__WaypointSequence(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_nav_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, msg, WaypointSequence)();


using _MakePlanFromTo_Response__ros_msg_type = mrpt_nav_interfaces__srv__MakePlanFromTo_Response;

static bool _MakePlanFromTo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MakePlanFromTo_Response__ros_msg_type * ros_message = static_cast<const _MakePlanFromTo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: valid_path_found
  {
    cdr << (ros_message->valid_path_found ? true : false);
  }

  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mrpt_msgs, msg, WaypointSequence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->waypoints, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MakePlanFromTo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MakePlanFromTo_Response__ros_msg_type * ros_message = static_cast<_MakePlanFromTo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: valid_path_found
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid_path_found = tmp ? true : false;
  }

  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mrpt_msgs, msg, WaypointSequence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->waypoints))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_nav_interfaces
size_t get_serialized_size_mrpt_nav_interfaces__srv__MakePlanFromTo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MakePlanFromTo_Response__ros_msg_type * ros_message = static_cast<const _MakePlanFromTo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name valid_path_found
  {
    size_t item_size = sizeof(ros_message->valid_path_found);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name waypoints

  current_alignment += get_serialized_size_mrpt_msgs__msg__WaypointSequence(
    &(ros_message->waypoints), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MakePlanFromTo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrpt_nav_interfaces__srv__MakePlanFromTo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_nav_interfaces
size_t max_serialized_size_mrpt_nav_interfaces__srv__MakePlanFromTo_Response(
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

  // member: valid_path_found
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: waypoints
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mrpt_msgs__msg__WaypointSequence(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrpt_nav_interfaces__srv__MakePlanFromTo_Response;
    is_plain =
      (
      offsetof(DataType, waypoints) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MakePlanFromTo_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrpt_nav_interfaces__srv__MakePlanFromTo_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MakePlanFromTo_Response = {
  "mrpt_nav_interfaces::srv",
  "MakePlanFromTo_Response",
  _MakePlanFromTo_Response__cdr_serialize,
  _MakePlanFromTo_Response__cdr_deserialize,
  _MakePlanFromTo_Response__get_serialized_size,
  _MakePlanFromTo_Response__max_serialized_size
};

static rosidl_message_type_support_t _MakePlanFromTo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MakePlanFromTo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_nav_interfaces, srv, MakePlanFromTo_Response)() {
  return &_MakePlanFromTo_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mrpt_nav_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrpt_nav_interfaces/srv/make_plan_from_to.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MakePlanFromTo__callbacks = {
  "mrpt_nav_interfaces::srv",
  "MakePlanFromTo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_nav_interfaces, srv, MakePlanFromTo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_nav_interfaces, srv, MakePlanFromTo_Response)(),
};

static rosidl_service_type_support_t MakePlanFromTo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MakePlanFromTo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_nav_interfaces, srv, MakePlanFromTo)() {
  return &MakePlanFromTo__handle;
}

#if defined(__cplusplus)
}
#endif
