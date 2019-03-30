#pragma once 

class Rational{

public:
	// Deklaruje przyjazn w celu uzyskania dostepu do prywatnych zmiennych klasy Rational przez klase Fun
	friend class Fun;

	//Konstruktor domyslny 
	Rational();

	//Konsturktor z lista inicjalizacyjna, przypisuje l do _licznik, m do _mianownik
	Rational(int l, int m): _licznik(l), _mianownik(m){};

	//konwerter z typu int na Rational
	Rational(int l): _licznik(l), _mianownik(1){};

	//Funkcja wyswietlajaca _licznik _mianownik w postaci ulamka
	void Print() const;

	//Funkcja konwertujaca z typu klasy Rational na typ wbudowany float 
	operator float(){
		return (float) _licznik / (float) _mianownik;
	
	}

private:
	
	//zmienna przechiowujaca liczbe w liczniku
	int _licznik;

	//zmienna przechowujaca liczbe w mianowniku
	int _mianownik;
};

