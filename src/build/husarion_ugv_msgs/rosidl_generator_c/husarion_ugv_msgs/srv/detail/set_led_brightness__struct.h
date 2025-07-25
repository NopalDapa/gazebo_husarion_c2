// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from husarion_ugv_msgs:srv/SetLEDBrightness.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "husarion_ugv_msgs/srv/set_led_brightness.h"


#ifndef HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_BRIGHTNESS__STRUCT_H_
#define HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_BRIGHTNESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetLEDBrightness in the package husarion_ugv_msgs.
typedef struct husarion_ugv_msgs__srv__SetLEDBrightness_Request
{
  float data;
} husarion_ugv_msgs__srv__SetLEDBrightness_Request;

// Struct for a sequence of husarion_ugv_msgs__srv__SetLEDBrightness_Request.
typedef struct husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence
{
  husarion_ugv_msgs__srv__SetLEDBrightness_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLEDBrightness in the package husarion_ugv_msgs.
typedef struct husarion_ugv_msgs__srv__SetLEDBrightness_Response
{
  bool success;
  rosidl_runtime_c__String message;
} husarion_ugv_msgs__srv__SetLEDBrightness_Response;

// Struct for a sequence of husarion_ugv_msgs__srv__SetLEDBrightness_Response.
typedef struct husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence
{
  husarion_ugv_msgs__srv__SetLEDBrightness_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  husarion_ugv_msgs__srv__SetLEDBrightness_Event__request__MAX_SIZE = 1
};
// response
enum
{
  husarion_ugv_msgs__srv__SetLEDBrightness_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetLEDBrightness in the package husarion_ugv_msgs.
typedef struct husarion_ugv_msgs__srv__SetLEDBrightness_Event
{
  service_msgs__msg__ServiceEventInfo info;
  husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence request;
  husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence response;
} husarion_ugv_msgs__srv__SetLEDBrightness_Event;

// Struct for a sequence of husarion_ugv_msgs__srv__SetLEDBrightness_Event.
typedef struct husarion_ugv_msgs__srv__SetLEDBrightness_Event__Sequence
{
  husarion_ugv_msgs__srv__SetLEDBrightness_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} husarion_ugv_msgs__srv__SetLEDBrightness_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_BRIGHTNESS__STRUCT_H_
