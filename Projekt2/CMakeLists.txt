cmake_minimum_required(VERSION 3.16)

project(project_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(project_2 src/main.cpp src/Deck.cpp include/Deck.h src/Player.cpp include/Player.h src/Dealer.cpp include/Dealer.h src/Card.cpp include/Card.h src/Game.cpp include/Game.h)

include_directories(include)
