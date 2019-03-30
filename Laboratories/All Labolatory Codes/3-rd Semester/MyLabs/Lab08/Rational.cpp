#include "Rational.h"
#include <iostream>


using namespace std;

void Rational::Print() const{
	if(_mianownik != 1)
	std::cout << _licznik << "/" << _mianownik << std::endl;
	else cout << _licznik << endl;
}

Rational::Rational(){};


