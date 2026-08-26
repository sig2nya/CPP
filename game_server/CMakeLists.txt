cmake_minimum_required(VERSION 3.16)

project(game_server)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(game_server
    src/main.cpp
    src/net/socket.cpp
)

target_include_directories(game_server
    PRIVATE
    include
)
