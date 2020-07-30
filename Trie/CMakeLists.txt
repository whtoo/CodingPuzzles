cmake_minimum_required(VERSION 3.1)
project(Trie)

set(CMAKE_CXX_STANDARD 11)
aux_source_directory(. DIR_SRCS)
add_executable(Test main.cpp)