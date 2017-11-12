cmake_minimum_required(VERSION 3.8)
project(SeqList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp SeqList.h)
add_executable(SeqList ${SOURCE_FILES})