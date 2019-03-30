#ifndef SLOPEFIT_H
#define SLOPEFIT_H

#include "Fit.h"
/**
*	Klasa dopasowania typu SlopeFit
* 	Rownanie opisujace dopasowanie: y = a * x
*/
class SlopeFit: public Fit {
public:
	// Konstruktor dopasowania
	SlopeFit(std::string name);
	// Dopisanie punktu i przetworzenie danych
	void appendPoint(float x, float y);
	// Wyswietlenie obliczonych parametrow
	FitResult result();
};

#endif