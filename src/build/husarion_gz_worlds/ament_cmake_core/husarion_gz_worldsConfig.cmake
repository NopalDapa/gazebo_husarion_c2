# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_husarion_gz_worlds_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED husarion_gz_worlds_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(husarion_gz_worlds_FOUND FALSE)
  elseif(NOT husarion_gz_worlds_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(husarion_gz_worlds_FOUND FALSE)
  endif()
  return()
endif()
set(_husarion_gz_worlds_CONFIG_INCLUDED TRUE)

# output package information
if(NOT husarion_gz_worlds_FIND_QUIETLY)
  message(STATUS "Found husarion_gz_worlds: 0.0.0 (${husarion_gz_worlds_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'husarion_gz_worlds' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT husarion_gz_worlds_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(husarion_gz_worlds_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${husarion_gz_worlds_DIR}/${_extra}")
endforeach()
