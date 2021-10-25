cmake_minimum_required(VERSION 3.16)

project(lab4)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab4 src/main.cpp src/MyFirstClass.cpp src/Punkt.cpp include/Punkt.h src/Prostopadloscian.cpp include/Prostopadloscian.h src/Kula.cpp include/Kula.h)

include_directories(include)