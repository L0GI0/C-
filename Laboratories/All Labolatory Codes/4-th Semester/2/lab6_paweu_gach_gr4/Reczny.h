#pragma once

/**
*	Klasa Reczny dziedziczaca wirtualnie po klasie bazowej Nazwany
*	Klasa ta dostarcza informacji o zrodle napedu danego narzedzia
*/
class Reczny: public virtual Nazwany {
public:
	/**
	*	Konstruktor tworzacy narzedzie do obslugi recznej
	*	\param nazwa Nazwa narzedzia
	*	\param zrodlo_napedu Zrodlo napedu danego narzedzia
	*/
	Reczny(std::string nazwa, std::string zrodlo_napedu): Nazwany(nazwa), m_zrodlo_napedu(zrodlo_napedu) {}
	/**
	*	Metoda wypisujaca zrodlo napedu urzadzenia
	*/
	void WypiszZrodloNapedu() const { std::cout << "Do napedzenia tego urzadzenia uzywa sie " << m_zrodlo_napedu << ".\n"; }
protected:
	// Zrodlo napedu
	std::string m_zrodlo_napedu;
};