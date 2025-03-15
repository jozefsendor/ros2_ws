// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/GenericObject.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__GenericObject __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__GenericObject __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GenericObject_
{
  using Type = GenericObject_<ContainerAllocator>;

  explicit GenericObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GenericObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::GenericObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::GenericObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::GenericObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::GenericObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::GenericObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::GenericObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::GenericObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::GenericObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::GenericObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::GenericObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__GenericObject
    std::shared_ptr<mrpt_msgs::msg::GenericObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__GenericObject
    std::shared_ptr<mrpt_msgs::msg::GenericObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenericObject_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenericObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenericObject_

// alias to use template instance with default allocator
using GenericObject =
  mrpt_msgs::msg::GenericObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GENERIC_OBJECT__STRUCT_HPP_
