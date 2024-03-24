cmake_minimum_required(VERSION 3.8)

project(static_lib VERSION 0.0.2)

configure_file(
  config.h.in
  ${CMAKE_CURRENT_BINARY_DIR}/config.h
  )

add_library(static_lib STATIC static.cpp static.h)

set_target_properties(static_lib PROPERTIES
  CXX_STANDARD 14
  CXX_STANDARD_REQUIRED ON
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
  )

target_include_directories(static_lib
  PRIVATE
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  )

if(MSVC)
  target_compile_options(static_lib PUBLIC /W4 /WX)
else()
  target_compile_options(static_lib PUBLIC -Wall -Wextra -Werror -pedantic)
endif()