// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_nav_interfaces:msg/GeoreferencingMetadata.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__STRUCT_HPP_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 't_enu_to_map'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 't_enu_to_utm'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__msg__GeoreferencingMetadata __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__msg__GeoreferencingMetadata __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeoreferencingMetadata_
{
  using Type = GeoreferencingMetadata_<ContainerAllocator>;

  explicit GeoreferencingMetadata_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t_enu_to_map(_init),
    t_enu_to_utm(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->utm_zone = 0l;
      this->utm_band = "";
    }
  }

  explicit GeoreferencingMetadata_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t_enu_to_map(_alloc, _init),
    t_enu_to_utm(_alloc, _init),
    utm_band(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->utm_zone = 0l;
      this->utm_band = "";
    }
  }

  // field types and members
  using _valid_type =
    bool;
  _valid_type valid;
  using _t_enu_to_map_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _t_enu_to_map_type t_enu_to_map;
  using _t_enu_to_utm_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _t_enu_to_utm_type t_enu_to_utm;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _height_type =
    double;
  _height_type height;
  using _utm_zone_type =
    int32_t;
  _utm_zone_type utm_zone;
  using _utm_band_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _utm_band_type utm_band;

  // setters for named parameter idiom
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__t_enu_to_map(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->t_enu_to_map = _arg;
    return *this;
  }
  Type & set__t_enu_to_utm(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->t_enu_to_utm = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__utm_zone(
    const int32_t & _arg)
  {
    this->utm_zone = _arg;
    return *this;
  }
  Type & set__utm_band(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->utm_band = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__msg__GeoreferencingMetadata
    std::shared_ptr<mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__msg__GeoreferencingMetadata
    std::shared_ptr<mrpt_nav_interfaces::msg::GeoreferencingMetadata_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeoreferencingMetadata_ & other) const
  {
    if (this->valid != other.valid) {
      return false;
    }
    if (this->t_enu_to_map != other.t_enu_to_map) {
      return false;
    }
    if (this->t_enu_to_utm != other.t_enu_to_utm) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->utm_zone != other.utm_zone) {
      return false;
    }
    if (this->utm_band != other.utm_band) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeoreferencingMetadata_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeoreferencingMetadata_

// alias to use template instance with default allocator
using GeoreferencingMetadata =
  mrpt_nav_interfaces::msg::GeoreferencingMetadata_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__GEOREFERENCING_METADATA__STRUCT_HPP_
