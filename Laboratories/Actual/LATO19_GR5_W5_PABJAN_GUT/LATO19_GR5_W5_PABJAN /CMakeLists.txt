cmake_minimum_required(VERSION 2.6)

project(Program CXX)

set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0  -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O0")
set(SRC 
	printtest.cpp
	MyPrinter.h
	MyPrinter.cpp
	MyText.h
	MyLine.h
	MyPrinter.h
	AttColor.h
	AttFormat.h
	Printable.h
	)

add_executable(Program ${SRC})