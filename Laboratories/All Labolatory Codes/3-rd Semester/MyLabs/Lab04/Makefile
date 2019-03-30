CXX=g++
CXXFLAGS = -O0 -DNDEBUG
LIBS = -lm
src=$(wildcard *.cpp)
obj=$(src:.cpp=.o)

myprog: $(obj)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHOST: clean
clean: 
	rm -f $(obj) myprog
