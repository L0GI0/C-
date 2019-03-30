CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: StatkiDwa

StatkiDwa: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f StatkiDwa $(OBJ) $(DEP)

run: StatkiDwa
	@./StatkiDwa
valgrind: StatkiDwa
	@valgrind --leak-check=full ./StatkiDwa
gdb: StatkiDwa
	@gdb ./StatkiDwa
-include $(DEP)
