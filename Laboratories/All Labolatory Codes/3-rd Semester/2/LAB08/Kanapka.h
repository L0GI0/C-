#pragma once
#include <iostream>

class Kanapka
{
public:
	Kanapka(){};
	Kanapka(const float cena1, const std::string name1 ):name(name1), cena(cena1){
		std::cout << "Kroje kromke" << std::endl;
	};
	virtual void wypisz()=0;
	
	std::string name;
	float cena;

};