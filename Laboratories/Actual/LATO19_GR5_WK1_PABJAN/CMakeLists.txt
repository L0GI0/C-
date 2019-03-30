cmake_minimum_required(VERSION 2.6)

project(Program CXX)

set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0  -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O0")
set(SRC 
	Figury.cpp
	Ksztalt.cpp
	Ksztalt.h
	Kwadrat.cpp
	Kwadrat.h
	Kolo.cpp
	Kolo.h
	Trojkat.cpp
	Trojkat.h
	)

add_executable(Program ${SRC})