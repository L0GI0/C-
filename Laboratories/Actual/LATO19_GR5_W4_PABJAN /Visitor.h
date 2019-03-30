#pragma once 

//
class Data;
class IntData;
class FloatData;


//Wizytator ogolny
class Visitor{

	public:


		// czysto abstrakcyjna metoda "wizytujaca" dla klasy IntData dziedziczacej po Data 
		//przeladowana w plikach PrintVisitator.h, AccumulatingVisitor.h
		virtual void visit (const IntData *) = 0;

		//czysto abstrakcyjna metoda "wizytujaca" dla klasy FloatData dziedziczacej po Data
		//przeladowana w plikach PrintVisitator.h, AccumulatingVisitor.h
		virtual void visit (const FloatData *) = 0;

};