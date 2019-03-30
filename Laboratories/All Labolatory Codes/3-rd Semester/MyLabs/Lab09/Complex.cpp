#include "Complex.h"
#include <cmath>



void Complex::Print()const{
	if(_Im > 0)
		std::cout << _Re << "+" << _Im << "i" << std::endl;
	else if(_Im < 0 )
	 	std::cout << _Re << _Im << "i" << std::endl;
	else 
		std::cout << _Re << std::endl;
};

double Complex::Modulo(const Complex & num){
	return std::hypot(num._Im, num._Re);
}

Complex Complex::operator*(const Complex & num )const{
	Complex tmp;
	tmp._Im = (_Re * num._Re) - (_Im * num._Im); 
	tmp._Re = (_Re * num._Im) + (_Im * num._Re);
	return tmp;
}

Complex Complex::operator+(const Complex num)const{
	Complex tmp;
	 tmp._Re = _Re + num._Re;
	 tmp._Im = _Im + num._Im;
	return tmp;
}


Complex Complex::operator-(const Complex & num )const{
	Complex tmp;
	tmp._Re = _Re - num._Re;
	tmp._Im = _Im - num._Im;
	return tmp;
}

Complex Complex::operator-(){
	Complex tmp;
	tmp._Re = -_Re;
	tmp._Im = -_Im;
	return tmp; 
}

Complex::Complex(const Rational & r){
	_Re = r;
}
