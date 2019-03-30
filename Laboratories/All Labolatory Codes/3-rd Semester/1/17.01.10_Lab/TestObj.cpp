#include <iostream>
#include "TestObj.h"

TestObj::TestObj(): _name(NULL) {
	std::cout << "TestObj::TestObj()\n";
}

TestObj::TestObj(const char* string): _name(string) {
	std::cout << "TestObj::TestObj(\"" << _name << "\")\n";
}

TestObj::TestObj(const TestObj& toCopy): _name(toCopy._name) {
	std::cout << "TestObj::TestObj(TestObj(\"" << _name << "\"))\n";
}

TestObj::~TestObj() {
	std::cout << "~TestObj(): ";
	if (_name)
		std::cout << _name << "\n";
	else
		std::cout << "default" << "\n";
}

const char* TestObj::name() const {
	return (_name) ? _name : "default";
}
