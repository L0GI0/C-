#include <iostream>

#ifdef LIB_TEST
	#include "lib.h"
#endif

int main() {
	std::cout << "It works" << std::endl;

#ifdef LIB_TEST
	foo();
#endif

#ifdef DEBUG
	std::cout << "It works (DEBUG)" << std::endl;
#endif
}
