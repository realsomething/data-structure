cmake_minimum_required(VERSION 3.8)
project(LinkQueue)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LinkQueue.h)
add_executable(LinkQueue ${SOURCE_FILES})