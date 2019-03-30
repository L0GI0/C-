#include "Kolo.h"


void Kolo::wypisz(std::ostream & o)const{
	// Kolo o promieniu: 3
	o << "Kolo o promieniu:  " << _r << std::endl;
}

float Kolo::polePow()const{
	return (_r * _r) * 3.1415;
}