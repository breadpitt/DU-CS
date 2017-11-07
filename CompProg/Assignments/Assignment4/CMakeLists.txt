cmake_minimum_required(VERSION 3.8)
project(assignment4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Dwelling.cpp Dwelling.h House.cpp House.h Room.h Apartment.cpp Apartment.h Dwelling.cpp House.cpp Apartment.cpp Room.cpp)
add_executable(assignment4 ${SOURCE_FILES})