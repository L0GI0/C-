CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: Mortal

Mortal: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f Mortal $(OBJ) $(DEP)

run: Mortal
	@./Mortal
valgrind: Mortal
	@valgrind --leak-check=full ./Mortal
gdb: Mortal
	@gdb ./Mortal
-include $(DEP)
