// ten plik MOZNA modyfikowc
#pragma once
#include <string>
#include "Main.h"

class Nazwany;

class PilaSpalinowa : virtual public Narzedzie, virtual public Spalinowy
{
	public:
  		void Wypisz() const;
  		PilaSpalinowa (std::string nazwa, std::string zastosowanie, float olej) : Narzedzie(nazwa, zastosowanie), Spalinowy(nazwa, olej) {}
};
