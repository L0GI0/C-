#pragma once
#include "Kanapka.h"

class KanapkaZMielonka: virtual public Kanapka
{
public:
	KanapkaZMielonka(const float wagaMielonki1, const float cena1 ):Kanapka(cena1, "Kanapka z mielonka"), wagaMielonki(wagaMielonki1) 
	{
		std::cout << "klade mielonke" << std::endl;
	};
	void wypisz()const{
		std::cout << Kanapka::name << "		" << Kanapka::cena << " PLN" << std::endl; 
		std::cout << "	("<< KanapkaZMielonka::wagaMielonki << "g.)" << std::endl;
	};
protected:

	float wagaMielonki;


};