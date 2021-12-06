cmake_minimum_required(VERSION 3.16)

project(lab7)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab7 src/main.cpp src/Figure.cpp include/Figure.h src/Rectangle.cpp include/Rectangle.h src/Circle.cpp include/Circle.h)

include_directories(include)