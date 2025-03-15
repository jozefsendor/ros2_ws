// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_nav_interfaces:srv/GetLayers.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__STRUCT_HPP_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__srv__GetLayers_Request __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__srv__GetLayers_Request __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLayers_Request_
{
  using Type = GetLayers_Request_<ContainerAllocator>;

  explicit GetLayers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetLayers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__srv__GetLayers_Request
    std::shared_ptr<mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__srv__GetLayers_Request
    std::shared_ptr<mrpt_nav_interfaces::srv::GetLayers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLayers_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLayers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLayers_Request_

// alias to use template instance with default allocator
using GetLayers_Request =
  mrpt_nav_interfaces::srv::GetLayers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrpt_nav_interfaces


#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__srv__GetLayers_Response __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__srv__GetLayers_Response __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLayers_Response_
{
  using Type = GetLayers_Response_<ContainerAllocator>;

  explicit GetLayers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetLayers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _layers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _layers_type layers;

  // setters for named parameter idiom
  Type & set__layers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->layers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__srv__GetLayers_Response
    std::shared_ptr<mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__srv__GetLayers_Response
    std::shared_ptr<mrpt_nav_interfaces::srv::GetLayers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLayers_Response_ & other) const
  {
    if (this->layers != other.layers) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLayers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLayers_Response_

// alias to use template instance with default allocator
using GetLayers_Response =
  mrpt_nav_interfaces::srv::GetLayers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrpt_nav_interfaces

namespace mrpt_nav_interfaces
{

namespace srv
{

struct GetLayers
{
  using Request = mrpt_nav_interfaces::srv::GetLayers_Request;
  using Response = mrpt_nav_interfaces::srv::GetLayers_Response;
};

}  // namespace srv

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__GET_LAYERS__STRUCT_HPP_
