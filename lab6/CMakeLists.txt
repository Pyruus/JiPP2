cmake_minimum_required(VERSION 3.16)

project(lab6)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab6 src/main.cpp src/Vector.cpp include/Vector.h src/Imaginary.cpp include/Imaginary.h src/Node.cpp include/Node.h)

include_directories(include)