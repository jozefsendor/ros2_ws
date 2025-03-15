// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_nav_interfaces:srv/MakePlanTo.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_TO__STRUCT_HPP_
#define MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_TO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__srv__MakePlanTo_Request __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__srv__MakePlanTo_Request __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MakePlanTo_Request_
{
  using Type = MakePlanTo_Request_<ContainerAllocator>;

  explicit MakePlanTo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    (void)_init;
  }

  explicit MakePlanTo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__target(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__srv__MakePlanTo_Request
    std::shared_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__srv__MakePlanTo_Request
    std::shared_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MakePlanTo_Request_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const MakePlanTo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MakePlanTo_Request_

// alias to use template instance with default allocator
using MakePlanTo_Request =
  mrpt_nav_interfaces::srv::MakePlanTo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrpt_nav_interfaces


// Include directives for member types
// Member 'waypoints'
#include "mrpt_msgs/msg/detail/waypoint_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__srv__MakePlanTo_Response __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__srv__MakePlanTo_Response __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MakePlanTo_Response_
{
  using Type = MakePlanTo_Response_<ContainerAllocator>;

  explicit MakePlanTo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid_path_found = false;
    }
  }

  explicit MakePlanTo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid_path_found = false;
    }
  }

  // field types and members
  using _valid_path_found_type =
    bool;
  _valid_path_found_type valid_path_found;
  using _waypoints_type =
    mrpt_msgs::msg::WaypointSequence_<ContainerAllocator>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__valid_path_found(
    const bool & _arg)
  {
    this->valid_path_found = _arg;
    return *this;
  }
  Type & set__waypoints(
    const mrpt_msgs::msg::WaypointSequence_<ContainerAllocator> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__srv__MakePlanTo_Response
    std::shared_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__srv__MakePlanTo_Response
    std::shared_ptr<mrpt_nav_interfaces::srv::MakePlanTo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MakePlanTo_Response_ & other) const
  {
    if (this->valid_path_found != other.valid_path_found) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const MakePlanTo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MakePlanTo_Response_

// alias to use template instance with default allocator
using MakePlanTo_Response =
  mrpt_nav_interfaces::srv::MakePlanTo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrpt_nav_interfaces

namespace mrpt_nav_interfaces
{

namespace srv
{

struct MakePlanTo
{
  using Request = mrpt_nav_interfaces::srv::MakePlanTo_Request;
  using Response = mrpt_nav_interfaces::srv::MakePlanTo_Response;
};

}  // namespace srv

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__SRV__DETAIL__MAKE_PLAN_TO__STRUCT_HPP_
