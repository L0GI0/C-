#pragma once
#include "ZrodloSygnalu.h"

// Klasa Komputer dziedziczaca po klasie ZrodloSygnalu
class Komputer : public ZrodloSygnalu 
{
	public:
		// Konstruktor Komputera, ktory mowi, jaki znak ma byc wyswietlany i uzupelnia nazwe
		Komputer();
};