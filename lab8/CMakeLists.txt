cmake_minimum_required(VERSION 3.16)

project(lab8)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab8 src/main.cpp src/Note.cpp include/Note.h src/TextNote.cpp include/TextNote.h src/ListNote.cpp include/ListNote.h src/NoteDirector.cpp include/NoteDirector.h)

include_directories(include)