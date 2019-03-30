#pragma once

/**
*	Klasa Narzedzie dziedziczaca wirtualnie po klasie bazowej Nazwany
*	Klasa ta dostarcza informacji o zastosowaniu narzedzia
*/
class Narzedzie: public virtual Nazwany {
public:
	/**
	*	Konstruktor tworzacy narzedzie
	*	\param nazwa Nazwa narzedzia
	*	\param zastosowanie Zastosowanie narzedzia
	*/
	Narzedzie(std::string nazwa, std::string zastosowanie): Nazwany(nazwa), m_zastosowanie(zastosowanie) {}
	/**
	*	Metoda wypisujaca zastosowanie narzedzia
	*/
	void WypiszZastosowanie() const { std::cout << "Tego narzedzia uzywa sie do " << m_zastosowanie << ".\n"; }
protected:
	/// Zastosowanie narzedzia
	std::string m_zastosowanie;
};