cmake_minimum_required(VERSION 3.8)
project(SeqQueue)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp SeqQueue.h)
add_executable(SeqQueue ${SOURCE_FILES})