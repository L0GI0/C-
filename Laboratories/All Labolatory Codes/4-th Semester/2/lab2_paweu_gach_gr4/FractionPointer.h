#ifndef FRACTIONPOINTER_H
#define FRACTIONPOINTER_H

/**
*	Funkcja opisujaca wskaznik na ulamek
*/
class FractionPointer
{
public:
	/// Konstruktor pointera przypisujacy adres ulamka do konkretnego obiektu
	FractionPointer(Fraction* fraction);
	/// Konstruktor kopiujacy, wykorzystywany tylko przy tymczasowych obiektach (linie 71 i 77 w main.cpp)
	FractionPointer(const FractionPointer& copy);
	/// Konstruktor kopiujacy, sluzy do tego, by na ulamek wskazywal jednoczesnie max jeden pointer
	FractionPointer(FractionPointer& copy);
	/// Operator przypisania, funkcja podobna jak w konstruktorze kopiujacym
	FractionPointer& operator = (FractionPointer& copy);
	/// Operator konwersji do typu Fraction*, specjalnie inline, krotkie cialo funkcji
	operator Fraction* () const { return _frac; }
	/// Pobranie adresu na jaki wskazuje pointer, specjalnie inline, krotkie cialo funkcji
	Fraction* GetAddr() const { return _frac; }
	/// Destruktor, sluzy do kasowania ulamka wskazywanego przez pointer
	~FractionPointer();
private:
	/// Adres wskazywanego ulamka
	Fraction* _frac;
};

/// Wypisywanie pointera na ekran
std::ostream& operator << (std::ostream& output, const FractionPointer& pointer);

#endif