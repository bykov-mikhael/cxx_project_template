cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(mainLib VERSION 0.0.5)

configure_file(
  config.h.in
  ${CMAKE_CURRENT_BINARY_DIR}/config.h
  )

add_executable(mainLib
  application.cpp
  )

target_compile_features(mainLib PUBLIC
  cxx_std_17
  )

set_target_properties(mainLib PROPERTIES
  CXX_STANDARD_REQUIRED ON
  )

set_target_properties(mainLib PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
  )

# параметры директивы include
target_include_directories(
  mainLib PRIVATE
  ${CMAKE_CURRENT_BINARY_DIR}       # ссылка на config.h.in
  ${CMAKE_SOURCE_DIR}/shared-lib    # ссылка на shared-lib
  ${CMAKE_SOURCE_DIR}/static-lib    # ссылка на static-lib
  )

# параметры компановщика/линковщика:
# парамтеры библотек должны совпадать с названием в add_library(shared_lib SHARED, add_library(static_lib STATIC
target_link_libraries(mainLib
  static_lib
  shared_lib
  )

if(MSVC)
  target_compile_options(mainLib PUBLIC /W4 /WX)
else()
  target_compile_options(mainLib PUBLIC -Wall -Wextra -Werror -pedantic)
endif()
