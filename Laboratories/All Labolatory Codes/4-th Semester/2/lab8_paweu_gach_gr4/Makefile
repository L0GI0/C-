CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: Wyjatki

Wyjatki: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f Wyjatki $(OBJ) $(DEP)

run: Wyjatki
	@./Wyjatki
valgrind: Wyjatki
	@valgrind --leak-check=full ./Wyjatki
gdb: Wyjatki
	@gdb ./Wyjatki
-include $(DEP)
