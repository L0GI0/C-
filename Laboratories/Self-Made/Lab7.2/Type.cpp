#include "Type.h"

void ExceptType1::PrzedstawSie() const{
	// Nazywam sie Except1
	std::cout << "Nazywam sie Except1 " << std::endl;
}

void ExceptType2::PrzedstawSie() const{
	// Nazywam sie Except1
	std::cout << "Nazywam sie Except2 " << std::endl;
}

void ExceptType3::PrzedstawSie() const{
	// Nazywam sie Except1
	std::cout << "Nazywam sie Except3 " << std::endl;
}

void ExceptType4::PrzedstawSie() const{
	// Nazywam sie Except1
	std::cout << "Nazywam sie Except4 " << std::endl;
}

std::string ExceptType1::getName() const{
	return "Except1";
}

std::string ExceptType2::getName() const{
	return "Except2";
}

std::string ExceptType3::getName() const{
	return "Except3";
}

std::string ExceptType4::getName() const{
	return "Except4";
}

Type::~Type(){

}