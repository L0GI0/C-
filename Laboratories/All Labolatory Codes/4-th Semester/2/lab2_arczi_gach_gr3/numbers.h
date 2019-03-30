#pragma once
#include <iostream>

// Zdefiniowana zmienna float
typedef float english;

// Klasa , ktora umozliwia rzutowanie operatora float wraz z zapisem przecinkowym
class polish {
	public:
		// Konstruktor klsy zapisujacy wartosc do zmiennej prywatnej, ktora przechowa wartosc
		polish(const int);
		// Funkcja zwracajaca prywatna wartosc
		const int GetNum() const { return _val; }
	private:
		// Prywatna zmienna przechowujaca wartosc
		const int _val;
};

// Przeladowanie operatora przecinka w celu umozliwienia rzutowania 
float operator, (polish a, int b);