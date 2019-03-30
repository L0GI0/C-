CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: MaszynaStanow

MaszynaStanow: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f MaszynaStanow $(OBJ) $(DEP)

run: MaszynaStanow
	@./MaszynaStanow
valgrind: MaszynaStanow
	@valgrind --leak-check=full ./MaszynaStanow
gdb: MaszynaStanow
	@gdb ./MaszynaStanow
-include $(DEP)
