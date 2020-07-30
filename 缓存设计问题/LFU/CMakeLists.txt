cmake_minimum_required(VERSION 3.1)
project(LFU)

set(CMAKE_CXX_STANDARD 11)
aux_source_directory(. DIR_SRCS)
add_library(LFU LFU.cpp)