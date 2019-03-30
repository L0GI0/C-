#pragma once
#include <iostream>
using namespace std;
class Point2D{

public:
	//Przyjazc w celu uzyskania dostepu do zmiennych prywatnych 
	friend class Point2DAverage;
	//Kontruktor, domysle wartosci punktow to 0
	Point2D(float x = 0, float y = 0);
	//Przeladowanie operatora << w celu wyswietlenia punktu w odpowiednim formacie (X,Y) 
	friend ostream & operator<<(ostream &o, const Point2D &p);
	//Przeladowanie operatora -- odejmuje wartosc 1 od kazdej wspolrzednej 
	Point2D &operator --();
	//Przeladowanie operatora ++ dodaje wartosc 1 do kazdej wspolrzednej 
	Point2D &operator ++(int value);
	//globalne przeladowanie operatora  +, dodaje podana wartosc do kazdej wspolrzednej odpowiednio X,Y
	friend Point2D operator+(double val, const Point2D &p);
	//przeladowanie operatora +, dodaje do siebie wspolrzedne dwoch obiektor klasy Point2D, (X1 + X2), (Y1 + Y2) 
	Point2D operator+(const Point2D &p);
	
private:
	float X;
	float Y;
};