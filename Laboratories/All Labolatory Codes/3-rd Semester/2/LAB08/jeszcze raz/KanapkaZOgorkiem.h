#pragma once
#include "Kanapka.h"

class KanapkaZOgorkiem: virtual public Kanapka
{
public:
	KanapkaZOgorkiem(const int liczbaPlastrowOgorka1, const float cena1):Kanapka(cena1), liczbaPlastrowOgorka(liczbaPlastrowOgorka1)
	{
		std::cout << "klade ogorka" << std::endl;
	};
	virtual ~KanapkaZOgorkiem(){};
	void wypisz()
	{
		std::cout << "Kanapka z ogorkiem              " << cena << " PLN" << std::endl;
	};

protected:
	int liczbaPlastrowOgorka;

};