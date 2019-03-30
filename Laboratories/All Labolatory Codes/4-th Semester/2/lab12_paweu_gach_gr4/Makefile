CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: Potegi

Potegi: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f Potegi $(OBJ) $(DEP) Potegi.exe

run: Potegi
	@./Potegi
valgrind: Potegi
	@valgrind --leak-check=full ./Potegi
gdb: Potegi
	@gdb ./Potegi
-include $(DEP)
