CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: Mapa

Mapa: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f Mapa $(OBJ) $(DEP)

run: Mapa
	@./Mapa
valgrind: Mapa
	@valgrind --leak-check=full ./Mapa
gdb: Mapa
	@gdb ./Mapa
-include $(DEP)
