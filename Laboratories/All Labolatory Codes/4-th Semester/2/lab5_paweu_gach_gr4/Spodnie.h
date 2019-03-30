#ifndef SPODNIE
#define SPODNIE


/**
*	Klasa bazowa dla wszystkich spodni
*/
class Spodnie: public Ubranie {
public:
	/**
	*	Konstruktor obiektu typu spodnie
	*	\param cenaUbrania Cena spodni
	*	\param nazwa Nazwa konkretnych spodni
	*/
	Spodnie(float cenaUbrania, std::string nazwa);
	/**
	*	Wypisywanie informacji o spodniach
	*	Wypisywana jest cena oraz stan wyprasowania ubrania i nogawek
	*/
	void WypiszWlasciwosci() const;
	/**
	*	Prasowanie nogawek konkretnym zelazkiem
	*	\param ktorymZelazkiem Model zelazka ktorym bedziemy prasowac nogawki
	*/
	void PrasujNogawki(const Zelazko& ktorymZelazkiem);
protected:
	/// Stan wyprasowania nogawek
	bool _czyNogawkiWyprasowane;
};

#endif