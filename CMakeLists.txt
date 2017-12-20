cmake_minimum_required(VERSION 3.9)
project(PORR)

set(CMAKE_CXX_STANDARD 14)

add_executable(PORR main.cpp Text.cpp Text.h cmake-build-debug/Controller.cpp cmake-build-debug/Controller.h)