cmake_minimum_required(VERSION 2.6)
 
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(MathTests MathTests.cc ../MathLib.cc)
target_link_libraries(MathTests ${GTEST_LIBRARIES} pthread)