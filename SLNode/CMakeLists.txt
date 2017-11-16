cmake_minimum_required(VERSION 3.8)
project(SLNode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp SLNode.h)
add_executable(SLNode ${SOURCE_FILES})