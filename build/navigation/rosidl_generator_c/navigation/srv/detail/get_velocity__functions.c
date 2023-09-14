// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navigation:srv/GetVelocity.idl
// generated code does not contain a copyright notice
#include "navigation/srv/detail/get_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
navigation__srv__GetVelocity_Request__init(navigation__srv__GetVelocity_Request * msg)
{
  if (!msg) {
    return false;
  }
  // linear_x
  // linear_y
  // angular_z
  return true;
}

void
navigation__srv__GetVelocity_Request__fini(navigation__srv__GetVelocity_Request * msg)
{
  if (!msg) {
    return;
  }
  // linear_x
  // linear_y
  // angular_z
}

bool
navigation__srv__GetVelocity_Request__are_equal(const navigation__srv__GetVelocity_Request * lhs, const navigation__srv__GetVelocity_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_x
  if (lhs->linear_x != rhs->linear_x) {
    return false;
  }
  // linear_y
  if (lhs->linear_y != rhs->linear_y) {
    return false;
  }
  // angular_z
  if (lhs->angular_z != rhs->angular_z) {
    return false;
  }
  return true;
}

bool
navigation__srv__GetVelocity_Request__copy(
  const navigation__srv__GetVelocity_Request * input,
  navigation__srv__GetVelocity_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_x
  output->linear_x = input->linear_x;
  // linear_y
  output->linear_y = input->linear_y;
  // angular_z
  output->angular_z = input->angular_z;
  return true;
}

navigation__srv__GetVelocity_Request *
navigation__srv__GetVelocity_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation__srv__GetVelocity_Request * msg = (navigation__srv__GetVelocity_Request *)allocator.allocate(sizeof(navigation__srv__GetVelocity_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation__srv__GetVelocity_Request));
  bool success = navigation__srv__GetVelocity_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation__srv__GetVelocity_Request__destroy(navigation__srv__GetVelocity_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation__srv__GetVelocity_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation__srv__GetVelocity_Request__Sequence__init(navigation__srv__GetVelocity_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation__srv__GetVelocity_Request * data = NULL;

  if (size) {
    data = (navigation__srv__GetVelocity_Request *)allocator.zero_allocate(size, sizeof(navigation__srv__GetVelocity_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation__srv__GetVelocity_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation__srv__GetVelocity_Request__fini(&data[i - 1]);
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
navigation__srv__GetVelocity_Request__Sequence__fini(navigation__srv__GetVelocity_Request__Sequence * array)
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
      navigation__srv__GetVelocity_Request__fini(&array->data[i]);
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

navigation__srv__GetVelocity_Request__Sequence *
navigation__srv__GetVelocity_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation__srv__GetVelocity_Request__Sequence * array = (navigation__srv__GetVelocity_Request__Sequence *)allocator.allocate(sizeof(navigation__srv__GetVelocity_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation__srv__GetVelocity_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation__srv__GetVelocity_Request__Sequence__destroy(navigation__srv__GetVelocity_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation__srv__GetVelocity_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation__srv__GetVelocity_Request__Sequence__are_equal(const navigation__srv__GetVelocity_Request__Sequence * lhs, const navigation__srv__GetVelocity_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation__srv__GetVelocity_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation__srv__GetVelocity_Request__Sequence__copy(
  const navigation__srv__GetVelocity_Request__Sequence * input,
  navigation__srv__GetVelocity_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation__srv__GetVelocity_Request);
    navigation__srv__GetVelocity_Request * data =
      (navigation__srv__GetVelocity_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation__srv__GetVelocity_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          navigation__srv__GetVelocity_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation__srv__GetVelocity_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
navigation__srv__GetVelocity_Response__init(navigation__srv__GetVelocity_Response * msg)
{
  if (!msg) {
    return false;
  }
  // w1
  // w2
  // w3
  // w4
  return true;
}

void
navigation__srv__GetVelocity_Response__fini(navigation__srv__GetVelocity_Response * msg)
{
  if (!msg) {
    return;
  }
  // w1
  // w2
  // w3
  // w4
}

bool
navigation__srv__GetVelocity_Response__are_equal(const navigation__srv__GetVelocity_Response * lhs, const navigation__srv__GetVelocity_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // w1
  if (lhs->w1 != rhs->w1) {
    return false;
  }
  // w2
  if (lhs->w2 != rhs->w2) {
    return false;
  }
  // w3
  if (lhs->w3 != rhs->w3) {
    return false;
  }
  // w4
  if (lhs->w4 != rhs->w4) {
    return false;
  }
  return true;
}

bool
navigation__srv__GetVelocity_Response__copy(
  const navigation__srv__GetVelocity_Response * input,
  navigation__srv__GetVelocity_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // w1
  output->w1 = input->w1;
  // w2
  output->w2 = input->w2;
  // w3
  output->w3 = input->w3;
  // w4
  output->w4 = input->w4;
  return true;
}

navigation__srv__GetVelocity_Response *
navigation__srv__GetVelocity_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation__srv__GetVelocity_Response * msg = (navigation__srv__GetVelocity_Response *)allocator.allocate(sizeof(navigation__srv__GetVelocity_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation__srv__GetVelocity_Response));
  bool success = navigation__srv__GetVelocity_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation__srv__GetVelocity_Response__destroy(navigation__srv__GetVelocity_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation__srv__GetVelocity_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation__srv__GetVelocity_Response__Sequence__init(navigation__srv__GetVelocity_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation__srv__GetVelocity_Response * data = NULL;

  if (size) {
    data = (navigation__srv__GetVelocity_Response *)allocator.zero_allocate(size, sizeof(navigation__srv__GetVelocity_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation__srv__GetVelocity_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation__srv__GetVelocity_Response__fini(&data[i - 1]);
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
navigation__srv__GetVelocity_Response__Sequence__fini(navigation__srv__GetVelocity_Response__Sequence * array)
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
      navigation__srv__GetVelocity_Response__fini(&array->data[i]);
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

navigation__srv__GetVelocity_Response__Sequence *
navigation__srv__GetVelocity_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation__srv__GetVelocity_Response__Sequence * array = (navigation__srv__GetVelocity_Response__Sequence *)allocator.allocate(sizeof(navigation__srv__GetVelocity_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation__srv__GetVelocity_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation__srv__GetVelocity_Response__Sequence__destroy(navigation__srv__GetVelocity_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation__srv__GetVelocity_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation__srv__GetVelocity_Response__Sequence__are_equal(const navigation__srv__GetVelocity_Response__Sequence * lhs, const navigation__srv__GetVelocity_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation__srv__GetVelocity_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation__srv__GetVelocity_Response__Sequence__copy(
  const navigation__srv__GetVelocity_Response__Sequence * input,
  navigation__srv__GetVelocity_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation__srv__GetVelocity_Response);
    navigation__srv__GetVelocity_Response * data =
      (navigation__srv__GetVelocity_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation__srv__GetVelocity_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          navigation__srv__GetVelocity_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation__srv__GetVelocity_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
