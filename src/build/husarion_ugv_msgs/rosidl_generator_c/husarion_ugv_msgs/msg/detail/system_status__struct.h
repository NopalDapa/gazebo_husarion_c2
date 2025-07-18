// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from husarion_ugv_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "husarion_ugv_msgs/msg/system_status.h"


#ifndef HUSARION_UGV_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define HUSARION_UGV_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'cpu_percent'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SystemStatus in the package husarion_ugv_msgs.
typedef struct husarion_ugv_msgs__msg__SystemStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence cpu_percent;
  float cpu_temp;
  float avg_load_percent;
  float ram_usage_percent;
  float disc_usage_percent;
} husarion_ugv_msgs__msg__SystemStatus;

// Struct for a sequence of husarion_ugv_msgs__msg__SystemStatus.
typedef struct husarion_ugv_msgs__msg__SystemStatus__Sequence
{
  husarion_ugv_msgs__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} husarion_ugv_msgs__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUSARION_UGV_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
