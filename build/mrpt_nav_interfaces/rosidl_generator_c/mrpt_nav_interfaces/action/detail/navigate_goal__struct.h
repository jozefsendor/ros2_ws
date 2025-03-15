// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_nav_interfaces:action/NavigateGoal.idl
// generated code does not contain a copyright notice

#ifndef MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_GOAL__STRUCT_H_
#define MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/NavigateGoal in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_Goal
{
  geometry_msgs__msg__PoseStamped target;
} mrpt_nav_interfaces__action__NavigateGoal_Goal;

// Struct for a sequence of mrpt_nav_interfaces__action__NavigateGoal_Goal.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence
{
  mrpt_nav_interfaces__action__NavigateGoal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__action__NavigateGoal_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "mrpt_nav_interfaces/msg/detail/navigation_final_status__struct.h"

/// Struct defined in action/NavigateGoal in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_Result
{
  mrpt_nav_interfaces__msg__NavigationFinalStatus state;
} mrpt_nav_interfaces__action__NavigateGoal_Result;

// Struct for a sequence of mrpt_nav_interfaces__action__NavigateGoal_Result.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence
{
  mrpt_nav_interfaces__action__NavigateGoal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__action__NavigateGoal_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "mrpt_nav_interfaces/msg/detail/navigation_feedback__struct.h"

/// Struct defined in action/NavigateGoal in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_Feedback
{
  mrpt_nav_interfaces__msg__NavigationFeedback state;
} mrpt_nav_interfaces__action__NavigateGoal_Feedback;

// Struct for a sequence of mrpt_nav_interfaces__action__NavigateGoal_Feedback.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence
{
  mrpt_nav_interfaces__action__NavigateGoal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__action__NavigateGoal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mrpt_nav_interfaces/action/detail/navigate_goal__struct.h"

/// Struct defined in action/NavigateGoal in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mrpt_nav_interfaces__action__NavigateGoal_Goal goal;
} mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request;

// Struct for a sequence of mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence
{
  mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigateGoal in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response;

// Struct for a sequence of mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence
{
  mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__action__NavigateGoal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigateGoal in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request;

// Struct for a sequence of mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence
{
  mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__action__NavigateGoal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mrpt_nav_interfaces/action/detail/navigate_goal__struct.h"

/// Struct defined in action/NavigateGoal in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response
{
  int8_t status;
  mrpt_nav_interfaces__action__NavigateGoal_Result result;
} mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response;

// Struct for a sequence of mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence
{
  mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__action__NavigateGoal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mrpt_nav_interfaces/action/detail/navigate_goal__struct.h"

/// Struct defined in action/NavigateGoal in the package mrpt_nav_interfaces.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mrpt_nav_interfaces__action__NavigateGoal_Feedback feedback;
} mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage;

// Struct for a sequence of mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage.
typedef struct mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence
{
  mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_nav_interfaces__action__NavigateGoal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_NAV_INTERFACES__ACTION__DETAIL__NAVIGATE_GOAL__STRUCT_H_
