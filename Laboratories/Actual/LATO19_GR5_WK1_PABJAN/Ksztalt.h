#pragma once 

#include <iostream>


class Ksztalt{
	public:

		//Konstruktor virtualny, klasa ta bedzie dziedziczona
		//wywolania destruktora z klasy pochodnej bez przeladowania wirtualnaego konstruktora klasy nadrzednej 
		//moze spowodowac nie zdefiniowane zachowanie 
		
		//funkcja statyczna "wypisz" odwolujaca sie w jej wnetrzu do funkcji virtualnej
		// wypisz(std::ostream &)const odpowiedniego obiektu klasy pochodnej, Kwadrat/Kolo/Trojkat
		// static virtual dyskwalifiuja siebie nawzajem z tego powodu aby zasymulowac virtualna funkcje statyczna
		// nalezy utworzyc dwie w okreslony jak np. w tym programie sposob 
		static void wypisz(const Ksztalt & o);

		//czysto funkcja wirtualna wypisz wywalujaca przez funkcje statyczna wypisz(const Ksztalt & o)
		virtual void wypisz(std::ostream &)const = 0;

		//czysto wirtualna funkcja obliczjaca pole kazdej z figury, Kwadratu, Trojkata i Kola
		//intuicyjnie musi przeladowana bo (pole kazdej fiury oblicza sie w inny sposob)
		virtual float polePow()const = 0;
		

};