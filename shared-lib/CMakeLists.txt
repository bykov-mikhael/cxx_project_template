cmake_minimum_required(VERSION 3.12)

project(shared_lib VERSION 0.0.2)

add_library(shared_lib SHARED shared.cpp shared.h)

# возможность использования в директиве include символов <>
target_include_directories(shared_lib PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
  )

target_compile_features(shared_lib
  PUBLIC
  cxx_std_17
  )

set_target_properties(shared_lib PROPERTIES
  CXX_STANDARD_REQUIRED ON
  )

set_target_properties(shared_lib PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
  )

if(MSVC)
  target_compile_options(shared_lib PUBLIC /W4 /WX)
else()
  target_compile_options(shared_lib PUBLIC -Wall -Wextra -Werror -pedantic)
endif()