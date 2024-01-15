cmake_minimum_required(VERSION 3.19)
project(linear_list)

set(CMAKE_CXX_STANDARD 14)

add_executable(linear_list main.cpp sequence_list.h sequence_list.cpp linked_list.h linked_list.cpp)