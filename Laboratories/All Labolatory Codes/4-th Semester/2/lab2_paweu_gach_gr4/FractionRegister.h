#ifndef FRACTIONREGISTER_H
#define FRACTIONREGISTER_H

/**
*	Klasa opisujaca singleton ulamkow (rejestr)
*/
class FractionRegister {
public:
	/// Konstruktor tworzacy singleton
	FractionRegister();
	/// Operator dodajacy ulamek do rejestru
	FractionRegister& operator << (Fraction& fraction);
	/// Operator dodajacy wskaznik na ulamek do rejestru
	FractionRegister& operator << (const FractionPointer& pointer);
	/// Funkcja zwracajaca liczbe ulamkow w rejestrze - specjalnie inline, nie ma sensu definiowac osobno
	int FracCount() const { return _fracCount; }
	/// Funkcja zwracajaca wskaznik na tablice ulamkow - specjalnie inline, nie ma sensu definiowac osobno
	Fraction** FracTab() const { return _fracTab; }
	/// Przeladowanie operatora, dzieki temu upewniamy sie, ze mamy jednoczesnie jedna instancje obiektu
	void* operator new(std::size_t count);
	/// Destruktor, wywoluje sie tylko raz na koniec programu, kasuje tablice
	~FractionRegister();
private:
	/// Powiekszanie tablicy
	void AddToRegister(Fraction* addr);
	/// Tablica ulamkow w rejestrze
	static Fraction** _fracTab;
	/// Licznik ulamkow w rejestrze
	static int _fracCount;
};

/// Funkcja wypisujaca rejestr ulamkow na ekran
std::ostream& operator << (std::ostream& output, const FractionRegister&);

#endif