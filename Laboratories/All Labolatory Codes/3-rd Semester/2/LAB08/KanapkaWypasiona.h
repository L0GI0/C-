#pragma once
#include "KanapkaZOgorkiem.h"
#include "KanapkaZMielonka.h"
#include "KanapkaZSerem.h"

class KanapkaWypasiona: public KanapkaZOgorkiem, public KanapkaZMielonka, public KanapkaZSerem
{
public:
	KanapkaWypasiona(const int liczbaPlastrowOgorka1, const float wagaMielonki1, const int liczbaPlastrowSera1, const double gruboscPlastru1, const float cena1 )
	:Kanapka(cena1, "Kanapka wypasiona"), KanapkaZOgorkiem(liczbaPlastrowOgorka1,cena1), KanapkaZMielonka(wagaMielonki1, cena1), KanapkaZSerem(liczbaPlastrowSera1,gruboscPlastru1, cena1)
	{};
	void wypiszWypasiona(){};
	void wypisz()const
	{

		std::cout << Kanapka::name << "		" << Kanapka::cena << " PLN" << std::endl; 
		std::cout << "	(ogorek: " << KanapkaZOgorkiem::liczbaPlastrowOgorka << "szt.," << std::endl;
		std::cout << "	mielonka: " << KanapkaZMielonka::wagaMielonki << "g.," << std::endl;
		std::cout << "	ser: 2 x " << KanapkaZSerem::gruboscPlastru << "mm.)" << std::endl;
	};
private:



};


