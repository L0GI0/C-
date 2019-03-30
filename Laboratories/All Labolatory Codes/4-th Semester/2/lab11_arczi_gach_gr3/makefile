CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

NAME=Lista

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: program

program: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $(NAME)

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f $(NAME) $(OBJ) $(DEP)

run: program
	@./$(NAME)
valgrind: program
	@valgrind --leak-check=full ./$(NAME)
-include $(DEP)
