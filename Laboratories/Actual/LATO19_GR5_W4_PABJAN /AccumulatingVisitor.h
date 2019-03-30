#pragma once 


#include "Visitor.h"


//Wizytator typu accumulate 
class AccumulatingVisitor : public Visitor{

	public:

		//Konstruktor domyslny zdefiniowany w celu wyzerowania
		//wartosci poczatkowej sumujacej zgromadzone dane  
		AccumulatingVisitor(): _accumulated(0){}
		
		//Przeladowana metoda "wizutyjca" dla klasy IntData dziedziczacej po Data
		//dodajaca wartosc typu int przechowywana przez obiekt "tP",
		//do aktualnie zgromadzonych wartosci przechowywanych w zmiennej prywatnej "_accumulated"  
		inline virtual void visit (const IntData * tA) { _accumulated += static_cast<float> (tA->getInt());}

		//Przeladowana metoda "wizutyjca" dla klasy IntData dziedziczacej po Data
		//dodajaca wartosc typu int przechowywana przez obiekt "tP",
		//do aktualnie zgromadzonych wartosci przechowywanych w zmiennej prywatnej "_accumulated"  
		inline virtual void visit (const FloatData * tA) {_accumulated += tA->getFloat();}


		//Zwraca wartosc aktualnie zsumowanych danych 
		inline float getTotalSum()const { return _accumulated;}


	private:

		//Przechowuje zgromadzone dane przez metody "wizytujace" visit 
		float _accumulated;
};