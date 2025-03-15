// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/GenericObject.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/generic_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_GenericObject_data
{
public:
  Init_GenericObject_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_msgs::msg::GenericObject data(::mrpt_msgs::msg::GenericObject::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::GenericObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::GenericObject>()
{
  return mrpt_msgs::msg::builder::Init_GenericObject_data();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__BUILDER_HPP_
