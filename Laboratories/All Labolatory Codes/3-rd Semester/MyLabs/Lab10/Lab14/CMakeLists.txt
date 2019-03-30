cmake_minimum_required(VERSION 2.6)

project(Program CXX)

set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0  -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O0")
set(SRC 
	main.cpp
	Point2D.h
	Point2D.cpp
	Point2DAverage.h
	Point2DAverage.cpp
	)

add_executable(Program ${SRC})