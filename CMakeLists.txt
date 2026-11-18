cmake_minimum_required(VERSION 4.3)
project(Tycoon)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tycoon
        main.cpp
        Round.cpp
        Round.h
        TycoonGame.cpp
        TycoonGame.h
        StartingMenu.cpp
        StartingMenu.h
)
