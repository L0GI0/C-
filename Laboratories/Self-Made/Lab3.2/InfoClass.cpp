#include "InfoClass.h"

InfoClass::InfoClass(std::string name):_name(name), _pCount(1){
		// Tworze obiekt InfoClass: info = InfoAAA
		std::cout << "++ Tworzenie obiektu InfoClass: info = " << _name << std::endl; 
	}

std::string InfoClass::info()const{
	// == info = InfoXXX
	return  ("info == " +  _name);
}


InfoClass::~InfoClass(){
	// Usuwam obiekt InfoClass: info = InfoBBB
	std::cout << "++ Usuwam obiekt InfoClass: info = " << _name << std::endl;
}

void InfoClass::info(std::string name){
	_name = name;
}

std::string InfoSuperClass::info()const{
	// info = InfoSSS, num = 2019
	return "info = " + _name + ", num = " + std::to_string(_num); 
}

int InfoClass::getPCount(){
	return _pCount;
}

void InfoClass::increasePCount(){
	++_pCount;
}


void InfoClass::decreasePCount(){
	--_pCount;
}