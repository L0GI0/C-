#pragma once
#include <iostream>

class Cena
{
public:
	Cena(const float cena1,  Urzadzenie &urzadzenie): cena(cena1)
	{
		wsk = 0;
		urzadz = &urzadzenie;

	};

	Cena(const float cena1,  Urzadzenie *urzadzenie = NULL): cena(cena1)
	{
		if(urzadzenie)
		{
			wsk = 1;
		}
		else
		{
			wsk = 0;
		}
		
		urzadz = urzadzenie;

	};
	virtual ~Cena()
	{
		if(wsk == 1 && urzadz)
		{
			delete urzadz;
			urzadz = NULL;
		}
	};

	Cena& Obniz(float obnizka)
	{

		this->cena -= obnizka;
		
		if(cena < 0)
		{
			throw "a";
		}

		return *this;
	};

	Cena& Obniz_zaradnie(float obnizka)
	{
		float tym = this->cena;
		tym -=obnizka;
		if(urzadz == NULL)
		{
			std::cout << "Brak produktu przypisanego do ceny"<< std::endl;
			throw "a";
		}

		if(tym<0 && wsk == 1)
		{
			std::cout << "Cene produktu: " << urzadz->zwroc_nazwa() << " firmy " << urzadz->zwroc_marka() << "  probowano obnizyc do kwoty: "<< tym << "." << std::endl;
			std::cout << "Usuwam produkt o zlej cenie." << std::endl;
			delete urzadz;
			urzadz = NULL;
			throw "a";
		}

		if(tym < 0)
		{
			std::cout << "Cene produktu: " << urzadz->zwroc_nazwa() << " firmy " << urzadz->zwroc_marka() << "  probowano obnizyc do kwoty: "<< tym << "." << std::endl;
			throw "a";
		}


		return *this;
	};


	void Wypisz()const
	{
		std::cout << urzadz->zwroc_nazwa() << " marki " << urzadz->zwroc_marka()<< " kosztuje " << cena << std::endl;		
	};

private:
	bool wsk;
	float cena;
	Urzadzenie *urzadz;

};





/*
	Cena& Obniz_zaradnie(float obnizka)
	{
		float tym = this->cena;
		tym -= obnizka;
		if(urzadz == NULL)
		{
			std::cout << "Brak produktu przypisanego do ceny" << std::endl;
			throw "a";
		}
		if(tym < 0 && wsk == 1)
		{
			std::cout << "Cene produktu: " << urzadz->zwroc_nazwa() << " firmy " << urzadz->zwroc_marka() << "  probowano obnizyc do kwoty: "<< tym << "." << std::endl;
			std::cout << "Usuwam produkt o zlej cenie." << std::endl;
			delete urzadz;
			urzadz = NULL;
			throw "a";
		}

		if(tym < 0)
		{
			std::cout << "Cene produktu: " << urzadz->zwroc_nazwa() << " firmy " << urzadz->zwroc_marka() << "  probowano obnizyc do kwoty: "<< tym << "." << std::endl;

			throw "a";
		}



		this->cena -= obnizka;
		if(cena < 0)
		{
			throw "a";
		}

		return *this;
	};
*/