#include "Kwadrat.h"


void Kwadrat::wypisz(std::ostream & o)const{
	// Kwadrat o boku:
	o << "Kwadrat o boku:  " << _a << std::endl;
}

float Kwadrat::polePow()const{
	return (_a * _a);
}
