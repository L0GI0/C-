#pragma once
#include "Kanapka.h"

class Menu
{
public:
	Menu():rozmiar(0){};
	~Menu(){};
	Menu& dodaj(const Kanapka &kanapka)
	{
		if(rozmiar == 0)
		{
			tab = new Kanapka*[1];
			//tab[0] = (Kanapka*)&kanapka;
			tab[0] = const_cast<Kanapka*>(&kanapka);
			rozmiar+=1;

		}
		else
		{
			Kanapka **tym = new Kanapka*[rozmiar+1];
			for(int i=0; i< rozmiar; i++)
			{
				tym[i] = tab[i];

			}

			tym[rozmiar] = ((Kanapka*)&kanapka);
			delete [] tab;
			tab = tym;
			rozmiar+=1;
		}

		return *this;
	};

	void wypiszNajdrozszaKanapke()
	{
		float  cena_tym = 0;
		int pos = 0;
		for(int i=0; i< rozmiar; i++)
		{
			if(tab[i]->cena > cena_tym)
			{
				cena_tym = tab[i]->cena;
				pos = i;
			}
			
		}

		std::cout << "-----$ $ $   NAJDROZSZA   $ $ $-----" << std::endl;
			tab[pos]->wypisz();	
		std::cout << "-----$ $ $   NAJDROZSZA   $ $ $-----" << std::endl;

	};

	void drukuj()
	{
		std::cout << "	__________BAR__________" << std::endl;
		std::cout << "	---------P O D---------" << std::endl;
		std::cout << "	\\\\\\\\warunkiem///////" << std::endl;
     
     
		for(int i=0; i< rozmiar; i++)
		{
		
			tab[i]->wypisz();	
			std::cout << ".............................." << std::endl;
		}

	};

private:
	Kanapka **tab;
	int rozmiar;


};