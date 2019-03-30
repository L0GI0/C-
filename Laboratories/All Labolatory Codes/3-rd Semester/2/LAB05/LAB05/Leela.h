#pragma once

#include "Pilot.h"




class Leela: public Pilot
{
public:

	explicit Leela(int age1): Pilot("Leela",age1){};
	static Leela* Utworz(int age1)
	{
		Leela *wsk = new Leela(age1);
		Postac::dodaj(wsk);
		return wsk;
	};
	virtual ~Leela() {};
	void PrzedstawSie() 
	{
		std::cout << "Jestem "<< name <<" mam " << age << " lat." << std::endl;
	
	};
	void WypiszHierarchie()
	{
		std::cout << "Leela" << std::endl;
		Pilot::WypiszHierarchie();
	
	};
private:

};