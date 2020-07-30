cmake_minimum_required(VERSION 3.1)
project(Test)

add_subdirectory(LFU)
add_subdirectory(LRU)

include_directories(LFU)
include_directories(LRU)

set(CMAKE_CXX_STANDARD 11)
aux_source_directory(. DIR_SRCS)
add_executable(Test main.cpp)
target_link_libraries(Test LRU)
target_link_libraries(Test LFU)
