CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: Magiel

Magiel: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f Magiel $(OBJ) $(DEP)

run: Magiel
	@./Magiel
valgrind: Magiel
	@valgrind --leak-check=full ./Magiel
gdb: Magiel
	@gdb ./Magiel
-include $(DEP)
