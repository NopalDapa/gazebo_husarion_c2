// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from husarion_ugv_msgs:srv/SetLEDAnimation.idl
// generated code does not contain a copyright notice

#include "husarion_ugv_msgs/srv/detail/set_led_animation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
const rosidl_type_hash_t *
husarion_ugv_msgs__srv__SetLEDAnimation__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0xaf, 0xca, 0x05, 0xd8, 0x43, 0x51, 0x30,
      0xca, 0x3d, 0x0d, 0x5c, 0x9e, 0x31, 0x33, 0x21,
      0x8b, 0x17, 0x34, 0xde, 0xb8, 0x47, 0xed, 0xa0,
      0xaa, 0x2e, 0x36, 0xc4, 0x38, 0x2f, 0x26, 0xf7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
const rosidl_type_hash_t *
husarion_ugv_msgs__srv__SetLEDAnimation_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0xd5, 0xc9, 0x40, 0x09, 0x71, 0x41, 0xc4,
      0x0f, 0x26, 0x30, 0xbe, 0x66, 0x94, 0x58, 0xe8,
      0x92, 0xa7, 0xa6, 0x55, 0xd5, 0x3c, 0x32, 0x7c,
      0x56, 0xa0, 0xf6, 0x48, 0x10, 0x7a, 0x56, 0x98,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
const rosidl_type_hash_t *
husarion_ugv_msgs__srv__SetLEDAnimation_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0x0f, 0x46, 0x0d, 0x83, 0xf6, 0xd2, 0xf0,
      0x1f, 0x8b, 0x42, 0x2b, 0x75, 0x0a, 0x05, 0x5b,
      0xf7, 0x5c, 0x42, 0x0c, 0x03, 0xe5, 0x4f, 0xa2,
      0x74, 0xaf, 0x82, 0xe8, 0x5d, 0x9c, 0xb9, 0x85,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
const rosidl_type_hash_t *
husarion_ugv_msgs__srv__SetLEDAnimation_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0x39, 0xca, 0xa3, 0x67, 0xeb, 0xbe, 0x89,
      0x2e, 0x05, 0xf7, 0x89, 0x6c, 0x16, 0x1d, 0x91,
      0x62, 0x53, 0x6d, 0xc5, 0xc9, 0xf8, 0x00, 0x83,
      0x7e, 0x7a, 0x85, 0x04, 0x59, 0x73, 0xab, 0x35,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "husarion_ugv_msgs/msg/detail/led_animation__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t husarion_ugv_msgs__msg__LEDAnimation__EXPECTED_HASH = {1, {
    0xd0, 0xc2, 0x03, 0xc2, 0x10, 0x86, 0xa3, 0x6d,
    0x2c, 0x0e, 0x61, 0xd1, 0x5a, 0x16, 0xb5, 0xd3,
    0x5c, 0x79, 0x1a, 0x88, 0x0b, 0xa4, 0xd8, 0x11,
    0x97, 0x8e, 0x0b, 0x87, 0xd7, 0xe8, 0x7a, 0x93,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char husarion_ugv_msgs__srv__SetLEDAnimation__TYPE_NAME[] = "husarion_ugv_msgs/srv/SetLEDAnimation";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char husarion_ugv_msgs__msg__LEDAnimation__TYPE_NAME[] = "husarion_ugv_msgs/msg/LEDAnimation";
static char husarion_ugv_msgs__srv__SetLEDAnimation_Event__TYPE_NAME[] = "husarion_ugv_msgs/srv/SetLEDAnimation_Event";
static char husarion_ugv_msgs__srv__SetLEDAnimation_Request__TYPE_NAME[] = "husarion_ugv_msgs/srv/SetLEDAnimation_Request";
static char husarion_ugv_msgs__srv__SetLEDAnimation_Response__TYPE_NAME[] = "husarion_ugv_msgs/srv/SetLEDAnimation_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char husarion_ugv_msgs__srv__SetLEDAnimation__FIELD_NAME__request_message[] = "request_message";
static char husarion_ugv_msgs__srv__SetLEDAnimation__FIELD_NAME__response_message[] = "response_message";
static char husarion_ugv_msgs__srv__SetLEDAnimation__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field husarion_ugv_msgs__srv__SetLEDAnimation__FIELDS[] = {
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {husarion_ugv_msgs__srv__SetLEDAnimation_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {husarion_ugv_msgs__srv__SetLEDAnimation_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {husarion_ugv_msgs__srv__SetLEDAnimation_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription husarion_ugv_msgs__srv__SetLEDAnimation__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__msg__LEDAnimation__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
husarion_ugv_msgs__srv__SetLEDAnimation__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {husarion_ugv_msgs__srv__SetLEDAnimation__TYPE_NAME, 37, 37},
      {husarion_ugv_msgs__srv__SetLEDAnimation__FIELDS, 3, 3},
    },
    {husarion_ugv_msgs__srv__SetLEDAnimation__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&husarion_ugv_msgs__msg__LEDAnimation__EXPECTED_HASH, husarion_ugv_msgs__msg__LEDAnimation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = husarion_ugv_msgs__msg__LEDAnimation__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = husarion_ugv_msgs__srv__SetLEDAnimation_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = husarion_ugv_msgs__srv__SetLEDAnimation_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = husarion_ugv_msgs__srv__SetLEDAnimation_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char husarion_ugv_msgs__srv__SetLEDAnimation_Request__FIELD_NAME__animation[] = "animation";
static char husarion_ugv_msgs__srv__SetLEDAnimation_Request__FIELD_NAME__repeating[] = "repeating";

static rosidl_runtime_c__type_description__Field husarion_ugv_msgs__srv__SetLEDAnimation_Request__FIELDS[] = {
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Request__FIELD_NAME__animation, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {husarion_ugv_msgs__msg__LEDAnimation__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Request__FIELD_NAME__repeating, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription husarion_ugv_msgs__srv__SetLEDAnimation_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {husarion_ugv_msgs__msg__LEDAnimation__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
husarion_ugv_msgs__srv__SetLEDAnimation_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {husarion_ugv_msgs__srv__SetLEDAnimation_Request__TYPE_NAME, 45, 45},
      {husarion_ugv_msgs__srv__SetLEDAnimation_Request__FIELDS, 2, 2},
    },
    {husarion_ugv_msgs__srv__SetLEDAnimation_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&husarion_ugv_msgs__msg__LEDAnimation__EXPECTED_HASH, husarion_ugv_msgs__msg__LEDAnimation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = husarion_ugv_msgs__msg__LEDAnimation__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char husarion_ugv_msgs__srv__SetLEDAnimation_Response__FIELD_NAME__success[] = "success";
static char husarion_ugv_msgs__srv__SetLEDAnimation_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field husarion_ugv_msgs__srv__SetLEDAnimation_Response__FIELDS[] = {
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
husarion_ugv_msgs__srv__SetLEDAnimation_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {husarion_ugv_msgs__srv__SetLEDAnimation_Response__TYPE_NAME, 46, 46},
      {husarion_ugv_msgs__srv__SetLEDAnimation_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char husarion_ugv_msgs__srv__SetLEDAnimation_Event__FIELD_NAME__info[] = "info";
static char husarion_ugv_msgs__srv__SetLEDAnimation_Event__FIELD_NAME__request[] = "request";
static char husarion_ugv_msgs__srv__SetLEDAnimation_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field husarion_ugv_msgs__srv__SetLEDAnimation_Event__FIELDS[] = {
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {husarion_ugv_msgs__srv__SetLEDAnimation_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {husarion_ugv_msgs__srv__SetLEDAnimation_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription husarion_ugv_msgs__srv__SetLEDAnimation_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__msg__LEDAnimation__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
husarion_ugv_msgs__srv__SetLEDAnimation_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {husarion_ugv_msgs__srv__SetLEDAnimation_Event__TYPE_NAME, 43, 43},
      {husarion_ugv_msgs__srv__SetLEDAnimation_Event__FIELDS, 3, 3},
    },
    {husarion_ugv_msgs__srv__SetLEDAnimation_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&husarion_ugv_msgs__msg__LEDAnimation__EXPECTED_HASH, husarion_ugv_msgs__msg__LEDAnimation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = husarion_ugv_msgs__msg__LEDAnimation__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = husarion_ugv_msgs__srv__SetLEDAnimation_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = husarion_ugv_msgs__srv__SetLEDAnimation_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "husarion_ugv_msgs/LEDAnimation animation\n"
  "bool repeating\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
husarion_ugv_msgs__srv__SetLEDAnimation__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {husarion_ugv_msgs__srv__SetLEDAnimation__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 88, 88},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
husarion_ugv_msgs__srv__SetLEDAnimation_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
husarion_ugv_msgs__srv__SetLEDAnimation_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
husarion_ugv_msgs__srv__SetLEDAnimation_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {husarion_ugv_msgs__srv__SetLEDAnimation_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
husarion_ugv_msgs__srv__SetLEDAnimation__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *husarion_ugv_msgs__srv__SetLEDAnimation__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *husarion_ugv_msgs__msg__LEDAnimation__get_individual_type_description_source(NULL);
    sources[3] = *husarion_ugv_msgs__srv__SetLEDAnimation_Event__get_individual_type_description_source(NULL);
    sources[4] = *husarion_ugv_msgs__srv__SetLEDAnimation_Request__get_individual_type_description_source(NULL);
    sources[5] = *husarion_ugv_msgs__srv__SetLEDAnimation_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
husarion_ugv_msgs__srv__SetLEDAnimation_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *husarion_ugv_msgs__srv__SetLEDAnimation_Request__get_individual_type_description_source(NULL),
    sources[1] = *husarion_ugv_msgs__msg__LEDAnimation__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
husarion_ugv_msgs__srv__SetLEDAnimation_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *husarion_ugv_msgs__srv__SetLEDAnimation_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
husarion_ugv_msgs__srv__SetLEDAnimation_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *husarion_ugv_msgs__srv__SetLEDAnimation_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *husarion_ugv_msgs__msg__LEDAnimation__get_individual_type_description_source(NULL);
    sources[3] = *husarion_ugv_msgs__srv__SetLEDAnimation_Request__get_individual_type_description_source(NULL);
    sources[4] = *husarion_ugv_msgs__srv__SetLEDAnimation_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
