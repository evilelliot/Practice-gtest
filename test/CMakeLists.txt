cmake_minimum_required(VERSION 2.6)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "/home/ocaranza/Documentos/C++/Mygtest/test/bin")


find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(executeTests basic_tests.cpp ../src/consts.cpp)
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)