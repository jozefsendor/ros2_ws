// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_msgs:srv/GetCMGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_msgs/srv/detail/get_cm_graph__rosidl_typesupport_introspection_c.h"
#include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
#include "mrpt_msgs/srv/detail/get_cm_graph__struct.h"


// Include directives for member types
// Member `node_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__srv__GetCMGraph_Request__init(message_memory);
}

void mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_fini_function(void * message_memory)
{
  mrpt_msgs__srv__GetCMGraph_Request__fini(message_memory);
}

size_t mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__size_function__GetCMGraph_Request__node_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Request__node_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Request__node_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__fetch_function__GetCMGraph_Request__node_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Request__node_ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__assign_function__GetCMGraph_Request__node_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Request__node_ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__resize_function__GetCMGraph_Request__node_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_member_array[1] = {
  {
    "node_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__srv__GetCMGraph_Request, node_ids),  // bytes offset in struct
    NULL,  // default value
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__size_function__GetCMGraph_Request__node_ids,  // size() function pointer
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Request__node_ids,  // get_const(index) function pointer
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Request__node_ids,  // get(index) function pointer
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__fetch_function__GetCMGraph_Request__node_ids,  // fetch(index, &value) function pointer
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__assign_function__GetCMGraph_Request__node_ids,  // assign(index, value) function pointer
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__resize_function__GetCMGraph_Request__node_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_members = {
  "mrpt_msgs__srv",  // message namespace
  "GetCMGraph_Request",  // message name
  1,  // number of fields
  sizeof(mrpt_msgs__srv__GetCMGraph_Request),
  mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_member_array,  // message members
  mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle = {
  0,
  &mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Request)() {
  if (!mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__struct.h"


// Include directives for member types
// Member `cm_graph`
#include "mrpt_msgs/msg/network_of_poses.h"
// Member `cm_graph`
#include "mrpt_msgs/msg/detail/network_of_poses__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__srv__GetCMGraph_Response__init(message_memory);
}

void mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_fini_function(void * message_memory)
{
  mrpt_msgs__srv__GetCMGraph_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_member_array[1] = {
  {
    "cm_graph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__srv__GetCMGraph_Response, cm_graph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_members = {
  "mrpt_msgs__srv",  // message namespace
  "GetCMGraph_Response",  // message name
  1,  // number of fields
  sizeof(mrpt_msgs__srv__GetCMGraph_Response),
  mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_member_array,  // message members
  mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle = {
  0,
  &mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Response)() {
  mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, NetworkOfPoses)();
  if (!mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_members = {
  "mrpt_msgs__srv",  // service namespace
  "GetCMGraph",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle,
  NULL  // response message
  // mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle
};

static rosidl_service_type_support_t mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_type_support_handle = {
  0,
  &mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph)() {
  if (!mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_type_support_handle.typesupport_identifier) {
    mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Response)()->data;
  }

  return &mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_type_support_handle;
}
