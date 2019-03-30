#ifndef KURIER_H
#define KURIER_H
#include "Osoba.h"
#include <iostream>
class Kurier : public Osoba {
public:
	Kurier(std::string name) : Osoba(name)
	{
		std::cout << "konstruktor k" << std::endl;
	}
	virtual ~Kurier()
	{};


};


#endif