#pragma once

/**
*	Klasa pozwalajaca na stworzenie obiektu Roweru
*	Klasa ta ma w sobie wlasciwosci Pojazdu jak i urzadzenia
*/
class Rower: public Pojazd, public Reczny
{
public:
	/**
	*	Konstruktor roweru
	*	\param nazwa Nazwa roweru
	*	\param predkosc_maksymalna Predkosc maksymalna roweru
	*	\param zrodlo_napedu Zrodlo napedu roweru
	*/
	Rower(std::string nazwa, int predkosc_maksymalna, std::string zrodlo_napedu): Nazwany(nazwa), Pojazd(nazwa, predkosc_maksymalna), Reczny(nazwa, zrodlo_napedu) {}
	/// Wypisywanie wszystkich informacji o rowerze
	void Wypisz() const;
};
