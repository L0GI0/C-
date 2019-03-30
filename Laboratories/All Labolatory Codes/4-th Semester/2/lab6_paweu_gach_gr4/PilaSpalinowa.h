#pragma once

/**
*	Klasa pozwalajaca na stworzenie obiektu Pily Spalinowej
*	Klasa ta ma w sobie wlasciwosci Narzedzia jak i obiektu z silnikiem spalinowym
*/
class PilaSpalinowa: public Narzedzie, public Spalinowy
{
public:
	/**
	*	Konstruktor pily spalinowej
	*	\param nazwa Nazwa pily
	*	\param zastosowanie Zastosowanie pily
	*	\param poziom_oleju Poziom oleju pily
	*/
	PilaSpalinowa(std::string nazwa, std::string zastosowanie, float poziom_oleju): Nazwany(nazwa), Narzedzie(nazwa, zastosowanie), Spalinowy(nazwa, poziom_oleju) {}
	/// Wypisywanie wszystkich informacji o pile
	void Wypisz() const;
};
