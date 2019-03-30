#pragma once
#include "Kanapka.h"

class KanapkaZSerem:virtual public Kanapka
{
public:
	KanapkaZSerem(const int liczbaPlastrowSera1, const double gruboscPlastru1, const float cena1):Kanapka(cena1),  liczbaPlastrowSera(liczbaPlastrowSera1), gruboscPlastru(gruboscPlastru1)
	{
		std::cout << "klade ser" << std::endl;
	};
	virtual ~KanapkaZSerem(){};
	void wypisz()
	{
		std::cout << "Kanapka z serem              " << cena << " PLN" << std::endl;
	};

protected:
	int liczbaPlastrowSera;
	double gruboscPlastru;

};