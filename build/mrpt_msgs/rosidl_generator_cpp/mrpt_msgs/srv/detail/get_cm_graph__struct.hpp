// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:srv/GetCMGraph.idl
// generated code does not contain a copyright notice

#ifndef MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__STRUCT_HPP_
#define MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__srv__GetCMGraph_Request __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__srv__GetCMGraph_Request __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCMGraph_Request_
{
  using Type = GetCMGraph_Request_<ContainerAllocator>;

  explicit GetCMGraph_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetCMGraph_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _node_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _node_ids_type node_ids;

  // setters for named parameter idiom
  Type & set__node_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->node_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__srv__GetCMGraph_Request
    std::shared_ptr<mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__srv__GetCMGraph_Request
    std::shared_ptr<mrpt_msgs::srv::GetCMGraph_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCMGraph_Request_ & other) const
  {
    if (this->node_ids != other.node_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCMGraph_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCMGraph_Request_

// alias to use template instance with default allocator
using GetCMGraph_Request =
  mrpt_msgs::srv::GetCMGraph_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrpt_msgs


// Include directives for member types
// Member 'cm_graph'
#include "mrpt_msgs/msg/detail/network_of_poses__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__srv__GetCMGraph_Response __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__srv__GetCMGraph_Response __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCMGraph_Response_
{
  using Type = GetCMGraph_Response_<ContainerAllocator>;

  explicit GetCMGraph_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cm_graph(_init)
  {
    (void)_init;
  }

  explicit GetCMGraph_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cm_graph(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cm_graph_type =
    mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator>;
  _cm_graph_type cm_graph;

  // setters for named parameter idiom
  Type & set__cm_graph(
    const mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator> & _arg)
  {
    this->cm_graph = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__srv__GetCMGraph_Response
    std::shared_ptr<mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__srv__GetCMGraph_Response
    std::shared_ptr<mrpt_msgs::srv::GetCMGraph_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCMGraph_Response_ & other) const
  {
    if (this->cm_graph != other.cm_graph) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCMGraph_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCMGraph_Response_

// alias to use template instance with default allocator
using GetCMGraph_Response =
  mrpt_msgs::srv::GetCMGraph_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mrpt_msgs

namespace mrpt_msgs
{

namespace srv
{

struct GetCMGraph
{
  using Request = mrpt_msgs::srv::GetCMGraph_Request;
  using Response = mrpt_msgs::srv::GetCMGraph_Response;
};

}  // namespace srv

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__STRUCT_HPP_
