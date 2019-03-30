#pragma once
#include "Wyswietlacz.h"

// Klasa Rzutnik dziedziczaca po klasie Wyswietlacz
class Rzutnik : public Wyswietlacz
{
	public:
		// Konstruktor Rzutnika, ktory mowi, jaka jest wysokosc i szerokosc i uzupelnia nazwe
		Rzutnik(const int, const int);
};