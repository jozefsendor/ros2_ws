// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_nav_interfaces:srv/GetLayers.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__BUILDER_HPP_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_nav_interfaces/srv/detail/get_layers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_nav_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::srv::GetLayers_Request>()
{
  return ::mrpt_nav_interfaces::srv::GetLayers_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetLayers_Response_layers
{
public:
  Init_GetLayers_Response_layers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_nav_interfaces::srv::GetLayers_Response layers(::mrpt_nav_interfaces::srv::GetLayers_Response::_layers_type arg)
  {
    msg_.layers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::GetLayers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::srv::GetLayers_Response>()
{
  return mrpt_nav_interfaces::srv::builder::Init_GetLayers_Response_layers();
}

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__BUILDER_HPP_
