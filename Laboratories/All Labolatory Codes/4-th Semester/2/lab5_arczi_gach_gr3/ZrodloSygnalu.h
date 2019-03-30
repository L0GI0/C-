#pragma once
#include <string>

// Klasa ZrodloSygbalu, ktora przechowuje i wyswietla obraz zrodla sygnalu
class ZrodloSygnalu
{
	public:
		// Konstrukot klasy
		ZrodloSygnalu();
		// Metoda pobierajaca znak urzadzenia bedacego zrodlem sygnalu
		const char PobierzZnak() const { return _znakZrodla; }
		// Metoda pobierajaca nazwe urzadzenia bedacego zrodlem sygnalu
		const std::string PobierzNazwe() const { return _nazwaZrodla; }
	
	protected:
		// Znak zrodla, ktory bedzie wyswietlany na ekranie
		char _znakZrodla;
		// Nazwa odpowiedniego urzadzenia bedacego zrodlem sygnalu
		std::string _nazwaZrodla;
};