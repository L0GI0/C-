run: main.o ciagi.o
	g++ main.o ciagi.o -o $@
main.o: main.cpp 
	g++ -c main.cpp 
ciagi.o: ciagi.cpp ciagi.h
	g++ -c ciagi.cpp   
.PHONY: clean
clean:
	rm -f *.o run