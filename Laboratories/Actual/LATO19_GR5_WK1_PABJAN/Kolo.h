#pragma once 

#include "Ksztalt.h"


class Kolo: public Ksztalt{

	public:

		//Konstruktor przyjmujacy dlogosc promienia kola  
		Kolo(float r): _r(r){};

		// przeladowana funkcja wirtualna wypisz dla klasy Kolo
		//wypisujaca dlugosc promienia 
		void wypisz(std::ostream & o)const;

		//przeladowana funkcja wirtualna polePow() obliczajaca i zwracjaca pole Kola 
		float polePow()const;

	private:

		//promien kola 
		float _r;
};