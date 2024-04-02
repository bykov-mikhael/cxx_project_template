include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

FetchContent_MakeAvailable(googletest)

set(COMMON_SRCS
  ${CMAKE_SOURCE_DIR}/static-lib
  )

add_executable(gtests
  tests.cpp
  ${COMMON_SRCS}
  )

target_include_directories(gtests PUBLIC
  ${CMAKE_SOURCE_DIR}
  ${CMAKE_SOURCE_DIR}/static-lib    # ссылка на static-lib
  )

target_link_libraries(gtests PUBLIC
  gtest
  gtest_main
  static_lib
  )