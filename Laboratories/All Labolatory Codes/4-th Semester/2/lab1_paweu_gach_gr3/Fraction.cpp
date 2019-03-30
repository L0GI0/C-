#include "Main.h"

using namespace std;

Fraction::Fraction(int nominator, int denominator): _nominator(nominator), _denominator(denominator) {
	cout << "Creating: " << _nominator << "/" << _denominator << "\n";
}

void Fraction::Simplify() {
	if (_denominator % _nominator)
		return;
	_nominator = _denominator/_nominator;
	// _denominator;
}

Fraction::~Fraction() {
	cout << "Destroying: " << _nominator << "/" << _denominator << "\n";
}

ostream& operator << (ostream& out, const Fraction& num) {
	return out << num.GetNom() << "/" << num.GetDen();
}