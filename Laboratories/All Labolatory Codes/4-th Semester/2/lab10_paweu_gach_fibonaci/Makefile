CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: Lab11

Lab11: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f Lab11 $(OBJ) $(DEP) Lab11.exe

run: Lab11
	@./Lab11
valgrind: Lab11
	@valgrind --leak-check=full ./Lab11
gdb: Lab11
	@gdb ./Lab11
-include $(DEP)
