cmake_minimum_required(VERSION 3.15)
project(L4)

set(CMAKE_CXX_STANDARD 14)

add_executable(L4 main.cpp Figure.h Hexagon.h Pentagon.h Rhombus.h)