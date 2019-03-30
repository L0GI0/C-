#ifndef POSTAC_H
#define POSTAC_H
#include "Osoba.h"
#include "Pilot.h"
#include "Kurier.h"
#include <iostream>

class Postac : public Osoba {
public:
	Postac(std::string name) : Osoba(name)
	{
		std::cout << "konstruktor P" << std::endl;
	};
	virtual ~Postac()
	{};
	void PrzedstawSie()
	{
		if (dynamic_cast<Pilot*>(this) != NULL)
		{
			std::cout << "Nazywam sie " <<this->imie << " jestem pilotem" << std::endl;
		}
		else if (dynamic_cast<Kurier*>(this) != NULL)
		{
			std::cout << "Nazywam sie " << this->imie << " jestem chlopcem na posylki" << std::endl;
		}
		else
		{
			std::cout << "Nazywam sie " << this->imie << std::endl;
		}
	};
};


#endif