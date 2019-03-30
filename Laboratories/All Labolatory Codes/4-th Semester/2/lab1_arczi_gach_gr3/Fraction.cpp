#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int count, int denom) : _nom(count), _denom(denom), _ptrCounter(0) {
	cout << "Creating: " << _nom << "/" << _denom << endl;
}

Fraction::~Fraction() {
	cout << "Destroying: " << _nom << "/" << _denom << endl;
}

void Fraction::Print() const {
	cout << _nom << "/" << _denom << endl;
}

void Fraction::Multiply(const Fraction& fractionGiven) {
	this->_nom *= fractionGiven._nom;
	this->_denom *= fractionGiven._denom;
}

Fraction& Fraction::Simplify(Fraction* fraction) {
	int t = GCD(fraction->_nom, fraction->_denom);
	fraction->_nom /= t;
	fraction->_denom /= t;
	return *fraction;
}


ostream& operator<< (ostream& os, const Fraction& fraction) {
	return os << fraction.GetNom() << "/" << fraction.GetDenom();
}

int GCD(int a, int b) {
	int c;
	while (b != 0) {
		c = b;
		b = a % b;
		a = c;
	}
	return a;
}