#pragma once

/**
*	Klasa Pojazd dziedziczaca wirtualnie po klasie bazowej Nazwany
*	Klasa ta dostarcza informacji o predkosci maksymalnej pojazdu
*/
class Pojazd: public virtual Nazwany {
public:
	/**
	*	Konstruktor tworzacy pojazd
	*	\param nazwa Nazwa pojazdu
	*	\param predkosc_maksymalna Predkosc maksymalna tworzonego pojazdu
	*/
	Pojazd(std::string nazwa, float predkosc_maksymalna): Nazwany(nazwa), m_predkosc_maksymalna(predkosc_maksymalna) {}
	/**
	*	Metoda wypisujaca predkosc maksymalna pojazdu
	*/
	void WypiszPredkoscMaksymalna() const { std::cout << "Predkosc maksymalna tego pojazdu wynosi " << m_predkosc_maksymalna << " km/h.\n"; }
protected:
	/// Predkosc maksymalna pojazdu
	float m_predkosc_maksymalna;
};