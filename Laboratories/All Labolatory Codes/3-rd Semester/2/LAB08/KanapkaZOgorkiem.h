#pragma once
#include "Kanapka.h"

class KanapkaZOgorkiem: virtual public Kanapka
{
public:
	KanapkaZOgorkiem(const int liczbaPlastrowOgorka1, const float cena1 ):Kanapka(cena1, "Kanapka z ogorkiem "), liczbaPlastrowOgorka(liczbaPlastrowOgorka1)
	{
		std::cout << "klade ogorka" << std::endl;
	};
	void wypisz()const
	{
		std::cout << Kanapka::name << "		" << Kanapka::cena << " PLN" << std::endl; 
		std::cout << "	(szt. "<< liczbaPlastrowOgorka  << ")" << std::endl;
	};
protected:

	int	liczbaPlastrowOgorka;


};