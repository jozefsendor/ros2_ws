// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_nav_interfaces:msg/GeoreferencingMetadata.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__BUILDER_HPP_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_nav_interfaces/msg/detail/georeferencing_metadata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_nav_interfaces
{

namespace msg
{

namespace builder
{

class Init_GeoreferencingMetadata_utm_band
{
public:
  explicit Init_GeoreferencingMetadata_utm_band(::mrpt_nav_interfaces::msg::GeoreferencingMetadata & msg)
  : msg_(msg)
  {}
  ::mrpt_nav_interfaces::msg::GeoreferencingMetadata utm_band(::mrpt_nav_interfaces::msg::GeoreferencingMetadata::_utm_band_type arg)
  {
    msg_.utm_band = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::GeoreferencingMetadata msg_;
};

class Init_GeoreferencingMetadata_utm_zone
{
public:
  explicit Init_GeoreferencingMetadata_utm_zone(::mrpt_nav_interfaces::msg::GeoreferencingMetadata & msg)
  : msg_(msg)
  {}
  Init_GeoreferencingMetadata_utm_band utm_zone(::mrpt_nav_interfaces::msg::GeoreferencingMetadata::_utm_zone_type arg)
  {
    msg_.utm_zone = std::move(arg);
    return Init_GeoreferencingMetadata_utm_band(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::GeoreferencingMetadata msg_;
};

class Init_GeoreferencingMetadata_height
{
public:
  explicit Init_GeoreferencingMetadata_height(::mrpt_nav_interfaces::msg::GeoreferencingMetadata & msg)
  : msg_(msg)
  {}
  Init_GeoreferencingMetadata_utm_zone height(::mrpt_nav_interfaces::msg::GeoreferencingMetadata::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_GeoreferencingMetadata_utm_zone(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::GeoreferencingMetadata msg_;
};

class Init_GeoreferencingMetadata_longitude
{
public:
  explicit Init_GeoreferencingMetadata_longitude(::mrpt_nav_interfaces::msg::GeoreferencingMetadata & msg)
  : msg_(msg)
  {}
  Init_GeoreferencingMetadata_height longitude(::mrpt_nav_interfaces::msg::GeoreferencingMetadata::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GeoreferencingMetadata_height(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::GeoreferencingMetadata msg_;
};

class Init_GeoreferencingMetadata_latitude
{
public:
  explicit Init_GeoreferencingMetadata_latitude(::mrpt_nav_interfaces::msg::GeoreferencingMetadata & msg)
  : msg_(msg)
  {}
  Init_GeoreferencingMetadata_longitude latitude(::mrpt_nav_interfaces::msg::GeoreferencingMetadata::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GeoreferencingMetadata_longitude(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::GeoreferencingMetadata msg_;
};

class Init_GeoreferencingMetadata_t_enu_to_utm
{
public:
  explicit Init_GeoreferencingMetadata_t_enu_to_utm(::mrpt_nav_interfaces::msg::GeoreferencingMetadata & msg)
  : msg_(msg)
  {}
  Init_GeoreferencingMetadata_latitude t_enu_to_utm(::mrpt_nav_interfaces::msg::GeoreferencingMetadata::_t_enu_to_utm_type arg)
  {
    msg_.t_enu_to_utm = std::move(arg);
    return Init_GeoreferencingMetadata_latitude(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::GeoreferencingMetadata msg_;
};

class Init_GeoreferencingMetadata_t_enu_to_map
{
public:
  explicit Init_GeoreferencingMetadata_t_enu_to_map(::mrpt_nav_interfaces::msg::GeoreferencingMetadata & msg)
  : msg_(msg)
  {}
  Init_GeoreferencingMetadata_t_enu_to_utm t_enu_to_map(::mrpt_nav_interfaces::msg::GeoreferencingMetadata::_t_enu_to_map_type arg)
  {
    msg_.t_enu_to_map = std::move(arg);
    return Init_GeoreferencingMetadata_t_enu_to_utm(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::GeoreferencingMetadata msg_;
};

class Init_GeoreferencingMetadata_valid
{
public:
  Init_GeoreferencingMetadata_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoreferencingMetadata_t_enu_to_map valid(::mrpt_nav_interfaces::msg::GeoreferencingMetadata::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_GeoreferencingMetadata_t_enu_to_map(msg_);
  }

private:
  ::mrpt_nav_interfaces::msg::GeoreferencingMetadata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_nav_interfaces::msg::GeoreferencingMetadata>()
{
  return mrpt_nav_interfaces::msg::builder::Init_GeoreferencingMetadata_valid();
}

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__BUILDER_HPP_
