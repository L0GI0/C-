// ten plik MOZNA modyfikowc
#pragma once
#include <string>
#include "Main.h"

class Nazwany;

class Rower : virtual public Pojazd, virtual public Reczny
{
	public:
  		void Wypisz() const;
  		Rower(std::string nazwa, float predkosc, std::string zrodlo) : Pojazd(nazwa, predkosc), Reczny(nazwa, zrodlo) {}
};
