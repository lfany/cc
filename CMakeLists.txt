cmake_minimum_required(VERSION 3.8)
project(cc)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Test.cpp Test.h)
add_executable(cc ${SOURCE_FILES})