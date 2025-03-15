// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_nav_interfaces:srv/GetGridmapLayer.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__BUILDER_HPP_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_nav_interfaces/srv/detail/get_gridmap_layer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_nav_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGridmapLayer_Request_layer_name
{
public:
  Init_GetGridmapLayer_Request_layer_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_nav_interfaces::srv::GetGridmapLayer_Request layer_name(::mrpt_nav_interfaces::srv::GetGridmapLayer_Request::_layer_name_type arg)
  {
    msg_.layer_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::GetGridmapLayer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::srv::GetGridmapLayer_Request>()
{
  return mrpt_nav_interfaces::srv::builder::Init_GetGridmapLayer_Request_layer_name();
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGridmapLayer_Response_grid
{
public:
  explicit Init_GetGridmapLayer_Response_grid(::mrpt_nav_interfaces::srv::GetGridmapLayer_Response & msg)
  : msg_(msg)
  {}
  ::mrpt_nav_interfaces::srv::GetGridmapLayer_Response grid(::mrpt_nav_interfaces::srv::GetGridmapLayer_Response::_grid_type arg)
  {
    msg_.grid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::GetGridmapLayer_Response msg_;
};

class Init_GetGridmapLayer_Response_valid
{
public:
  Init_GetGridmapLayer_Response_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGridmapLayer_Response_grid valid(::mrpt_nav_interfaces::srv::GetGridmapLayer_Response::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_GetGridmapLayer_Response_grid(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::GetGridmapLayer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::srv::GetGridmapLayer_Response>()
{
  return mrpt_nav_interfaces::srv::builder::Init_GetGridmapLayer_Response_valid();
}

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__BUILDER_HPP_
