cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(application VERSION 0.0.1)

add_subdirectory(src)
add_subdirectory(static-lib)
add_subdirectory(shared-lib)

enable_testing()

add_subdirectory(tests)