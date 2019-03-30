#ifndef FIT_H
#define FIT_H

#include <vector>
#include <iostream>
#include <string>
#include "FitResult.h"

/**
*	Klasa bazowa
*/

class Fit
{
public:
	// Konstruktor tworzacy dopasowanie oraz uzupelniajacy rownanie dopasowania do result
	Fit(std::string name, std::string expression);
	// Wypisanie nazwy dopasowania
	void print() const;
	// Dopisywanie punktow, czysto wirtualne, bo klasa Fit ma nie wiedziec, co z tym zrobic
	virtual void appendPoint(float x, float y) = 0;
	// Dopisywanie punktow dla const dopasowania, w kazdej klasie pochodnej ma wygladac tak samo
	void appendPoint(float x, float y) const;
	// Zwracanie wyniku, klasa bazowa znowu nie wie co z tym zrobic
	virtual FitResult result() = 0;
protected:
	// Rownanie dopasowania
	FitResult _result;
	// Nazwa dopasowania
	std::string _name;
	// Suma kwadratow x
	float _xxSum;
	// Suma x*y
	float _xySum;
	// Suma x
	float _xSum;
	// Suma y
	float _ySum;
	// Licznik dodanych punktow
	int _pointCounter;
};

#endif