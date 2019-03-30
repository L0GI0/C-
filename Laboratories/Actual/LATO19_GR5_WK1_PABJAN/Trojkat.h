#pragma once 

#include "Ksztalt.h"


class Trojkat : public Ksztalt{
	
	public:

		//Konstruktor przyjmujacy dlogosci odpowiednich bokow Trojkata 
		Trojkat(float a, float b, float c)
		:_a(a), _b(b), _c(c){}

		// przeladowana funkcja wirtualna wypisz dla klasy Trojkat
		//wypisujaca dlugosc wszystkich bokow trojkata 
		void wypisz(std::ostream & o)const;

		//przeladowana funkcja wirtualna dla klassy Trojkat obliczajaca
		//i zwracajaca pole powietrzchni Trojkata 
		float polePow()const;

	private:
		//boki trojkata
		float _a, _b, _c;
};