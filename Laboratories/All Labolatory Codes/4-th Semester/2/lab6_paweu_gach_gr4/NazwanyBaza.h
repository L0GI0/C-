#pragma once


/**
*	Klasa bazowa dla wszystkich pozostalych klas
*	Dostarcza ona informacje o nazwie obiektu
*/
class NazwanyBaza {
public:
	/**
	*	Konstruktor pozwalajacy na wpisanie nazwy
	*	\param nazwa Nazwa obiektu
	*/
	NazwanyBaza(std::string nazwa): m_nazwa(nazwa) {}
	/**
	*	Metoda czysto wirtualna wypisujaca wszystkie informacje o konkretnym obiekcie
	*/
	virtual void Wypisz() const=0;
protected:
	/// Nazwa obiektu
	std::string m_nazwa;
};