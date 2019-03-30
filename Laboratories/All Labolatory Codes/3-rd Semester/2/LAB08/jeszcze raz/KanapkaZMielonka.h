#pragma once
#include "Kanapka.h"

class KanapkaZMielonka: virtual public Kanapka
{
public:
	KanapkaZMielonka(const float wagaMielonki1, const float cena1):Kanapka(cena1),  wagaMielonki(wagaMielonki1)
	{
		std::cout << "klade mielonke" << std::endl;
	};
	virtual ~KanapkaZMielonka(){};
	void wypisz()
	{
		std::cout << "Kanapka z mielonka              " << cena << " PLN" << std::endl;
	};

protected:
	float wagaMielonki;

};