#include "Fun.h"
#include <iostream>

float Fun::_average;
int Fun::_number_of_rationals;
float Fun::_sum;

using namespace std;

int Nwd(int a, int b){
	int c;
	while(b != 0){
		c = a%b;
		a = b;
		b = c;
	}
	return a;		
}

 Rational Fun::Add(const Rational & rational1, const Rational & rational2){
	Rational tmp;
	tmp._licznik = (rational1._licznik * rational2._mianownik) + (rational2._licznik * rational1._mianownik);
	tmp._mianownik = rational1._mianownik * rational2._mianownik;
	int nwd = Nwd(tmp._licznik, tmp._mianownik);
	tmp._licznik /= nwd;
	tmp._mianownik /= nwd;

	return tmp;
};

Rational Fun::Multiply(const Rational & rational1, const Rational & rational2){
	Rational tmp;
	tmp._licznik = rational1._licznik * rational2._licznik;
	tmp._mianownik = rational1._mianownik * rational2._mianownik;
	int nwd = Nwd(tmp._licznik, tmp._mianownik);
	tmp._licznik /= nwd;
	tmp._mianownik /= nwd;
	return tmp;
};

Rational Fun::Divide(const Rational & rational1, const Rational & rational2){
	Rational tmp;
	tmp._licznik = rational1._licznik * rational2._mianownik;
	tmp._mianownik = rational1._mianownik * rational2._licznik;
	int nwd = Nwd(tmp._licznik, tmp._mianownik);
	tmp._licznik /= nwd;
	tmp._mianownik /= nwd;
	return tmp;
}

void Fun::Average(const Rational &rational){
	++_number_of_rationals;
	_sum +=  float(rational._licznik ) / rational._mianownik;
	_average = _sum / _number_of_rationals;
}

float Fun::Average(){
	return (float) _average;
}


/*
while(b != 0)
c = a%b;
a = b
b=c
}
return a;
*/