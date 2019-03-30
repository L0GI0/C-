#pragma once
#include <iostream>

using namespace std;

// Klasa, w ktorej przechowuje liczbe zespolona ComplexNumber
class ComplexNumber
{
	public:
		// Glosny konstkruktor informujacy o tworzonym obiekcie
		ComplexNumber(const float, const float);
		// Glosny destruktor informujacy o usuwanym obiekcie
		~ComplexNumber();
		// Dwie funkcje zwracajace odpowiednio waetosc rzeczywista i zespolona
		const float GetRe() const { return _re; }
		const float GetIm() const { return _im; }
		// Przeladowanie operatora new w celu zapisu alokowanej pamieci
		void* operator new (size_t);
	private:
		// Prywatne zmienne odpowiadajace wartosci rzeczywistej i zespolonej
		const float _re;
		const float _im;
		// Statyczna tablica dynamiczna zawierajaca wskazniki do obiektow typu ComplesNumber
		static ComplexNumber** _tabOfPtrs;
		// Licznik utworzonych obiektow w sposob nie-dynamiczny
		static int _counter;
		// Licznik utworzonych obiektow w sposob dynamiczny
		static int _counterOfDynamic;
};

// Przeladowanie operatora << w celu umozliwienia wypisania zmiennej zespolonej na ekran
ostream& operator<< (ostream&, const ComplexNumber&);