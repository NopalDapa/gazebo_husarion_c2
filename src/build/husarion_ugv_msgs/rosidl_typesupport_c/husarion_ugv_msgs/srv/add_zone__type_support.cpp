// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from husarion_ugv_msgs:srv/AddZone.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "husarion_ugv_msgs/srv/detail/add_zone__struct.h"
#include "husarion_ugv_msgs/srv/detail/add_zone__type_support.h"
#include "husarion_ugv_msgs/srv/detail/add_zone__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace husarion_ugv_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddZone_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddZone_Request_type_support_ids_t;

static const _AddZone_Request_type_support_ids_t _AddZone_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddZone_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddZone_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddZone_Request_type_support_symbol_names_t _AddZone_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, AddZone_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, husarion_ugv_msgs, srv, AddZone_Request)),
  }
};

typedef struct _AddZone_Request_type_support_data_t
{
  void * data[2];
} _AddZone_Request_type_support_data_t;

static _AddZone_Request_type_support_data_t _AddZone_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddZone_Request_message_typesupport_map = {
  2,
  "husarion_ugv_msgs",
  &_AddZone_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AddZone_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AddZone_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddZone_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddZone_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &husarion_ugv_msgs__srv__AddZone_Request__get_type_hash,
  &husarion_ugv_msgs__srv__AddZone_Request__get_type_description,
  &husarion_ugv_msgs__srv__AddZone_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace husarion_ugv_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, husarion_ugv_msgs, srv, AddZone_Request)() {
  return &::husarion_ugv_msgs::srv::rosidl_typesupport_c::AddZone_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/add_zone__struct.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/add_zone__type_support.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/add_zone__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace husarion_ugv_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddZone_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddZone_Response_type_support_ids_t;

static const _AddZone_Response_type_support_ids_t _AddZone_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddZone_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddZone_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddZone_Response_type_support_symbol_names_t _AddZone_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, AddZone_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, husarion_ugv_msgs, srv, AddZone_Response)),
  }
};

typedef struct _AddZone_Response_type_support_data_t
{
  void * data[2];
} _AddZone_Response_type_support_data_t;

static _AddZone_Response_type_support_data_t _AddZone_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddZone_Response_message_typesupport_map = {
  2,
  "husarion_ugv_msgs",
  &_AddZone_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddZone_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddZone_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddZone_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddZone_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &husarion_ugv_msgs__srv__AddZone_Response__get_type_hash,
  &husarion_ugv_msgs__srv__AddZone_Response__get_type_description,
  &husarion_ugv_msgs__srv__AddZone_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace husarion_ugv_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, husarion_ugv_msgs, srv, AddZone_Response)() {
  return &::husarion_ugv_msgs::srv::rosidl_typesupport_c::AddZone_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/add_zone__struct.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/add_zone__type_support.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/add_zone__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace husarion_ugv_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddZone_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddZone_Event_type_support_ids_t;

static const _AddZone_Event_type_support_ids_t _AddZone_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddZone_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddZone_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddZone_Event_type_support_symbol_names_t _AddZone_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, AddZone_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, husarion_ugv_msgs, srv, AddZone_Event)),
  }
};

typedef struct _AddZone_Event_type_support_data_t
{
  void * data[2];
} _AddZone_Event_type_support_data_t;

static _AddZone_Event_type_support_data_t _AddZone_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddZone_Event_message_typesupport_map = {
  2,
  "husarion_ugv_msgs",
  &_AddZone_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AddZone_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AddZone_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddZone_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddZone_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &husarion_ugv_msgs__srv__AddZone_Event__get_type_hash,
  &husarion_ugv_msgs__srv__AddZone_Event__get_type_description,
  &husarion_ugv_msgs__srv__AddZone_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace husarion_ugv_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, husarion_ugv_msgs, srv, AddZone_Event)() {
  return &::husarion_ugv_msgs::srv::rosidl_typesupport_c::AddZone_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/add_zone__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace husarion_ugv_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _AddZone_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddZone_type_support_ids_t;

static const _AddZone_type_support_ids_t _AddZone_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddZone_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddZone_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddZone_type_support_symbol_names_t _AddZone_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, AddZone)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, husarion_ugv_msgs, srv, AddZone)),
  }
};

typedef struct _AddZone_type_support_data_t
{
  void * data[2];
} _AddZone_type_support_data_t;

static _AddZone_type_support_data_t _AddZone_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddZone_service_typesupport_map = {
  2,
  "husarion_ugv_msgs",
  &_AddZone_service_typesupport_ids.typesupport_identifier[0],
  &_AddZone_service_typesupport_symbol_names.symbol_name[0],
  &_AddZone_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AddZone_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddZone_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &AddZone_Request_message_type_support_handle,
  &AddZone_Response_message_type_support_handle,
  &AddZone_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    husarion_ugv_msgs,
    srv,
    AddZone
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    husarion_ugv_msgs,
    srv,
    AddZone
  ),
  &husarion_ugv_msgs__srv__AddZone__get_type_hash,
  &husarion_ugv_msgs__srv__AddZone__get_type_description,
  &husarion_ugv_msgs__srv__AddZone__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace husarion_ugv_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, husarion_ugv_msgs, srv, AddZone)() {
  return &::husarion_ugv_msgs::srv::rosidl_typesupport_c::AddZone_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
