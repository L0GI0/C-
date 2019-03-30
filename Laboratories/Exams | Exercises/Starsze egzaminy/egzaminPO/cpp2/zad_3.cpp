//uzup #1
#include <fstream>
#include <algorithm>
#include <iterator>
//\uzup #1

int main(int argc, char** argv) { 
    if(argc > 2) { 
        std::ifstream in(argv[1]); 
        std::ofstream out(argv[2]); 
	
	std::copy(/*uzup #2*/std::istreambuf_iterator<char>/*\uzup #2*/ (in), /*uzup #2*/std::istreambuf_iterator<char>(), std::ostream_iterator<char>/*\uzup #2*/(out));
    } 
}
