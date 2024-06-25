cmake_minimum_required(VERSION 3.10)

project(MyApp)

set(SOURCE_FILES src/main.cpp)

add_executable(myapp ${SOURCE_FILES})

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(TEST_SOURCE_FILES tests/test.cpp)
add_executable(runTests ${TEST_SOURCE_FILES})
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

add_test(NAME runTests COMMAND runTests)
