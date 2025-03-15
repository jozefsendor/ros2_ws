// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__Waypoint __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__Waypoint __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Waypoint_
{
  using Type = Waypoint_<ContainerAllocator>;

  explicit Waypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ignore_heading = false;
      this->allow_skip = false;
      this->allowed_distance = 0.0;
      this->speed_ratio = 0.0;
    }
  }

  explicit Waypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ignore_heading = false;
      this->allow_skip = false;
      this->allowed_distance = 0.0;
      this->speed_ratio = 0.0;
    }
  }

  // field types and members
  using _target_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _target_type target;
  using _ignore_heading_type =
    bool;
  _ignore_heading_type ignore_heading;
  using _allow_skip_type =
    bool;
  _allow_skip_type allow_skip;
  using _allowed_distance_type =
    double;
  _allowed_distance_type allowed_distance;
  using _speed_ratio_type =
    double;
  _speed_ratio_type speed_ratio;

  // setters for named parameter idiom
  Type & set__target(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__ignore_heading(
    const bool & _arg)
  {
    this->ignore_heading = _arg;
    return *this;
  }
  Type & set__allow_skip(
    const bool & _arg)
  {
    this->allow_skip = _arg;
    return *this;
  }
  Type & set__allowed_distance(
    const double & _arg)
  {
    this->allowed_distance = _arg;
    return *this;
  }
  Type & set__speed_ratio(
    const double & _arg)
  {
    this->speed_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::Waypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::Waypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::Waypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::Waypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::Waypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::Waypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::Waypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::Waypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__Waypoint
    std::shared_ptr<mrpt_msgs::msg::Waypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__Waypoint
    std::shared_ptr<mrpt_msgs::msg::Waypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoint_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    if (this->ignore_heading != other.ignore_heading) {
      return false;
    }
    if (this->allow_skip != other.allow_skip) {
      return false;
    }
    if (this->allowed_distance != other.allowed_distance) {
      return false;
    }
    if (this->speed_ratio != other.speed_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoint_

// alias to use template instance with default allocator
using Waypoint =
  mrpt_msgs::msg::Waypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
