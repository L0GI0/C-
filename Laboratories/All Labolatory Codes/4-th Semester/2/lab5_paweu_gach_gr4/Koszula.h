#ifndef KOSZULA_H
#define KOSZULA_H


/**
*	Klasa bazowa dla wszystkich koszul
*/
class Koszula: public Ubranie {
public:
	/**
	*	Konstruktor obiektu typu koszula
	*	\param cenaUbrania Cena koszuli
	*	\param nazwa Nazwa konkretnej koszuli
	*/
	Koszula(float cenaUbrania, std::string nazwa);
	/**
	*	Wypisywanie informacji o koszuli
	*	Wypisywana jest cena oraz stan wyprasowania ubrania i rekawow
	*/
	void WypiszWlasciwosci() const;
	/**
	*	Prasowanie rekawow konkretnym zelazkiem
	*	\param ktorymZelazkiem Model zelazka ktorym bedziemy prasowac rekawy
	*/
	void PrasujRekawy(const Zelazko& ktorymZelazkiem);
protected:
	/// Stan wyprasowania rekawow
	bool _czyRekawyWyprasowane;
};

#endif