// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from husarion_ugv_msgs:srv/SetLEDBrightness.idl
// generated code does not contain a copyright notice
#include "husarion_ugv_msgs/srv/detail/set_led_brightness__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "husarion_ugv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "husarion_ugv_msgs/srv/detail/set_led_brightness__struct.h"
#include "husarion_ugv_msgs/srv/detail/set_led_brightness__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetLEDBrightness_Request__ros_msg_type = husarion_ugv_msgs__srv__SetLEDBrightness_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
bool cdr_serialize_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: data
  {
    cdr << ros_message->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
bool cdr_deserialize_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  eprosima::fastcdr::Cdr & cdr,
  husarion_ugv_msgs__srv__SetLEDBrightness_Request * ros_message)
{
  // Field name: data
  {
    cdr >> ros_message->data;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t get_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLEDBrightness_Request__ros_msg_type * ros_message = static_cast<const _SetLEDBrightness_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: data
  {
    size_t item_size = sizeof(ros_message->data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t max_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: data
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = husarion_ugv_msgs__srv__SetLEDBrightness_Request;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
bool cdr_serialize_key_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: data
  {
    cdr << ros_message->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t get_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLEDBrightness_Request__ros_msg_type * ros_message = static_cast<const _SetLEDBrightness_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: data
  {
    size_t item_size = sizeof(ros_message->data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t max_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: data
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = husarion_ugv_msgs__srv__SetLEDBrightness_Request;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetLEDBrightness_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const husarion_ugv_msgs__srv__SetLEDBrightness_Request * ros_message = static_cast<const husarion_ugv_msgs__srv__SetLEDBrightness_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_husarion_ugv_msgs__srv__SetLEDBrightness_Request(ros_message, cdr);
}

static bool _SetLEDBrightness_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  husarion_ugv_msgs__srv__SetLEDBrightness_Request * ros_message = static_cast<husarion_ugv_msgs__srv__SetLEDBrightness_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_husarion_ugv_msgs__srv__SetLEDBrightness_Request(cdr, ros_message);
}

static uint32_t _SetLEDBrightness_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
      untyped_ros_message, 0));
}

static size_t _SetLEDBrightness_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetLEDBrightness_Request = {
  "husarion_ugv_msgs::srv",
  "SetLEDBrightness_Request",
  _SetLEDBrightness_Request__cdr_serialize,
  _SetLEDBrightness_Request__cdr_deserialize,
  _SetLEDBrightness_Request__get_serialized_size,
  _SetLEDBrightness_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetLEDBrightness_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLEDBrightness_Request,
  get_message_typesupport_handle_function,
  &husarion_ugv_msgs__srv__SetLEDBrightness_Request__get_type_hash,
  &husarion_ugv_msgs__srv__SetLEDBrightness_Request__get_type_description,
  &husarion_ugv_msgs__srv__SetLEDBrightness_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDBrightness_Request)() {
  return &_SetLEDBrightness_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "husarion_ugv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/set_led_brightness__struct.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/set_led_brightness__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _SetLEDBrightness_Response__ros_msg_type = husarion_ugv_msgs__srv__SetLEDBrightness_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
bool cdr_serialize_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
bool cdr_deserialize_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  eprosima::fastcdr::Cdr & cdr,
  husarion_ugv_msgs__srv__SetLEDBrightness_Response * ros_message)
{
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t get_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLEDBrightness_Response__ros_msg_type * ros_message = static_cast<const _SetLEDBrightness_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t max_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = husarion_ugv_msgs__srv__SetLEDBrightness_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
bool cdr_serialize_key_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t get_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLEDBrightness_Response__ros_msg_type * ros_message = static_cast<const _SetLEDBrightness_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t max_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = husarion_ugv_msgs__srv__SetLEDBrightness_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetLEDBrightness_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const husarion_ugv_msgs__srv__SetLEDBrightness_Response * ros_message = static_cast<const husarion_ugv_msgs__srv__SetLEDBrightness_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_husarion_ugv_msgs__srv__SetLEDBrightness_Response(ros_message, cdr);
}

static bool _SetLEDBrightness_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  husarion_ugv_msgs__srv__SetLEDBrightness_Response * ros_message = static_cast<husarion_ugv_msgs__srv__SetLEDBrightness_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_husarion_ugv_msgs__srv__SetLEDBrightness_Response(cdr, ros_message);
}

static uint32_t _SetLEDBrightness_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
      untyped_ros_message, 0));
}

static size_t _SetLEDBrightness_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetLEDBrightness_Response = {
  "husarion_ugv_msgs::srv",
  "SetLEDBrightness_Response",
  _SetLEDBrightness_Response__cdr_serialize,
  _SetLEDBrightness_Response__cdr_deserialize,
  _SetLEDBrightness_Response__get_serialized_size,
  _SetLEDBrightness_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetLEDBrightness_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLEDBrightness_Response,
  get_message_typesupport_handle_function,
  &husarion_ugv_msgs__srv__SetLEDBrightness_Response__get_type_hash,
  &husarion_ugv_msgs__srv__SetLEDBrightness_Response__get_type_description,
  &husarion_ugv_msgs__srv__SetLEDBrightness_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDBrightness_Response)() {
  return &_SetLEDBrightness_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "husarion_ugv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/set_led_brightness__struct.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/set_led_brightness__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  eprosima::fastcdr::Cdr & cdr,
  husarion_ugv_msgs__srv__SetLEDBrightness_Request * ros_message);

size_t get_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDBrightness_Request)();

bool cdr_serialize_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  eprosima::fastcdr::Cdr & cdr,
  husarion_ugv_msgs__srv__SetLEDBrightness_Response * ros_message);

size_t get_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDBrightness_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_husarion_ugv_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_husarion_ugv_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_husarion_ugv_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_husarion_ugv_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_husarion_ugv_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_husarion_ugv_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_husarion_ugv_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_husarion_ugv_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _SetLEDBrightness_Event__ros_msg_type = husarion_ugv_msgs__srv__SetLEDBrightness_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
bool cdr_serialize_husarion_ugv_msgs__srv__SetLEDBrightness_Event(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
bool cdr_deserialize_husarion_ugv_msgs__srv__SetLEDBrightness_Event(
  eprosima::fastcdr::Cdr & cdr,
  husarion_ugv_msgs__srv__SetLEDBrightness_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence__fini(&ros_message->request);
    }
    if (!husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_husarion_ugv_msgs__srv__SetLEDBrightness_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence__fini(&ros_message->response);
    }
    if (!husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_husarion_ugv_msgs__srv__SetLEDBrightness_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t get_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLEDBrightness_Event__ros_msg_type * ros_message = static_cast<const _SetLEDBrightness_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t max_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = husarion_ugv_msgs__srv__SetLEDBrightness_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
bool cdr_serialize_key_husarion_ugv_msgs__srv__SetLEDBrightness_Event(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t get_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLEDBrightness_Event__ros_msg_type * ros_message = static_cast<const _SetLEDBrightness_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t max_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_husarion_ugv_msgs__srv__SetLEDBrightness_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = husarion_ugv_msgs__srv__SetLEDBrightness_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetLEDBrightness_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const husarion_ugv_msgs__srv__SetLEDBrightness_Event * ros_message = static_cast<const husarion_ugv_msgs__srv__SetLEDBrightness_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_husarion_ugv_msgs__srv__SetLEDBrightness_Event(ros_message, cdr);
}

static bool _SetLEDBrightness_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  husarion_ugv_msgs__srv__SetLEDBrightness_Event * ros_message = static_cast<husarion_ugv_msgs__srv__SetLEDBrightness_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_husarion_ugv_msgs__srv__SetLEDBrightness_Event(cdr, ros_message);
}

static uint32_t _SetLEDBrightness_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Event(
      untyped_ros_message, 0));
}

static size_t _SetLEDBrightness_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_husarion_ugv_msgs__srv__SetLEDBrightness_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetLEDBrightness_Event = {
  "husarion_ugv_msgs::srv",
  "SetLEDBrightness_Event",
  _SetLEDBrightness_Event__cdr_serialize,
  _SetLEDBrightness_Event__cdr_deserialize,
  _SetLEDBrightness_Event__get_serialized_size,
  _SetLEDBrightness_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetLEDBrightness_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLEDBrightness_Event,
  get_message_typesupport_handle_function,
  &husarion_ugv_msgs__srv__SetLEDBrightness_Event__get_type_hash,
  &husarion_ugv_msgs__srv__SetLEDBrightness_Event__get_type_description,
  &husarion_ugv_msgs__srv__SetLEDBrightness_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDBrightness_Event)() {
  return &_SetLEDBrightness_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "husarion_ugv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "husarion_ugv_msgs/srv/set_led_brightness.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetLEDBrightness__callbacks = {
  "husarion_ugv_msgs::srv",
  "SetLEDBrightness",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDBrightness_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDBrightness_Response)(),
};

static rosidl_service_type_support_t SetLEDBrightness__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetLEDBrightness__callbacks,
  get_service_typesupport_handle_function,
  &_SetLEDBrightness_Request__type_support,
  &_SetLEDBrightness_Response__type_support,
  &_SetLEDBrightness_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    husarion_ugv_msgs,
    srv,
    SetLEDBrightness
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    husarion_ugv_msgs,
    srv,
    SetLEDBrightness
  ),
  &husarion_ugv_msgs__srv__SetLEDBrightness__get_type_hash,
  &husarion_ugv_msgs__srv__SetLEDBrightness__get_type_description,
  &husarion_ugv_msgs__srv__SetLEDBrightness__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDBrightness)() {
  return &SetLEDBrightness__handle;
}

#if defined(__cplusplus)
}
#endif
