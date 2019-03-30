#include "Trojkat.h"
#include <math.h>

void Trojkat::wypisz(std::ostream & o)const{
	// Trojkat o bokach: 3 2 4
	o << "Trojkat o bokach: " << _a << " " << _b << " "  << _c << std::endl;
}

float Trojkat::polePow()const{
	// sqrt( x(x-a)(x-b)(x-c) )
	float x = (_a + _b + _c)/2;
	return sqrt( x * (x - _a) * (x - _b) * (x - _c));
}