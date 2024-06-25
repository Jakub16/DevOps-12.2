cmake_minimum_required(VERSION 3.10)

project(MyApp)

# Ustawienie standardu C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_library(sum_lib src/sum.cpp)
target_include_directories(sum_lib PUBLIC include)

add_executable(main src/main.cpp)
target_link_libraries(main sum_lib)

add_executable(sum_test tests/test.cpp)
target_link_libraries(sum_test GTest::GTest GTest::Main sum_lib)
add_test(NAME sum_test COMMAND sum_test)