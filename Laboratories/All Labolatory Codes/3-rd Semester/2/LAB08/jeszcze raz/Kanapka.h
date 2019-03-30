#pragma once

#include <iostream>
class Kanapka
{
public:
	Kanapka(const float cena1): cena(cena1)
	{
		std::cout << "Kroje kromke" << std::endl;
	};
	virtual ~Kanapka(){};

	virtual void wypisz()=0;

	float cena;

};