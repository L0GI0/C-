#pragma once
#include "Kanapka.h"

class KanapkaZSerem:  virtual public Kanapka
{
public:
	KanapkaZSerem(const int liczbaPlastrowSera1, const double gruboscPlastru1, const float cena1 ):Kanapka(cena1, "Kanapka z serem"), liczbaPlastrowSera(liczbaPlastrowSera1), gruboscPlastru(gruboscPlastru1)
	{
		std::cout << "klade ser" << std::endl;
		
	};
	void wypisz()const{
		std::cout << Kanapka::name << "		" << Kanapka::cena << " PLN" << std::endl; 
		std::cout << "	(2 x " << KanapkaZSerem::gruboscPlastru << "mm.)" << std::endl;
	};
protected:

	int liczbaPlastrowSera;
	double gruboscPlastru;


};


