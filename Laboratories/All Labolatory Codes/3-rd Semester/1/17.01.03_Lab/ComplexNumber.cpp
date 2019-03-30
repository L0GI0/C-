#include <iostream>
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(int re): _re(re), _im(0) {

}

ComplexNumber::ComplexNumber(int re, int im): _re(re), _im(im) {

}

void ComplexNumber::Print() const {
	std::cout << _re << " + " << _im << "i" << std::endl;
}

void ComplexNumber::Set(const ComplexNumber& source) {
	_re = source._re;
	_im = source._im;
}

ComplexNumber& ComplexNumber::Add(const ComplexNumber& added) {
	_re = _re + added._re;
	_im = _im + added._im;
	return *this;
}
