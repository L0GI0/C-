#pragma once 
#include "Rational.h"
#include <iostream>
class Complex{

public:
	
	Complex(double Re = 0, double Im = 0): _Re(Re), _Im(Im){};
	static double Modulo(const Complex & complexNumber) ;
	void Print()const;
	explicit operator double()const{
		return _Re;
	}
	Complex operator+(const Complex x)const;
	Complex operator*(const Complex & num )const;
	Complex operator-(const Complex & num )const;
	Complex operator-();
	double Im()const{
		return _Im;
	}
	Complex(const Rational & r);

private:

double	_Re;
double	_Im;
};

