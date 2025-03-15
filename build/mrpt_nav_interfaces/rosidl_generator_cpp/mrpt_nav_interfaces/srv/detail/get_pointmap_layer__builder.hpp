// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_nav_interfaces:srv/GetPointmapLayer.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__GET_POINTMAP_LAYER__BUILDER_HPP_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__GET_POINTMAP_LAYER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_nav_interfaces/srv/detail/get_pointmap_layer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_nav_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPointmapLayer_Request_layer_name
{
public:
  Init_GetPointmapLayer_Request_layer_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_nav_interfaces::srv::GetPointmapLayer_Request layer_name(::mrpt_nav_interfaces::srv::GetPointmapLayer_Request::_layer_name_type arg)
  {
    msg_.layer_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::GetPointmapLayer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::srv::GetPointmapLayer_Request>()
{
  return mrpt_nav_interfaces::srv::builder::Init_GetPointmapLayer_Request_layer_name();
}

}  // namespace mrpt_nav_interfaces


namespace mrpt_nav_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPointmapLayer_Response_points
{
public:
  explicit Init_GetPointmapLayer_Response_points(::mrpt_nav_interfaces::srv::GetPointmapLayer_Response & msg)
  : msg_(msg)
  {}
  ::mrpt_nav_interfaces::srv::GetPointmapLayer_Response points(::mrpt_nav_interfaces::srv::GetPointmapLayer_Response::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::GetPointmapLayer_Response msg_;
};

class Init_GetPointmapLayer_Response_valid
{
public:
  Init_GetPointmapLayer_Response_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPointmapLayer_Response_points valid(::mrpt_nav_interfaces::srv::GetPointmapLayer_Response::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_GetPointmapLayer_Response_points(msg_);
  }

private:
  ::mrpt_nav_interfaces::srv::GetPointmapLayer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::srv::GetPointmapLayer_Response>()
{
  return mrpt_nav_interfaces::srv::builder::Init_GetPointmapLayer_Response_valid();
}

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__GET_POINTMAP_LAYER__BUILDER_HPP_
