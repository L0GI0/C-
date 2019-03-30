#pragma once
#include "Wyswietlacz.h"

// Klasa TelewizorLCD dziedziczaca po klasie Wyswietlacz
class TelewizorLCD : public Wyswietlacz
{
	public:
		// Konstruktor TelewizoraLCD, ktory mowi, jaka jest wysokosc i szerokosc i uzupelnia nazwe
		TelewizorLCD(const int, const int);
};