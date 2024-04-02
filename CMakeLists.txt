cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(application VERSION 0.0.1)

add_subdirectory(src)
add_subdirectory(static-lib)
add_subdirectory(shared-lib)

enable_testing()

add_subdirectory(gtests)

# Warnings:
# Many (-Wall)
# Extra (-Wextra)
# Pedantic (-Wpedantic)

# Optimization level:
# None (-O0)
# Moderate (-O1)
# Full (-O2)
# Maximum (-O3)
# Maximum & smallest (-Oz)

# Build type:
# None (CMAKE_C_FLAGS or CMAKE_CXX_FLAGS used)
# Debug (CMAKE_C_FLAGS_DEBUG or CMAKE_CXX_FLAGS_DEBUG)
# Release (CMAKE_C_FLAGS_RELEASE or CMAKE_CXX_FLAGS_RELEASE)
# RelWithDebInfo (CMAKE_C_FLAGS_RELWITHDEBINFO or CMAKE_CXX_FLAGS_RELWITHDEBINFO, means "Release with debug info")
# MinSizeRel (CMAKE_C_FLAGS_MINSIZEREL or CMAKE_CXX_FLAGS_MINSIZEREL, stands for "Minimum size Release")

# set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -pedantic")
# set(CMAKE_CXX_FLAGS_DEBUG "-g")
# set(CMAKE_CXX_FLAGS_RELEASE "-O3")