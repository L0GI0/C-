#include <iostream>
#include "Main.h"

using namespace std;

FractionPointer::FractionPointer(Fraction* pointer): _frac(pointer) { 

}

FractionPointer::FractionPointer(const FractionPointer& copy) {
	_frac = copy._frac;
}

FractionPointer::FractionPointer(FractionPointer& copy) {
	_frac = copy._frac;
	copy._frac = NULL;
}

FractionPointer& FractionPointer::operator = (FractionPointer& copy) {
	if (this == &copy)
		return *this;
	if (_frac)
		delete _frac;
	_frac = copy._frac;
	copy._frac = NULL;
	return *this;
}

ostream& operator << (ostream& output, const FractionPointer& pointer) {
	if (pointer.GetAddr()) {
		output << "[pointing to address=" << pointer.GetAddr() << " value=" << (*pointer).Numerator() << "/" << (*pointer).Denominator() << "]";
	}
	else
		output << "[pointing to 0]";
	return output;
}

FractionPointer::~FractionPointer() {
	if(_frac) {
		delete _frac;
		_frac = NULL;
	}
}