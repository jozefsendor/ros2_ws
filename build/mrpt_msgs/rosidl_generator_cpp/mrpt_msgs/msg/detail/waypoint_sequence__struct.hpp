// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/WaypointSequence.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'waypoints'
#include "mrpt_msgs/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__WaypointSequence __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__WaypointSequence __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointSequence_
{
  using Type = WaypointSequence_<ContainerAllocator>;

  explicit WaypointSequence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit WaypointSequence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _waypoints_type =
    std::vector<mrpt_msgs::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrpt_msgs::msg::Waypoint_<ContainerAllocator>>>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<mrpt_msgs::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrpt_msgs::msg::Waypoint_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::WaypointSequence_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::WaypointSequence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::WaypointSequence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::WaypointSequence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::WaypointSequence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::WaypointSequence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::WaypointSequence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::WaypointSequence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::WaypointSequence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::WaypointSequence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__WaypointSequence
    std::shared_ptr<mrpt_msgs::msg::WaypointSequence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__WaypointSequence
    std::shared_ptr<mrpt_msgs::msg::WaypointSequence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointSequence_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointSequence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointSequence_

// alias to use template instance with default allocator
using WaypointSequence =
  mrpt_msgs::msg::WaypointSequence_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__WAYPOINT_SEQUENCE__STRUCT_HPP_
