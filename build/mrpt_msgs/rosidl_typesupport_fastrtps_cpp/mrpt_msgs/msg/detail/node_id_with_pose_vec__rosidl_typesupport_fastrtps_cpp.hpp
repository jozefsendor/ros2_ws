// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mrpt_msgs:msg/NodeIDWithPoseVec.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mrpt_msgs/msg/detail/node_id_with_pose_vec__struct.hpp"

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

namespace mrpt_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_msgs
cdr_serialize(
  const mrpt_msgs::msg::NodeIDWithPoseVec & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mrpt_msgs::msg::NodeIDWithPoseVec & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_msgs
get_serialized_size(
  const mrpt_msgs::msg::NodeIDWithPoseVec & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_msgs
max_serialized_size_NodeIDWithPoseVec(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mrpt_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mrpt_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrpt_msgs, msg, NodeIDWithPoseVec)();

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
