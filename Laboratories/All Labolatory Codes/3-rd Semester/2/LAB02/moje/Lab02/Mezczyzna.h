#ifndef MEZCZYZNA_H
#define MEZCZYZNA_H
#include "Osoba.h"
#include <iostream>
class Mezczyzna: public Osoba {
public:
	Mezczyzna(const std::string name) : Osoba(name)
	{
		std::cout << "konstruktor m" << std::endl;
	}
	virtual ~Mezczyzna()
	{};


};


#endif