#pragma once
#include "Kanapka.h"

#include "KanapkaWypasiona.h"
class Menu
{
public:
	Menu():size(0){	};
	Menu& dodaj(const Kanapka &kanapka)
	{
		if(size==0)
		{
			tab = new Kanapka*[1];
			tab[0] = ((Kanapka*)&kanapka);
			size+=1;
		}
		else
		{
			 Kanapka **tym = new Kanapka*[size+1];
			for(int i=0; i < size; i++)
			{
				tym[i] = tab[i];
			}
			tym[size] = ((Kanapka*)&kanapka);
			delete [] tab;
			tab = tym;
			size+=1;

		}

		return *this;
	};

		void wypiszNajdrozszaKanapke()
	{
			float cena_test = 0;
			int pos = 0;
			for(int i=0; i < size; i++)
			{
				
				if(tab[i]->cena > cena_test)
				{
					cena_test = tab[i]->cena;
					pos = i;
				}
			}

			////////////////////////////

			std::cout << "-----$ $ $   NAJDROZSZA   $ $ $-----"<< std::endl;
			tab[pos]->wypisz();

/*			std::cout << 

        (ogorek: 2 szt.,
        mielonka: 161.11 g.,
        ser: 2 x 0.496843 mm.)*/
        std::cout << "-----$ $ $   NAJDROZSZA   $ $ $-----"<< std::endl;


	};

	void drukuj()
	{

		std::cout << "__________BAR__________" << std::endl;
		std::cout << "---------P O D---------" << std::endl;
		std::cout << "\\\\\\\\\\" << "warunkiem" << "////////" << std::endl;	

		for(int i=0; i < size; i++)
			{	
				tab[i]->wypisz();
				std::cout << ".............................." << std::endl;
     
     		}
		
	};

private:
	Kanapka **tab;
	int size;
};