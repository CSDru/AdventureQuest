cmake_minimum_required(VERSION 3.24)
project(AdventureQuest)

set(CMAKE_CXX_STANDARD 17)

add_executable(AdventureQuest main.cpp Item.cpp Item.h Player.cpp Player.h Adventure.cpp Adventure.h)
