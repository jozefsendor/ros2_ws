// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_msgs:msg/GenericObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_msgs/msg/detail/generic_object__rosidl_typesupport_introspection_c.h"
#include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_msgs/msg/detail/generic_object__functions.h"
#include "mrpt_msgs/msg/detail/generic_object__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__msg__GenericObject__init(message_memory);
}

void mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_fini_function(void * message_memory)
{
  mrpt_msgs__msg__GenericObject__fini(message_memory);
}

size_t mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__size_function__GenericObject__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__get_const_function__GenericObject__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__get_function__GenericObject__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__fetch_function__GenericObject__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__get_const_function__GenericObject__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__assign_function__GenericObject__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__get_function__GenericObject__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__resize_function__GenericObject__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GenericObject, data),  // bytes offset in struct
    NULL,  // default value
    mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__size_function__GenericObject__data,  // size() function pointer
    mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__get_const_function__GenericObject__data,  // get_const(index) function pointer
    mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__get_function__GenericObject__data,  // get(index) function pointer
    mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__fetch_function__GenericObject__data,  // fetch(index, &value) function pointer
    mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__assign_function__GenericObject__data,  // assign(index, value) function pointer
    mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__resize_function__GenericObject__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_message_members = {
  "mrpt_msgs__msg",  // message namespace
  "GenericObject",  // message name
  1,  // number of fields
  sizeof(mrpt_msgs__msg__GenericObject),
  mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_message_member_array,  // message members
  mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_message_type_support_handle = {
  0,
  &mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, GenericObject)() {
  if (!mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__msg__GenericObject__rosidl_typesupport_introspection_c__GenericObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
