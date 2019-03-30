#ifndef UBRANIE_H
#define UBRANIE_H

/**
*	Klasa bazowa dla wszystkich ubran
*/
class Ubranie: public Przedmiot {
public:
	/**
	*	Konstruktor uzupelniajacy cene ubrania
	*	\param cenaUbrania Cena ubrania
	*	\param nazwa Nazwa ubrania
	*/
	Ubranie(float cenaUbrania, std::string nazwa);
	/**
	*	Metoda wypisujaca wlasciwosci ubrania
	*	Wypisujemy cene oraz stan uprasowania ubrania
	*/
	void WypiszWlasciwosci() const;
	/**
	*	Prasowanie ubrania
	*	\param ktorymZelazkiem Obiekt zelazka prasujacy konkretne ubranie
	*/
	void Prasuj(const Zelazko& ktorymZelazkiem);
	/**
	*	Metoda gniataca ubranie
	*/
	void Pogniec();
protected:
	/// Stan ubrania (wyprasowane/pogniecione)
	bool _czyWyprasowane;
};



#endif