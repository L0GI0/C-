.SUFFIXES:
    MAKEFLAGS += -r
.PHONY: all clean
all : lab10.exe
lab10.exe : $(patsubst %.cpp, %.o, $(wildcard *.cpp))
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
