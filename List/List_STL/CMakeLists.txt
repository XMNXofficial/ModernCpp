cmake_minimum_required (VERSION 3.8)

set(MY_PROJECT List_STL )

project ("${MY_PROJECT}")

add_executable ("${MY_PROJECT}" "List.cpp" "List.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ${MY_PROJECT} PROPERTY CXX_STANDARD 20)
endif()