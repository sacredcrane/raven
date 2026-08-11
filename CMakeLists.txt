cmake_minimum_required(VERSION 3.25)

project(
  raven
  VERSION 0.1.0
  LANGUAGES CXX
  DESCRIPTION "Local-first voice assistant"
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(raven_options)
include(CTest)

add_subdirectory(src)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    add_subdirectory(platform/linux)
endif()

add_subdirectory(apps/raven)

if(BUILD_TESTING)
  include(raven_dependencies)
  add_subdirectory(tests)
endif()
