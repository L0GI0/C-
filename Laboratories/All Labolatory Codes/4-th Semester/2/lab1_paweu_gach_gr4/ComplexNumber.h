#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include <iostream>
/**
*	Klasa opisujaca liczbe zespolona
*/
class ComplexNumber {
public:
	/**
	*	Konstruktor liczby zespolonej o zerowej czesci urojonej
	*	\param number Czesc rzeczywista
	*/
	ComplexNumber(int number);
	/**
	*	Konstruktor liczby zespolonej
	*	\param re Czesc rzeczywista
	*	\param im Czesc urojona
	*/
	ComplexNumber(int re, int im);
	/**
	*	Operator dodawania dwoch liczb zespolonych
	*	\param secondnumber Drugi skladnik dodawania
	*	\return Nowy obiekt bedacy wynikiem dodawania dwoch liczb
	*/
	ComplexNumber operator + (const ComplexNumber& secondnumber) const;
	/**
	*	Operator odejmowania dwoch liczb zespolonych
	*	\param secondnumber Odjemnik
	*	\return Nowy obiekt bedacy wynikiem odejmowania dwoch liczb
	*/
	ComplexNumber operator - (const ComplexNumber& secondnumber) const;
	/**
	*	Operator mnozenia dwoch liczb zespolonych
	*	\param secondnumber Czynnik (druga liczba zespolona)
	*	\return Nowy obiekt bedacy wynikiem mnozenia dwoch liczb
	*/
	ComplexNumber operator * (const ComplexNumber& secondnumber) const;
	/**
	*	Operator *=, wymaga dzialania na referencji, bo chcemy zmienic konkretny obiekt
	*	\param number Czynnik, przez ktory mnozona sa czesci rzeczywista i urojona
	*	\return Zmodyfikowany obiekt po wymnozeniu obu skladnikow
	*/
	ComplexNumber& operator *= (int number);
	/**
	*	Operator preinkrementacji, zmniejsza czesc rzeczywista o jeden (pracuje na oryginale)
	*	\return Referencja do obiektu ze zinkrementowana czescia rzeczywista
	*/
	ComplexNumber& operator ++ ();
	/**
	*	Operator postinkrementacji, zmniejsza czesc rzeczywista o jeden, pracuje na oryginale, lecz zwraca kopie
	*	\return Kopia obiektu przed dokonaniem inkrementacji
	*/
	ComplexNumber operator ++ (int);
	/**
	*	Operator [] - decyduje, czy chcemy modyfikowac czesc rzeczywista czy czesc urojona liczby zespolonej
	*	\return Referencja do czesci rzeczywistej (dla wartosci 0) lub czesci urojonej (dla wartosci 1)
	*/
	int& operator[](int number);
	/**
	*	Operator porownania, dokonuje porownania dwoch liczb zespolonych na podstawie ich modulow
	*	\param secondnumber Druga liczba do porownania
	*/
	bool operator > (const ComplexNumber& secondnumber) const;
	/**
	*	Funkcja zwracajaca czesc rzeczywista rozpatrywanego obiektu
	*	\return Czesc rzeczywista liczby
	*/
	int GetRe() const { return _re; }
	/**
	*	Funkcja zwracajaca czesc urojona rozpatrywanego obiektu
	*	\return Czesc urojona liczby
	*/
	int GetIm() const { return _im; }
	/**
	*	Funkcja wyliczajaca modul liczby zespolonej
	*	\return Modul liczby
	*/
	int GetAbsValue() const { return _re*_re + _im*_im; }
	/**
	*	Zmienna statyczna typu realizujaca liczbe zespolona o zerowej czesci rzeczywistej
	*	i czesci urojonej rownej jeden
	*/
	static const ComplexNumber i;
	/**
	*	Zmienna statyczna (o wartosci 1) identyfikujaca czesc urojona liczby
	*/
	static const int IMAGINARY;
	/**
	*	Zmienna statyczna (o wartosci 0) identyfikujaca czesc rzeczywista liczby
	*/
	static const int REAL;
private:
	int _re; //!< Czesc rzeczywista liczby
	int _im; //!< Czesc urojona liczby
};
/**
*	Operator obslugujacy wypisywanie liczb zespolonych
*/
std::ostream& operator << (std::ostream& output, const ComplexNumber& number);
/**
*	Operator dodawania do liczby rzeczywistej liczbe zespolona
*/
ComplexNumber operator + (int realnumber, const ComplexNumber& number);
/**
*	Operator realizujacy odejmowanie liczby zespolonej od liczby rzeczywistej
*/
ComplexNumber operator - (int realnumber, const ComplexNumber& number);

#endif