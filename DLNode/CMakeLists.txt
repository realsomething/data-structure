cmake_minimum_required(VERSION 3.8)
project(DLNode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp DLNode.h)
add_executable(DLNode ${SOURCE_FILES})