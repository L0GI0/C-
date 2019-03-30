CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g
#Dependency for the ouotpu file
DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

#SRC=main.cpp fun.cpp
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

#Add dependency generation to the compiler options 
CXXFLAGS+=$(DEP_FLAGS)

all: program

program: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f program $(OBJ) $(DEP)

run: program
	./program
-include $(DEP)
