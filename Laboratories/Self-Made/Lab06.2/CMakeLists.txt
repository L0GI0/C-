cmake_minimum_required(VERSION 2.6)

project(Program CXX)

set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0  -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O0")
set(SRC 
	lab06.cpp
	Shape.h
	Circle.h
	Rectangle.h
	ColorFilledShape.h
	ColorBorderShape.h
	)

add_compile_options(-Wall -g -pedantic -pedantic-errors -Wextra)	

add_executable(Program ${SRC})
