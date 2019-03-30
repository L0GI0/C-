#pragma once
#include "Kanapka.h"

#include "KanapkaZOgorkiem.h"

#include "KanapkaZMielonka.h"

#include "KanapkaZSerem.h"

class KanapkaWypasiona:public KanapkaZOgorkiem, public KanapkaZMielonka, public KanapkaZSerem
{
public:
	KanapkaWypasiona(const int liczbaPlastrowOgorka1, const float wagaMielonki1, const int liczbaPlastrowSera1, const double gruboscPlastru1, const float cena1)
	:Kanapka(cena1),  KanapkaZOgorkiem(liczbaPlastrowOgorka1, cena1), KanapkaZMielonka(wagaMielonki1, cena1), KanapkaZSerem(liczbaPlastrowSera1, gruboscPlastru1, cena1)
	{
		//std::cout << "klade wypasiona" << std::endl;
	};
	virtual ~KanapkaWypasiona(){};
	void wypisz()
	{
		std::cout << "Kanapka z wypasiona              " << cena << " PLN" << std::endl;
		std::cout << "	(ogorek: "<< KanapkaZOgorkiem::liczbaPlastrowOgorka<< " szt.," << std::endl;
	};

private:


};