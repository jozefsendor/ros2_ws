// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_nav_interfaces:srv/MakePlanFromTo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__rosidl_typesupport_introspection_c.h"
#include "mrpt_nav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__functions.h"
#include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__struct.h"


// Include directives for member types
// Member `start`
// Member `target`
#include "geometry_msgs/msg/pose.h"
// Member `start`
// Member `target`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request__init(message_memory);
}

void mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_fini_function(void * message_memory)
{
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_member_array[2] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__srv__MakePlanFromTo_Request, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__srv__MakePlanFromTo_Request, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_members = {
  "mrpt_nav_interfaces__srv",  // message namespace
  "MakePlanFromTo_Request",  // message name
  2,  // number of fields
  sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Request),
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_member_array,  // message members
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_type_support_handle = {
  0,
  &mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_nav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_nav_interfaces, srv, MakePlanFromTo_Request)() {
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_type_support_handle.typesupport_identifier) {
    mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_nav_interfaces__srv__MakePlanFromTo_Request__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mrpt_nav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__functions.h"
// already included above
// #include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__struct.h"


// Include directives for member types
// Member `waypoints`
#include "mrpt_msgs/msg/waypoint_sequence.h"
// Member `waypoints`
#include "mrpt_msgs/msg/detail/waypoint_sequence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response__init(message_memory);
}

void mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_fini_function(void * message_memory)
{
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_message_member_array[2] = {
  {
    "valid_path_found",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__srv__MakePlanFromTo_Response, valid_path_found),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_nav_interfaces__srv__MakePlanFromTo_Response, waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_message_members = {
  "mrpt_nav_interfaces__srv",  // message namespace
  "MakePlanFromTo_Response",  // message name
  2,  // number of fields
  sizeof(mrpt_nav_interfaces__srv__MakePlanFromTo_Response),
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_message_member_array,  // message members
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_message_type_support_handle = {
  0,
  &mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_nav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_nav_interfaces, srv, MakePlanFromTo_Response)() {
  mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, WaypointSequence)();
  if (!mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_message_type_support_handle.typesupport_identifier) {
    mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_nav_interfaces__srv__MakePlanFromTo_Response__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mrpt_nav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mrpt_nav_interfaces/srv/detail/make_plan_from_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mrpt_nav_interfaces__srv__detail__make_plan_from_to__rosidl_typesupport_introspection_c__MakePlanFromTo_service_members = {
  "mrpt_nav_interfaces__srv",  // service namespace
  "MakePlanFromTo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mrpt_nav_interfaces__srv__detail__make_plan_from_to__rosidl_typesupport_introspection_c__MakePlanFromTo_Request_message_type_support_handle,
  NULL  // response message
  // mrpt_nav_interfaces__srv__detail__make_plan_from_to__rosidl_typesupport_introspection_c__MakePlanFromTo_Response_message_type_support_handle
};

static rosidl_service_type_support_t mrpt_nav_interfaces__srv__detail__make_plan_from_to__rosidl_typesupport_introspection_c__MakePlanFromTo_service_type_support_handle = {
  0,
  &mrpt_nav_interfaces__srv__detail__make_plan_from_to__rosidl_typesupport_introspection_c__MakePlanFromTo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_nav_interfaces, srv, MakePlanFromTo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_nav_interfaces, srv, MakePlanFromTo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_nav_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_nav_interfaces, srv, MakePlanFromTo)() {
  if (!mrpt_nav_interfaces__srv__detail__make_plan_from_to__rosidl_typesupport_introspection_c__MakePlanFromTo_service_type_support_handle.typesupport_identifier) {
    mrpt_nav_interfaces__srv__detail__make_plan_from_to__rosidl_typesupport_introspection_c__MakePlanFromTo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mrpt_nav_interfaces__srv__detail__make_plan_from_to__rosidl_typesupport_introspection_c__MakePlanFromTo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_nav_interfaces, srv, MakePlanFromTo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_nav_interfaces, srv, MakePlanFromTo_Response)()->data;
  }

  return &mrpt_nav_interfaces__srv__detail__make_plan_from_to__rosidl_typesupport_introspection_c__MakePlanFromTo_service_type_support_handle;
}
