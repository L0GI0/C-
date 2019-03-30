#include <iostream>
#include "Main.h"

using namespace std;

Fraction::Fraction(int numerator, int denominator): _numerator(numerator), _denominator(denominator) {
	cout << "Creating " << _numerator << "/" << _denominator << endl;
}

ostream& operator << (ostream& output, const Fraction& fraction) {

	return output << "address=" << &fraction << " value=" << fraction.Numerator() << "/" << fraction.Denominator();
}

Fraction::~Fraction() {
	cout << "Destroying " << _numerator << "/" << _denominator << endl;
}