// ten plik MOZNA modyfikowc
#pragma once

#include <string>
#include "Main.h"

class Samochod : virtual public Pojazd, virtual public Spalinowy
{
	public:
  		void Wypisz() const;
  		Samochod (std::string nazwa, float predkosc, float olej) : Pojazd(nazwa, predkosc), Spalinowy(nazwa, olej) {}
};
