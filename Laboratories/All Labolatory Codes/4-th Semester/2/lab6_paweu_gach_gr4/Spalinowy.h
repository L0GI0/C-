#pragma once

/**
*	Klasa Spalinowy dziedziczaca wirtualnie po klasie bazowej Nazwany
*	Klasa ta dostarcza informacji o poziomie oleju w silniku spalinowym
*/
class Spalinowy: public virtual Nazwany {
public:
	/**
	*	Konstruktor tworzacy silnik spalinowy
	*	\param nazwa Nazwa obiektu
	*	\param poziom_oleju Poziom oleju w silniku
	*/
	Spalinowy(std::string nazwa, float poziom_oleju): Nazwany(nazwa), m_poziom_oleju(poziom_oleju) {}
	/**
	*	Metoda wypisujaca poziom oleju w silniku
	*/
	void WypiszPoziomOleju() const { std::cout << "Poziom oleju wynosi " << m_poziom_oleju << ".\n"; }
protected:
	/// Poziom oleju w silniku
	float m_poziom_oleju;
};