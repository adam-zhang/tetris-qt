cmake_minimum_required(VERSION 2.8)
project(tetris)
set(sources main.cpp
	tools.cpp
	Piece.cpp)
add_executable(${PROJECT_NAME} ${sources})
target_link_libraries(${PROJECT_NAME} ncurses)
