#pragma once

/**
*	Klasa pozwalajaca na stworzenie srubokreta
*	Klasa ta ma w sobie wlasciwosci narzedzia jak i urzadzenia obslugiwanego recznie
*/

class Srubokret: public Narzedzie, public Reczny
{
public:
	/**
	*	Konstruktor srubokreta
	*	\param nazwa Nazwa srubokreta
	*	\param zastosowanie Opis do czego sluzy srubokret
	*	\param zrodlo_napedu Opis czym nalezy obslugiwac srubokret
	*/
	Srubokret(std::string nazwa, std::string zastosowanie, std::string zrodlo_napedu): Nazwany(nazwa), Narzedzie(nazwa, zastosowanie), Reczny(nazwa, zrodlo_napedu) {}
	/// Wypisywanie wszystkich informacji o srubokrecie
	void Wypisz() const;
};
