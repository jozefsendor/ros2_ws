// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_nav_interfaces:msg/NavigationFinalStatus.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__STRUCT_HPP_
#define MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__msg__NavigationFinalStatus __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__msg__NavigationFinalStatus __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationFinalStatus_
{
  using Type = NavigationFinalStatus_<ContainerAllocator>;

  explicit NavigationFinalStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->navigation_status = 0;
    }
  }

  explicit NavigationFinalStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->navigation_status = 0;
    }
  }

  // field types and members
  using _navigation_status_type =
    int8_t;
  _navigation_status_type navigation_status;

  // setters for named parameter idiom
  Type & set__navigation_status(
    const int8_t & _arg)
  {
    this->navigation_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t STATUS_SUCCESS =
    0;
  static constexpr int8_t STATUS_ERROR =
    1;
  static constexpr int8_t STATUS_CANCELLED =
    2;

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__msg__NavigationFinalStatus
    std::shared_ptr<mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__msg__NavigationFinalStatus
    std::shared_ptr<mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationFinalStatus_ & other) const
  {
    if (this->navigation_status != other.navigation_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationFinalStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationFinalStatus_

// alias to use template instance with default allocator
using NavigationFinalStatus =
  mrpt_nav_interfaces::msg::NavigationFinalStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFinalStatus_<ContainerAllocator>::STATUS_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFinalStatus_<ContainerAllocator>::STATUS_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationFinalStatus_<ContainerAllocator>::STATUS_CANCELLED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__MSG__DETAIL__NAVIGATION_FINAL_STATUS__STRUCT_HPP_
