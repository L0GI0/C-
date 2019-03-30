#pragma once 

#include "Visitor.h"


#include <iostream>


//Wizytator typu print 
class PrintingVisitor : public Visitor{

	public:

		//Przeladowana metoda "wizutyjca" dla klasy IntData dziedziczacej po Data
		//wypisujaca wartosc typu int przechowywana przez obiekt "tP" przyjety jako argument 
		inline virtual void visit (const IntData * tP) { std::cout << " " <<  tP->getInt(); }


		//Przeladowana metoda "wizutyjca" dla klasy FloatData dziedziczacej po Data
		//wypisujaca dane typu float przechowywana przez obiekt "tP" przyjety jako argument 
		inline virtual void visit (const FloatData * tP) {std::cout << " " << tP->getFloat(); }

};