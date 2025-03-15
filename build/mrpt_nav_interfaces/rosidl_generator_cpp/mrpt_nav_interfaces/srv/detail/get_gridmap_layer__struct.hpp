// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_nav_interfaces:srv/GetGridmapLayer.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__STRUCT_HPP_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__srv__GetGridmapLayer_Request __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__srv__GetGridmapLayer_Request __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGridmapLayer_Request_
{
  using Type = GetGridmapLayer_Request_<ContainerAllocator>;

  explicit GetGridmapLayer_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->layer_name = "";
    }
  }

  explicit GetGridmapLayer_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : layer_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->layer_name = "";
    }
  }

  // field types and members
  using _layer_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _layer_name_type layer_name;

  // setters for named parameter idiom
  Type & set__layer_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->layer_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__srv__GetGridmapLayer_Request
    std::shared_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__srv__GetGridmapLayer_Request
    std::shared_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGridmapLayer_Request_ & other) const
  {
    if (this->layer_name != other.layer_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGridmapLayer_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGridmapLayer_Request_

// alias to use template instance with default allocator
using GetGridmapLayer_Request =
  mrpt_nav_interfaces::srv::GetGridmapLayer_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrpt_nav_interfaces


// Include directives for member types
// Member 'grid'
#include "nav_msgs/msg/detail/occupancy_grid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__srv__GetGridmapLayer_Response __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__srv__GetGridmapLayer_Response __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGridmapLayer_Response_
{
  using Type = GetGridmapLayer_Response_<ContainerAllocator>;

  explicit GetGridmapLayer_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grid(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
    }
  }

  explicit GetGridmapLayer_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grid(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
    }
  }

  // field types and members
  using _valid_type =
    bool;
  _valid_type valid;
  using _grid_type =
    nav_msgs::msg::OccupancyGrid_<ContainerAllocator>;
  _grid_type grid;

  // setters for named parameter idiom
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__grid(
    const nav_msgs::msg::OccupancyGrid_<ContainerAllocator> & _arg)
  {
    this->grid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__srv__GetGridmapLayer_Response
    std::shared_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__srv__GetGridmapLayer_Response
    std::shared_ptr<mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGridmapLayer_Response_ & other) const
  {
    if (this->valid != other.valid) {
      return false;
    }
    if (this->grid != other.grid) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGridmapLayer_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGridmapLayer_Response_

// alias to use template instance with default allocator
using GetGridmapLayer_Response =
  mrpt_nav_interfaces::srv::GetGridmapLayer_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrpt_nav_interfaces

namespace mrpt_nav_interfaces
{

namespace srv
{

struct GetGridmapLayer
{
  using Request = mrpt_nav_interfaces::srv::GetGridmapLayer_Request;
  using Response = mrpt_nav_interfaces::srv::GetGridmapLayer_Response;
};

}  // namespace srv

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__GET_GRIDMAP_LAYER__STRUCT_HPP_
