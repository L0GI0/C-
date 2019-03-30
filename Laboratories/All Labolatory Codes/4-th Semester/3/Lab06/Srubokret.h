// ten plik MOZNA modyfikowc
#pragma once
#include "Main.h"

class Srubokret : virtual public Narzedzie, virtual public Reczny
{
	public:
 	 	void Wypisz() const;
 		Srubokret (std::string nazwa, std::string zastosowanie, std::string zrodlo) : Narzedzie(nazwa, zastosowanie), Reczny(nazwa, zrodlo) {}
};
