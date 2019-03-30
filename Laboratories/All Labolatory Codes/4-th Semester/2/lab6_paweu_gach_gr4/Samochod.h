#pragma once

/**
*	Klasa pozwalajaca na stworzenie obiektu samochodu
*	Klasa ta ma w sobie wlasciwosci Pojazdu jak i obiektu z silnikiem spalinowym
*/
class Samochod: public Pojazd, public Spalinowy
{
public:
	/**
	*	Konstruktor roweru
	*	\param nazwa Nazwa samochodu
	*	\param predkosc_maksymalna Predkosc maksymalna samochodu
	*	\param poziom_oleju Poziom oleju w silniku
	*/
	Samochod(std::string nazwa, float predkosc_maksymalna, float poziom_oleju): Nazwany(nazwa), Pojazd(nazwa, predkosc_maksymalna), Spalinowy(nazwa, poziom_oleju) {}
	/// Wypisywanie wszystkich informacji o samochodzie
	void Wypisz() const;
};
