.SUFFIXES:
    MAKEFLAGS += -r
.PHONY: all clean
all : prog.exe
prog.exe : $(patsubst %.cpp, %.o, $(wildcard *.cpp))
%.exe:
	g++ -o $@ $^
clean:
	rm -rf *.o *.exe *.dep
%.o : %.cpp %.dep
	g++ -Wall -g -c -o $@ $<
%.dep : %.cpp
	g++ -MM -MT ${@:.dep=.o} -MF $@ $< 
include $(wildcard *.dep)
.SECONDARY:
