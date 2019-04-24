#include "Typ.h"

typ4::typ4(ObiektMiotajacy * o):m_o(o){

}

typ4::typ4(){}


char typ1::getType() const{
	return '1';
}

char typ2::getType() const{
	return '2';
}

char typ3::getType() const{
	return '3';
}

char typ4::getType() const{
	return '4';
}


void typ1::PrzedstawSie() const{
	std::cout << "Nazywam sie 1" << std::endl;
}

void typ2::PrzedstawSie() const{
	std::cout << "Nazywam sie 2" << std::endl;
}

void typ3::PrzedstawSie() const{
	std::cout << "Nazywam sie 3" << std::endl;
}

void typ4::PrzedstawSie() const{
	std::cout << "Nazywam sie 4" << std::endl;
}