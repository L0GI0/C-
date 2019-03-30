CXX=g++
#flagi potrzebne do zaleznosci 
DEP_FLAGS=-MMD -MP
CXXFLAGS+=-g -Wall $(GXX_FLAGS) $(DEP_FLAGS)


#nazwa pliku wynikowego
NAME=magiel


SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@

clean:
	@rm -f $(NAME) $(OBJ) $(DEP)

-include $(DEP)

.PHONY: clean run mem gdb

mem: 
	valgrind --leak-check=full ./$(NAME)
gdb:
	gdb ./$(NAME)
run:
	./$(NAME)
