// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrpt_msgs:srv/GetCMGraph.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/srv/detail/get_cm_graph__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrpt_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrpt_msgs/srv/detail/get_cm_graph__struct.h"
#include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // node_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // node_ids

// forward declare type support functions


using _GetCMGraph_Request__ros_msg_type = mrpt_msgs__srv__GetCMGraph_Request;

static bool _GetCMGraph_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetCMGraph_Request__ros_msg_type * ros_message = static_cast<const _GetCMGraph_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node_ids
  {
    size_t size = ros_message->node_ids.size;
    auto array_ptr = ros_message->node_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GetCMGraph_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetCMGraph_Request__ros_msg_type * ros_message = static_cast<_GetCMGraph_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->node_ids.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->node_ids);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->node_ids, size)) {
      fprintf(stderr, "failed to create array for field 'node_ids'");
      return false;
    }
    auto array_ptr = ros_message->node_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t get_serialized_size_mrpt_msgs__srv__GetCMGraph_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetCMGraph_Request__ros_msg_type * ros_message = static_cast<const _GetCMGraph_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name node_ids
  {
    size_t array_size = ros_message->node_ids.size;
    auto array_ptr = ros_message->node_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetCMGraph_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrpt_msgs__srv__GetCMGraph_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t max_serialized_size_mrpt_msgs__srv__GetCMGraph_Request(
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

  // member: node_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrpt_msgs__srv__GetCMGraph_Request;
    is_plain =
      (
      offsetof(DataType, node_ids) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetCMGraph_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrpt_msgs__srv__GetCMGraph_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetCMGraph_Request = {
  "mrpt_msgs::srv",
  "GetCMGraph_Request",
  _GetCMGraph_Request__cdr_serialize,
  _GetCMGraph_Request__cdr_deserialize,
  _GetCMGraph_Request__get_serialized_size,
  _GetCMGraph_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetCMGraph_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetCMGraph_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, srv, GetCMGraph_Request)() {
  return &_GetCMGraph_Request__type_support;
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
// #include "mrpt_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__struct.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
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

#include "mrpt_msgs/msg/detail/network_of_poses__functions.h"  // cm_graph

// forward declare type support functions
size_t get_serialized_size_mrpt_msgs__msg__NetworkOfPoses(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mrpt_msgs__msg__NetworkOfPoses(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, msg, NetworkOfPoses)();


using _GetCMGraph_Response__ros_msg_type = mrpt_msgs__srv__GetCMGraph_Response;

static bool _GetCMGraph_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetCMGraph_Response__ros_msg_type * ros_message = static_cast<const _GetCMGraph_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cm_graph
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mrpt_msgs, msg, NetworkOfPoses
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cm_graph, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetCMGraph_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetCMGraph_Response__ros_msg_type * ros_message = static_cast<_GetCMGraph_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cm_graph
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mrpt_msgs, msg, NetworkOfPoses
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cm_graph))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t get_serialized_size_mrpt_msgs__srv__GetCMGraph_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetCMGraph_Response__ros_msg_type * ros_message = static_cast<const _GetCMGraph_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cm_graph

  current_alignment += get_serialized_size_mrpt_msgs__msg__NetworkOfPoses(
    &(ros_message->cm_graph), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetCMGraph_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrpt_msgs__srv__GetCMGraph_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t max_serialized_size_mrpt_msgs__srv__GetCMGraph_Response(
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

  // member: cm_graph
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mrpt_msgs__msg__NetworkOfPoses(
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
    using DataType = mrpt_msgs__srv__GetCMGraph_Response;
    is_plain =
      (
      offsetof(DataType, cm_graph) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetCMGraph_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrpt_msgs__srv__GetCMGraph_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetCMGraph_Response = {
  "mrpt_msgs::srv",
  "GetCMGraph_Response",
  _GetCMGraph_Response__cdr_serialize,
  _GetCMGraph_Response__cdr_deserialize,
  _GetCMGraph_Response__get_serialized_size,
  _GetCMGraph_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetCMGraph_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetCMGraph_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, srv, GetCMGraph_Response)() {
  return &_GetCMGraph_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mrpt_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrpt_msgs/srv/get_cm_graph.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetCMGraph__callbacks = {
  "mrpt_msgs::srv",
  "GetCMGraph",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, srv, GetCMGraph_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, srv, GetCMGraph_Response)(),
};

static rosidl_service_type_support_t GetCMGraph__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetCMGraph__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, srv, GetCMGraph)() {
  return &GetCMGraph__handle;
}

#if defined(__cplusplus)
}
#endif
