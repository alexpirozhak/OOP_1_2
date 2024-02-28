cmake_minimum_required(VERSION 3.27)
project(OOP_lab_1_2)

set(CMAKE_CXX_STANDARD 23)

add_executable(OOP_lab_1_2 main.cpp
        Triangle.cpp
        Triangle.h
        Google_tests/test.cpp)

add_subdirectory(Google_tests)