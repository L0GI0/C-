CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: Sequence

Sequence: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f Sequence $(OBJ) $(DEP) Sequence.exe

run: Sequence
	@./Sequence
valgrind: Sequence
	@valgrind --leak-check=full ./Sequence
gdb: Sequence
	@gdb ./Sequence
-include $(DEP)
