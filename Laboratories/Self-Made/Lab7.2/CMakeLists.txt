cmake_minimum_required(VERSION 2.6)

project(Program CXX)

set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0  -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O0")
set(SRC 
	Main-6.cpp
	lab08.h
	Miotacz.h
	Type.h
	Type.cpp
	Miotacz.cpp
	)

add_compile_options(-Wall -g -pedantic -pedantic-errors -Wextra)	

add_executable(Program ${SRC})
