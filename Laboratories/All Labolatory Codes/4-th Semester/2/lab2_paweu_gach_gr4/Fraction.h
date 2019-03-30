#ifndef FRACTION_H
#define FRACTION_H

/**
*	Klasa opisujaca ulamek
*/
class Fraction {
public:
	/**
	*	Konstruktor tworzacy ulamek i wypisujacy informacje o kreacji
	* 	\param numerator Licznik
	*	\param denominator Mianownik
	*/
	Fraction(int numerator, int denominator);
	/// Nadpisywanie licznika
	int& Numerator() { return _numerator; }
	/// Nadpisywanie mianownika
	int& Denominator() { return _denominator; }
	/// Pobranie wartosci licznika
	int Numerator() const { return _numerator; }
	/// Pobranie wartosci mianownika
	int Denominator() const { return _denominator; }
	/// Destruktor dajacy informacje o zniszczeniu elementu
	~Fraction();
private:
	/// Wartosc licznika
	int _numerator;
	/// Wartosc mianownika
	int _denominator;
};

///Funkcja wypisujaca ulamek
std::ostream& operator << (std::ostream& output, const Fraction& fraction);

#endif