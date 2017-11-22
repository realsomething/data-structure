cmake_minimum_required(VERSION 3.8)
project(LinkStack)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LinkStack.h)
add_executable(LinkStack ${SOURCE_FILES})