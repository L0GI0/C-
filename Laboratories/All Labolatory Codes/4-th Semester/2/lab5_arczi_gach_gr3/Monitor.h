#pragma once
#include "Wyswietlacz.h"

// Klasa Monitor dziedziczaca po klasie Wyswietlacz
class Monitor : public Wyswietlacz
{
	public:
		// Konstruktor Monitora, ktory mowi, jaka jest wysokosc i szerokosc i uzupelnia nazwe
		Monitor(const int, const int);
};