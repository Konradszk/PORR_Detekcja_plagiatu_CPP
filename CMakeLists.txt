cmake_minimum_required(VERSION 3.9)
project(PORR)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-fopenmp")
add_executable(PORR main.cpp Text.cpp Text.h Controller.cpp Controller.h)