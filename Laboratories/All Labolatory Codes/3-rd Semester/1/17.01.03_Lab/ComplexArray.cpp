#include <iostream>
#include "ComplexNumber.h"
#include "ComplexArray.h"

ComplexArray::ComplexArray(int size): _size(size) {
	_tab = new ComplexNumber*[_size];
	for (int i=0; i < _size; ++i)
		_tab[i] = new ComplexNumber(1);
}

ComplexArray::~ComplexArray() {
	for (int i=0; i < _size; ++i)
		delete _tab[i];
	delete[] _tab;
}

ComplexNumber& ComplexArray::At (int at) {
	return *(_tab[at]);
}

void ComplexArray::Set(int at, const ComplexNumber& number) {
	_tab[at]->Set(number);
}

void ComplexArray::Print() const {
	std::cout << "Array:\n";
	for (int i=0; i < _size; ++i) {
		std::cout << i+1 << ": ";
		_tab[i]->Print();
	}
}