#pragma once

/**
*	Deklaracja wyprzedzajaca, potrzebna by obiekt "typ" mogl przechowac
*	informacje o miotaczu ktory rzuca wyjatki
*/
class ObiektMiotajacy;

/**
*	Klasa bazowa dla wszystkich typow rzucanych wyjatkow
*/
class typ {
public:
	/**
	*	Utworzenie wyjatku
	*/
	typ();
	/**
	*	Wyjatek wypisuje informacje o sobie
	*/
	virtual void PrzedstawSie() const=0;
	/**
	*	Metoda ustawiajaca miotacz wyjatkow - w celu czyszczenia pamieci
	*/
	virtual void UstawMiotacz(ObiektMiotajacy* miotacz) { m_miotacz = miotacz; }
	/**
	*	Niszczenie wyjatku, wirtualne z racji dziedziczenia
	*/
	virtual ~typ();
protected:
	/**
	*	Obiekt ktory wyrzucil wyjatek
	*/
	ObiektMiotajacy* m_miotacz;
};

/**
*	Wyjatek typu 3
*/
class typ3: public typ {
public:
	/// Wypisanie informacji o typie wyjatku
	void PrzedstawSie() const { std::cout << "Nazywam sie 3\n"; }
};

/**
*	Wyjatek typu 4
*/
class typ4: public typ {
public:
	/// Wypisanie informacji o typie wyjatku
	void PrzedstawSie() const { std::cout << "Nazywam sie 4\n"; }
};

/**
*	Wyjatek typu 1
*/
class typ1: public typ3 {
public:
	/// Wypisanie informacji o typie wyjatku
	void PrzedstawSie() const { std::cout << "Nazywam sie 1\n"; }
};

/**
*	Wyjatek typu 2
*/
class typ2: public typ4 {
public:
	/// Wypisanie informacji o typie wyjatku
	void PrzedstawSie() const { std::cout << "Nazywam sie 2\n"; }
};