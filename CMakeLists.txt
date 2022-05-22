cmake_minimum_required(VERSION 3.22)
project(ti2)

set(CMAKE_CXX_STANDARD 20)

add_executable(ti2 src/main.cpp src/Operations.cpp src/Operations.h)
