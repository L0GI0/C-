#pragma once 
#include "Ksztalt.h"


class Kwadrat : public Ksztalt{
	public:	
		~Kwadrat(){}
		//Konstruktor Kwadrat przyjmujacy float jakos dlugosc boku kwadratu 
		Kwadrat(float a):_a(a){}

		// przeladowana funkcja wirtualna wypisz dla klasy Kwadrat 
		void wypisz(std::ostream &)const;
		
		//przeladowana funkcja wirtualna polePow() obliczajaca i zwracjaca pole Kwadratu
		float polePow()const;

	private:

		//dlugosc boku kwadratu
		float _a;
};