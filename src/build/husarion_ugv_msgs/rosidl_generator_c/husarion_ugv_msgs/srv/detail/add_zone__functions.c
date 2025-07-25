// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from husarion_ugv_msgs:srv/AddZone.idl
// generated code does not contain a copyright notice
#include "husarion_ugv_msgs/srv/detail/add_zone__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
husarion_ugv_msgs__srv__AddZone_Request__init(husarion_ugv_msgs__srv__AddZone_Request * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    husarion_ugv_msgs__srv__AddZone_Request__fini(msg);
    return false;
  }
  // radius
  return true;
}

void
husarion_ugv_msgs__srv__AddZone_Request__fini(husarion_ugv_msgs__srv__AddZone_Request * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // radius
}

bool
husarion_ugv_msgs__srv__AddZone_Request__are_equal(const husarion_ugv_msgs__srv__AddZone_Request * lhs, const husarion_ugv_msgs__srv__AddZone_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
husarion_ugv_msgs__srv__AddZone_Request__copy(
  const husarion_ugv_msgs__srv__AddZone_Request * input,
  husarion_ugv_msgs__srv__AddZone_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  return true;
}

husarion_ugv_msgs__srv__AddZone_Request *
husarion_ugv_msgs__srv__AddZone_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  husarion_ugv_msgs__srv__AddZone_Request * msg = (husarion_ugv_msgs__srv__AddZone_Request *)allocator.allocate(sizeof(husarion_ugv_msgs__srv__AddZone_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(husarion_ugv_msgs__srv__AddZone_Request));
  bool success = husarion_ugv_msgs__srv__AddZone_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
husarion_ugv_msgs__srv__AddZone_Request__destroy(husarion_ugv_msgs__srv__AddZone_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    husarion_ugv_msgs__srv__AddZone_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
husarion_ugv_msgs__srv__AddZone_Request__Sequence__init(husarion_ugv_msgs__srv__AddZone_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  husarion_ugv_msgs__srv__AddZone_Request * data = NULL;

  if (size) {
    data = (husarion_ugv_msgs__srv__AddZone_Request *)allocator.zero_allocate(size, sizeof(husarion_ugv_msgs__srv__AddZone_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = husarion_ugv_msgs__srv__AddZone_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        husarion_ugv_msgs__srv__AddZone_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
husarion_ugv_msgs__srv__AddZone_Request__Sequence__fini(husarion_ugv_msgs__srv__AddZone_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      husarion_ugv_msgs__srv__AddZone_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

husarion_ugv_msgs__srv__AddZone_Request__Sequence *
husarion_ugv_msgs__srv__AddZone_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  husarion_ugv_msgs__srv__AddZone_Request__Sequence * array = (husarion_ugv_msgs__srv__AddZone_Request__Sequence *)allocator.allocate(sizeof(husarion_ugv_msgs__srv__AddZone_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = husarion_ugv_msgs__srv__AddZone_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
husarion_ugv_msgs__srv__AddZone_Request__Sequence__destroy(husarion_ugv_msgs__srv__AddZone_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    husarion_ugv_msgs__srv__AddZone_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
husarion_ugv_msgs__srv__AddZone_Request__Sequence__are_equal(const husarion_ugv_msgs__srv__AddZone_Request__Sequence * lhs, const husarion_ugv_msgs__srv__AddZone_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!husarion_ugv_msgs__srv__AddZone_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
husarion_ugv_msgs__srv__AddZone_Request__Sequence__copy(
  const husarion_ugv_msgs__srv__AddZone_Request__Sequence * input,
  husarion_ugv_msgs__srv__AddZone_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(husarion_ugv_msgs__srv__AddZone_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    husarion_ugv_msgs__srv__AddZone_Request * data =
      (husarion_ugv_msgs__srv__AddZone_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!husarion_ugv_msgs__srv__AddZone_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          husarion_ugv_msgs__srv__AddZone_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!husarion_ugv_msgs__srv__AddZone_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
husarion_ugv_msgs__srv__AddZone_Response__init(husarion_ugv_msgs__srv__AddZone_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    husarion_ugv_msgs__srv__AddZone_Response__fini(msg);
    return false;
  }
  return true;
}

void
husarion_ugv_msgs__srv__AddZone_Response__fini(husarion_ugv_msgs__srv__AddZone_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
husarion_ugv_msgs__srv__AddZone_Response__are_equal(const husarion_ugv_msgs__srv__AddZone_Response * lhs, const husarion_ugv_msgs__srv__AddZone_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
husarion_ugv_msgs__srv__AddZone_Response__copy(
  const husarion_ugv_msgs__srv__AddZone_Response * input,
  husarion_ugv_msgs__srv__AddZone_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

husarion_ugv_msgs__srv__AddZone_Response *
husarion_ugv_msgs__srv__AddZone_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  husarion_ugv_msgs__srv__AddZone_Response * msg = (husarion_ugv_msgs__srv__AddZone_Response *)allocator.allocate(sizeof(husarion_ugv_msgs__srv__AddZone_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(husarion_ugv_msgs__srv__AddZone_Response));
  bool success = husarion_ugv_msgs__srv__AddZone_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
husarion_ugv_msgs__srv__AddZone_Response__destroy(husarion_ugv_msgs__srv__AddZone_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    husarion_ugv_msgs__srv__AddZone_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
husarion_ugv_msgs__srv__AddZone_Response__Sequence__init(husarion_ugv_msgs__srv__AddZone_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  husarion_ugv_msgs__srv__AddZone_Response * data = NULL;

  if (size) {
    data = (husarion_ugv_msgs__srv__AddZone_Response *)allocator.zero_allocate(size, sizeof(husarion_ugv_msgs__srv__AddZone_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = husarion_ugv_msgs__srv__AddZone_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        husarion_ugv_msgs__srv__AddZone_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
husarion_ugv_msgs__srv__AddZone_Response__Sequence__fini(husarion_ugv_msgs__srv__AddZone_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      husarion_ugv_msgs__srv__AddZone_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

husarion_ugv_msgs__srv__AddZone_Response__Sequence *
husarion_ugv_msgs__srv__AddZone_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  husarion_ugv_msgs__srv__AddZone_Response__Sequence * array = (husarion_ugv_msgs__srv__AddZone_Response__Sequence *)allocator.allocate(sizeof(husarion_ugv_msgs__srv__AddZone_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = husarion_ugv_msgs__srv__AddZone_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
husarion_ugv_msgs__srv__AddZone_Response__Sequence__destroy(husarion_ugv_msgs__srv__AddZone_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    husarion_ugv_msgs__srv__AddZone_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
husarion_ugv_msgs__srv__AddZone_Response__Sequence__are_equal(const husarion_ugv_msgs__srv__AddZone_Response__Sequence * lhs, const husarion_ugv_msgs__srv__AddZone_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!husarion_ugv_msgs__srv__AddZone_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
husarion_ugv_msgs__srv__AddZone_Response__Sequence__copy(
  const husarion_ugv_msgs__srv__AddZone_Response__Sequence * input,
  husarion_ugv_msgs__srv__AddZone_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(husarion_ugv_msgs__srv__AddZone_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    husarion_ugv_msgs__srv__AddZone_Response * data =
      (husarion_ugv_msgs__srv__AddZone_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!husarion_ugv_msgs__srv__AddZone_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          husarion_ugv_msgs__srv__AddZone_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!husarion_ugv_msgs__srv__AddZone_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "husarion_ugv_msgs/srv/detail/add_zone__functions.h"

bool
husarion_ugv_msgs__srv__AddZone_Event__init(husarion_ugv_msgs__srv__AddZone_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    husarion_ugv_msgs__srv__AddZone_Event__fini(msg);
    return false;
  }
  // request
  if (!husarion_ugv_msgs__srv__AddZone_Request__Sequence__init(&msg->request, 0)) {
    husarion_ugv_msgs__srv__AddZone_Event__fini(msg);
    return false;
  }
  // response
  if (!husarion_ugv_msgs__srv__AddZone_Response__Sequence__init(&msg->response, 0)) {
    husarion_ugv_msgs__srv__AddZone_Event__fini(msg);
    return false;
  }
  return true;
}

void
husarion_ugv_msgs__srv__AddZone_Event__fini(husarion_ugv_msgs__srv__AddZone_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  husarion_ugv_msgs__srv__AddZone_Request__Sequence__fini(&msg->request);
  // response
  husarion_ugv_msgs__srv__AddZone_Response__Sequence__fini(&msg->response);
}

bool
husarion_ugv_msgs__srv__AddZone_Event__are_equal(const husarion_ugv_msgs__srv__AddZone_Event * lhs, const husarion_ugv_msgs__srv__AddZone_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!husarion_ugv_msgs__srv__AddZone_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!husarion_ugv_msgs__srv__AddZone_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
husarion_ugv_msgs__srv__AddZone_Event__copy(
  const husarion_ugv_msgs__srv__AddZone_Event * input,
  husarion_ugv_msgs__srv__AddZone_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!husarion_ugv_msgs__srv__AddZone_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!husarion_ugv_msgs__srv__AddZone_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

husarion_ugv_msgs__srv__AddZone_Event *
husarion_ugv_msgs__srv__AddZone_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  husarion_ugv_msgs__srv__AddZone_Event * msg = (husarion_ugv_msgs__srv__AddZone_Event *)allocator.allocate(sizeof(husarion_ugv_msgs__srv__AddZone_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(husarion_ugv_msgs__srv__AddZone_Event));
  bool success = husarion_ugv_msgs__srv__AddZone_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
husarion_ugv_msgs__srv__AddZone_Event__destroy(husarion_ugv_msgs__srv__AddZone_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    husarion_ugv_msgs__srv__AddZone_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
husarion_ugv_msgs__srv__AddZone_Event__Sequence__init(husarion_ugv_msgs__srv__AddZone_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  husarion_ugv_msgs__srv__AddZone_Event * data = NULL;

  if (size) {
    data = (husarion_ugv_msgs__srv__AddZone_Event *)allocator.zero_allocate(size, sizeof(husarion_ugv_msgs__srv__AddZone_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = husarion_ugv_msgs__srv__AddZone_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        husarion_ugv_msgs__srv__AddZone_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
husarion_ugv_msgs__srv__AddZone_Event__Sequence__fini(husarion_ugv_msgs__srv__AddZone_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      husarion_ugv_msgs__srv__AddZone_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

husarion_ugv_msgs__srv__AddZone_Event__Sequence *
husarion_ugv_msgs__srv__AddZone_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  husarion_ugv_msgs__srv__AddZone_Event__Sequence * array = (husarion_ugv_msgs__srv__AddZone_Event__Sequence *)allocator.allocate(sizeof(husarion_ugv_msgs__srv__AddZone_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = husarion_ugv_msgs__srv__AddZone_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
husarion_ugv_msgs__srv__AddZone_Event__Sequence__destroy(husarion_ugv_msgs__srv__AddZone_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    husarion_ugv_msgs__srv__AddZone_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
husarion_ugv_msgs__srv__AddZone_Event__Sequence__are_equal(const husarion_ugv_msgs__srv__AddZone_Event__Sequence * lhs, const husarion_ugv_msgs__srv__AddZone_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!husarion_ugv_msgs__srv__AddZone_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
husarion_ugv_msgs__srv__AddZone_Event__Sequence__copy(
  const husarion_ugv_msgs__srv__AddZone_Event__Sequence * input,
  husarion_ugv_msgs__srv__AddZone_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(husarion_ugv_msgs__srv__AddZone_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    husarion_ugv_msgs__srv__AddZone_Event * data =
      (husarion_ugv_msgs__srv__AddZone_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!husarion_ugv_msgs__srv__AddZone_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          husarion_ugv_msgs__srv__AddZone_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!husarion_ugv_msgs__srv__AddZone_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
