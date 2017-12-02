cmake_minimum_required(VERSION 3.8)
project(paper_scissor_rock_game)

find_package(Boost)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(paper_scissor_rock_game ${SOURCE_FILES})