CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: Mechaniczne

Mechaniczne: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f Mechaniczne $(OBJ) $(DEP)

run: Mechaniczne
	@./Mechaniczne
valgrind: Mechaniczne
	@valgrind --leak-check=full ./Mechaniczne
gdb: Mechaniczne
	@gdb ./Mechaniczne
-include $(DEP)
