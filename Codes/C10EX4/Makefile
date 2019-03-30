sales.exe: namespace.o main.o
	gcc -o sales.exe namespace.o main.o
namespace.o: namespace.h namespace.cpp
	gcc -c namespace.cpp
main.o: namespace.h main.cpp
	gcc -c main.cpp
