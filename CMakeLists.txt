cmake_minimum_required(VERSION 3.13)
project(Intent)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib)

add_executable(Intent main.cpp CIntentRecognizer.cpp CIntentRecognizer.h test.cpp)
target_link_libraries(Intent gtest gtest_main)