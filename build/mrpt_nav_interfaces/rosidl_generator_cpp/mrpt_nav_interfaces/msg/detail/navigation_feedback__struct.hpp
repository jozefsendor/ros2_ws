// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_nav_interfaces:msg/NavigationFeedback.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__STRUCT_HPP_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__msg__NavigationFeedback __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__msg__NavigationFeedback __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationFeedback_
{
  using Type = NavigationFeedback_<ContainerAllocator>;

  explicit NavigationFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_waypoints = 0;
      this->reached_waypoints = 0;
    }
  }

  explicit NavigationFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_waypoints = 0;
      this->reached_waypoints = 0;
    }
  }

  // field types and members
  using _total_waypoints_type =
    int16_t;
  _total_waypoints_type total_waypoints;
  using _reached_waypoints_type =
    int16_t;
  _reached_waypoints_type reached_waypoints;

  // setters for named parameter idiom
  Type & set__total_waypoints(
    const int16_t & _arg)
  {
    this->total_waypoints = _arg;
    return *this;
  }
  Type & set__reached_waypoints(
    const int16_t & _arg)
  {
    this->reached_waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__msg__NavigationFeedback
    std::shared_ptr<mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__msg__NavigationFeedback
    std::shared_ptr<mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationFeedback_ & other) const
  {
    if (this->total_waypoints != other.total_waypoints) {
      return false;
    }
    if (this->reached_waypoints != other.reached_waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationFeedback_

// alias to use template instance with default allocator
using NavigationFeedback =
  mrpt_nav_interfaces::msg::NavigationFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FEEDBACK__STRUCT_HPP_
