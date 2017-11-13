cmake_minimum_required(VERSION 3.8)
project(SeqStack)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp SeqStack.h)
add_executable(SeqStack ${SOURCE_FILES})