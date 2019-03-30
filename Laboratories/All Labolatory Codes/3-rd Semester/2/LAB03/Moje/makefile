.SUFFIXES:
    MAKEFLAGS += -r
.PHONY: all clean
all : Lab04
Lab04 : $(patsubst %.cpp, %.o, $(wildcard *.cpp))
%:
	g++ -o $@ $^
clean:
	rm -rf *.o *.exe *.dep Lab04
%.o : %.cpp %.dep
	g++ -Wall -g -c -o $@ $<
%.dep : %.cpp
	g++ -MM -MT ${@:.dep=.o} -MF $@ $< 
include $(wildcard *.dep)
.SECONDARY:
