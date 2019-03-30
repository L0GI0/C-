#ifndef LINEFIT_H
#define LINEFIT_H

#include "Fit.h"
/**
*	Klasa dopasowania do linii
* 	Rownanie opisujace dopasowanie: y = a * x + b
*/
class LineFit: public Fit {
public:
	// Konstruktor dopasowania
	LineFit(std::string name);
	// Dopisanie punktu i przetworzenie danych
	void appendPoint(float x, float y);
	// Wyswietlenie obliczonych parametrow
	FitResult result();
};

#endif