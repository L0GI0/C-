#pragma once 

class Visitor;

class Data{

	public:

		//Czysto abstrakcyjna metoda virtualna przyjmujaca "wizytatora" tzn. umozliwiajaca 
		//dostep obiektom klasy Visitor oraz jej klasom pochodnym dostepu do 
		//swoich skladnikow publicznych w celu wykonania okreslonych dzialan zdefiniowanych przez metody visit
		virtual void acceptVisitor(Visitor& v) = 0;

};