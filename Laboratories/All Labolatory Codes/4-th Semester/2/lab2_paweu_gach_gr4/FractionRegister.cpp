#include <iostream>
#include "Main.h"

using namespace std;

Fraction** FractionRegister::_fracTab = NULL;
int FractionRegister::_fracCount = 0;

FractionRegister::FractionRegister() {

}

void FractionRegister::AddToRegister(Fraction* addr) {
	Fraction** oldTab = _fracTab;
	_fracTab = new Fraction*[_fracCount+1];
	for (int i=0; i < _fracCount; ++i)
		_fracTab[i] = oldTab[i];
	_fracTab[_fracCount] = addr;
	if (_fracCount++)
		delete[] oldTab;
}

FractionRegister& FractionRegister::operator << (Fraction& fraction) {
	AddToRegister(&fraction);
	return *this;
}

FractionRegister& FractionRegister::operator << (const FractionPointer& pointer) {
	AddToRegister(pointer.GetAddr());
	return *this;
}

void* FractionRegister::operator new (std::size_t count) {
	static FractionRegister _reg;
	return &_reg;
}

FractionRegister::~FractionRegister() {
	if (_fracCount) {
		delete[] _fracTab;
	}
}

ostream& operator << (ostream& output, const FractionRegister& reg) {
	for (int i=0; i < reg.FracCount(); ++i)
		output << reg.FracTab()[i] << " ";
	return output;
}