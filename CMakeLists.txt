cmake_minimum_required(VERSION 3.20)

project(Battleship VERSION 1.0 LANGUAGES CXX)

add_executable(battleship
    main.cpp
    src/board.cpp
)

target_include_directories(battleship PUBLIC include)