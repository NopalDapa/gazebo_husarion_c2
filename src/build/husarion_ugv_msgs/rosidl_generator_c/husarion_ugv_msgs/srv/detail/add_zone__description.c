// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from husarion_ugv_msgs:srv/AddZone.idl
// generated code does not contain a copyright notice

#include "husarion_ugv_msgs/srv/detail/add_zone__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
const rosidl_type_hash_t *
husarion_ugv_msgs__srv__AddZone__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x2b, 0x39, 0xe3, 0x6a, 0xb1, 0xad, 0x3e,
      0xc8, 0x95, 0x45, 0x5d, 0x65, 0xe2, 0x4d, 0xb3,
      0x58, 0xed, 0xfc, 0x34, 0x2c, 0x3e, 0x75, 0x15,
      0x78, 0x0c, 0x04, 0x3e, 0x1e, 0x10, 0xb7, 0xa4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
const rosidl_type_hash_t *
husarion_ugv_msgs__srv__AddZone_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0x8c, 0xcb, 0x6c, 0x69, 0xec, 0x05, 0x2f,
      0xd2, 0xc2, 0x9c, 0x7d, 0xbe, 0xad, 0x01, 0x51,
      0x4e, 0x96, 0x67, 0xcc, 0xcc, 0xde, 0x72, 0xa6,
      0x4d, 0x72, 0xa0, 0x0e, 0x11, 0x38, 0x46, 0x83,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
const rosidl_type_hash_t *
husarion_ugv_msgs__srv__AddZone_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc0, 0xf7, 0x18, 0x7b, 0xca, 0xce, 0xd3, 0xad,
      0x73, 0xda, 0xab, 0xe2, 0x6f, 0x44, 0xaa, 0xf8,
      0x72, 0x94, 0xf5, 0x7d, 0xfd, 0x9f, 0xe7, 0x8c,
      0xa3, 0x5f, 0x52, 0x30, 0x12, 0xbb, 0xbb, 0xb8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
const rosidl_type_hash_t *
husarion_ugv_msgs__srv__AddZone_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0xd0, 0x0c, 0xa1, 0x2b, 0xa1, 0xe0, 0xc0,
      0x4a, 0xec, 0x1d, 0x3f, 0xf4, 0x87, 0xc2, 0x0f,
      0x22, 0x4b, 0xb5, 0x66, 0x9f, 0x7e, 0x18, 0xff,
      0xfe, 0x42, 0xee, 0x07, 0x86, 0x24, 0x9f, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char husarion_ugv_msgs__srv__AddZone__TYPE_NAME[] = "husarion_ugv_msgs/srv/AddZone";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char husarion_ugv_msgs__srv__AddZone_Event__TYPE_NAME[] = "husarion_ugv_msgs/srv/AddZone_Event";
static char husarion_ugv_msgs__srv__AddZone_Request__TYPE_NAME[] = "husarion_ugv_msgs/srv/AddZone_Request";
static char husarion_ugv_msgs__srv__AddZone_Response__TYPE_NAME[] = "husarion_ugv_msgs/srv/AddZone_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char husarion_ugv_msgs__srv__AddZone__FIELD_NAME__request_message[] = "request_message";
static char husarion_ugv_msgs__srv__AddZone__FIELD_NAME__response_message[] = "response_message";
static char husarion_ugv_msgs__srv__AddZone__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field husarion_ugv_msgs__srv__AddZone__FIELDS[] = {
  {
    {husarion_ugv_msgs__srv__AddZone__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {husarion_ugv_msgs__srv__AddZone_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {husarion_ugv_msgs__srv__AddZone_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {husarion_ugv_msgs__srv__AddZone_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription husarion_ugv_msgs__srv__AddZone__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
husarion_ugv_msgs__srv__AddZone__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {husarion_ugv_msgs__srv__AddZone__TYPE_NAME, 29, 29},
      {husarion_ugv_msgs__srv__AddZone__FIELDS, 3, 3},
    },
    {husarion_ugv_msgs__srv__AddZone__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = husarion_ugv_msgs__srv__AddZone_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = husarion_ugv_msgs__srv__AddZone_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = husarion_ugv_msgs__srv__AddZone_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char husarion_ugv_msgs__srv__AddZone_Request__FIELD_NAME__position[] = "position";
static char husarion_ugv_msgs__srv__AddZone_Request__FIELD_NAME__radius[] = "radius";

static rosidl_runtime_c__type_description__Field husarion_ugv_msgs__srv__AddZone_Request__FIELDS[] = {
  {
    {husarion_ugv_msgs__srv__AddZone_Request__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone_Request__FIELD_NAME__radius, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription husarion_ugv_msgs__srv__AddZone_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
husarion_ugv_msgs__srv__AddZone_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {husarion_ugv_msgs__srv__AddZone_Request__TYPE_NAME, 37, 37},
      {husarion_ugv_msgs__srv__AddZone_Request__FIELDS, 2, 2},
    },
    {husarion_ugv_msgs__srv__AddZone_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char husarion_ugv_msgs__srv__AddZone_Response__FIELD_NAME__success[] = "success";
static char husarion_ugv_msgs__srv__AddZone_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field husarion_ugv_msgs__srv__AddZone_Response__FIELDS[] = {
  {
    {husarion_ugv_msgs__srv__AddZone_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone_Response__FIELD_NAME__message, 7, 7},
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
husarion_ugv_msgs__srv__AddZone_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {husarion_ugv_msgs__srv__AddZone_Response__TYPE_NAME, 38, 38},
      {husarion_ugv_msgs__srv__AddZone_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char husarion_ugv_msgs__srv__AddZone_Event__FIELD_NAME__info[] = "info";
static char husarion_ugv_msgs__srv__AddZone_Event__FIELD_NAME__request[] = "request";
static char husarion_ugv_msgs__srv__AddZone_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field husarion_ugv_msgs__srv__AddZone_Event__FIELDS[] = {
  {
    {husarion_ugv_msgs__srv__AddZone_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {husarion_ugv_msgs__srv__AddZone_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {husarion_ugv_msgs__srv__AddZone_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription husarion_ugv_msgs__srv__AddZone_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {husarion_ugv_msgs__srv__AddZone_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
husarion_ugv_msgs__srv__AddZone_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {husarion_ugv_msgs__srv__AddZone_Event__TYPE_NAME, 35, 35},
      {husarion_ugv_msgs__srv__AddZone_Event__FIELDS, 3, 3},
    },
    {husarion_ugv_msgs__srv__AddZone_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = husarion_ugv_msgs__srv__AddZone_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = husarion_ugv_msgs__srv__AddZone_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "geometry_msgs/Point position\n"
  "float64 radius\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
husarion_ugv_msgs__srv__AddZone__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {husarion_ugv_msgs__srv__AddZone__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 75, 75},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
husarion_ugv_msgs__srv__AddZone_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {husarion_ugv_msgs__srv__AddZone_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
husarion_ugv_msgs__srv__AddZone_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {husarion_ugv_msgs__srv__AddZone_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
husarion_ugv_msgs__srv__AddZone_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {husarion_ugv_msgs__srv__AddZone_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
husarion_ugv_msgs__srv__AddZone__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *husarion_ugv_msgs__srv__AddZone__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *husarion_ugv_msgs__srv__AddZone_Event__get_individual_type_description_source(NULL);
    sources[4] = *husarion_ugv_msgs__srv__AddZone_Request__get_individual_type_description_source(NULL);
    sources[5] = *husarion_ugv_msgs__srv__AddZone_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
husarion_ugv_msgs__srv__AddZone_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *husarion_ugv_msgs__srv__AddZone_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
husarion_ugv_msgs__srv__AddZone_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *husarion_ugv_msgs__srv__AddZone_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
husarion_ugv_msgs__srv__AddZone_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *husarion_ugv_msgs__srv__AddZone_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *husarion_ugv_msgs__srv__AddZone_Request__get_individual_type_description_source(NULL);
    sources[4] = *husarion_ugv_msgs__srv__AddZone_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
