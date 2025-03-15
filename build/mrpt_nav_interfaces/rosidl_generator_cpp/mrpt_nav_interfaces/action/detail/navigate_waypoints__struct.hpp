// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_nav_interfaces:action/NavigateWaypoints.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_WAYPOINTS__STRUCT_HPP_
#define MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_WAYPOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoints'
#include "mrpt_msgs/msg/detail/waypoint_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Goal __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Goal __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateWaypoints_Goal_
{
  using Type = NavigateWaypoints_Goal_<ContainerAllocator>;

  explicit NavigateWaypoints_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_init)
  {
    (void)_init;
  }

  explicit NavigateWaypoints_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _waypoints_type =
    mrpt_msgs::msg::WaypointSequence_<ContainerAllocator>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__waypoints(
    const mrpt_msgs::msg::WaypointSequence_<ContainerAllocator> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Goal
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Goal
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateWaypoints_Goal_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateWaypoints_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateWaypoints_Goal_

// alias to use template instance with default allocator
using NavigateWaypoints_Goal =
  mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mrpt_nav_interfaces


// Include directives for member types
// Member 'state'
#include "mrpt_nav_interfaces/msg/detail/navigation_final_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Result __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Result __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateWaypoints_Result_
{
  using Type = NavigateWaypoints_Result_<ContainerAllocator>;

  explicit NavigateWaypoints_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    (void)_init;
  }

  explicit NavigateWaypoints_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _state_type =
    mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const mrpt_nav_interfaces::msg::NavigationFinalStatus_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Result
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Result
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateWaypoints_Result_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateWaypoints_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateWaypoints_Result_

// alias to use template instance with default allocator
using NavigateWaypoints_Result =
  mrpt_nav_interfaces::action::NavigateWaypoints_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mrpt_nav_interfaces


// Include directives for member types
// Member 'state'
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Feedback __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateWaypoints_Feedback_
{
  using Type = NavigateWaypoints_Feedback_<ContainerAllocator>;

  explicit NavigateWaypoints_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    (void)_init;
  }

  explicit NavigateWaypoints_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _state_type =
    mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const mrpt_nav_interfaces::msg::NavigationFeedback_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Feedback
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_Feedback
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateWaypoints_Feedback_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateWaypoints_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateWaypoints_Feedback_

// alias to use template instance with default allocator
using NavigateWaypoints_Feedback =
  mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mrpt_nav_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "mrpt_nav_interfaces/action/detail/navigate_waypoints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateWaypoints_SendGoal_Request_
{
  using Type = NavigateWaypoints_SendGoal_Request_<ContainerAllocator>;

  explicit NavigateWaypoints_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit NavigateWaypoints_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const mrpt_nav_interfaces::action::NavigateWaypoints_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Request
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateWaypoints_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateWaypoints_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateWaypoints_SendGoal_Request_

// alias to use template instance with default allocator
using NavigateWaypoints_SendGoal_Request =
  mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mrpt_nav_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateWaypoints_SendGoal_Response_
{
  using Type = NavigateWaypoints_SendGoal_Response_<ContainerAllocator>;

  explicit NavigateWaypoints_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit NavigateWaypoints_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_SendGoal_Response
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateWaypoints_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateWaypoints_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateWaypoints_SendGoal_Response_

// alias to use template instance with default allocator
using NavigateWaypoints_SendGoal_Response =
  mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mrpt_nav_interfaces

namespace mrpt_nav_interfaces
{

namespace action
{

struct NavigateWaypoints_SendGoal
{
  using Request = mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Request;
  using Response = mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal_Response;
};

}  // namespace action

}  // namespace mrpt_nav_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateWaypoints_GetResult_Request_
{
  using Type = NavigateWaypoints_GetResult_Request_<ContainerAllocator>;

  explicit NavigateWaypoints_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit NavigateWaypoints_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Request
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateWaypoints_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateWaypoints_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateWaypoints_GetResult_Request_

// alias to use template instance with default allocator
using NavigateWaypoints_GetResult_Request =
  mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mrpt_nav_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "mrpt_nav_interfaces/action/detail/navigate_waypoints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateWaypoints_GetResult_Response_
{
  using Type = NavigateWaypoints_GetResult_Response_<ContainerAllocator>;

  explicit NavigateWaypoints_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NavigateWaypoints_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const mrpt_nav_interfaces::action::NavigateWaypoints_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_GetResult_Response
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateWaypoints_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateWaypoints_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateWaypoints_GetResult_Response_

// alias to use template instance with default allocator
using NavigateWaypoints_GetResult_Response =
  mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mrpt_nav_interfaces

namespace mrpt_nav_interfaces
{

namespace action
{

struct NavigateWaypoints_GetResult
{
  using Request = mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Request;
  using Response = mrpt_nav_interfaces::action::NavigateWaypoints_GetResult_Response;
};

}  // namespace action

}  // namespace mrpt_nav_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "mrpt_nav_interfaces/action/detail/navigate_waypoints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage __declspec(deprecated)
#endif

namespace mrpt_nav_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateWaypoints_FeedbackMessage_
{
  using Type = NavigateWaypoints_FeedbackMessage_<ContainerAllocator>;

  explicit NavigateWaypoints_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit NavigateWaypoints_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const mrpt_nav_interfaces::action::NavigateWaypoints_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_nav_interfaces__action__NavigateWaypoints_FeedbackMessage
    std::shared_ptr<mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateWaypoints_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateWaypoints_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateWaypoints_FeedbackMessage_

// alias to use template instance with default allocator
using NavigateWaypoints_FeedbackMessage =
  mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mrpt_nav_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace mrpt_nav_interfaces
{

namespace action
{

struct NavigateWaypoints
{
  /// The goal message defined in the action definition.
  using Goal = mrpt_nav_interfaces::action::NavigateWaypoints_Goal;
  /// The result message defined in the action definition.
  using Result = mrpt_nav_interfaces::action::NavigateWaypoints_Result;
  /// The feedback message defined in the action definition.
  using Feedback = mrpt_nav_interfaces::action::NavigateWaypoints_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = mrpt_nav_interfaces::action::NavigateWaypoints_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = mrpt_nav_interfaces::action::NavigateWaypoints_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = mrpt_nav_interfaces::action::NavigateWaypoints_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct NavigateWaypoints NavigateWaypoints;

}  // namespace action

}  // namespace mrpt_nav_interfaces

#endif  // MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_WAYPOINTS__STRUCT_HPP_
