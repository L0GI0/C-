#pragma once 
#include "Rational.h"
#include <iostream>


class Fun {
	
public:
	//Funkcja statyczna dodajaca ulamki
	static Rational Add(const Rational & rational1, const Rational & rational2);

	//Funkcja mnozaca ulamki
	static Rational Multiply(const Rational & rational1, const Rational & rational2);

	//Funkcja dzielaca ulamki
	static Rational Divide(const Rational & rational1, const Rational & rational2);

	//Funkcja liczaca srednia z dotyczchczasowych ulamkow przeslanych do funkcji 
	static void Average(const Rational &rational);

	//Funcja zwracajaca aktualnie wyliczona srendia
	static float Average();

private:
	//funkcja przechowujaca srednia
	static float _average;

	//funkcja przechowujaca ilosc ulamkow dotychczas dodanych do sredniej 
	static int _number_of_rationals;

	static float _sum;
};

