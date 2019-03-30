#pragma once
#include "MapDistance.h"

//Klasa MapPoint - przechowuje informacje o miescie: jego wysokosci i szerokosci geogr. oraz unikalnym ID
class MapPoint
{
private:
	float _latitude; //wysokosc geograficzna
	float _longitude; //szerokosc geograficzna
	int _objectID; //unikalne ID
public:
	//Zmienna szeregujaca miasta (przechowuje nastepne dostepne ID)
	static int next_free_id;
	//Funkcja ustawiajaca wysokosc geograficzna
	void set_latitude(float value);
	//Funkcja ustawiajaca szerokosc geograficzna
	void set_longitude(float value);
	//Przypisanie unikalnego ID danemu miastu (obiektowi)
	void assign_id();
	//Wypisanie informacji o danym miescie
	void print();
	//Jednoczesne ustawienie wysokosci/szerokosci geograficznej
	void set_coordinates(float latitude, float longitude);
	//Funkcja sprawdzajaca, ktore miasto lezy blizej danego miasta (obiektu)
	MapPoint& closest(MapPoint& city1, MapPoint& city2);
	//Funkcja obliczajaca odleglosc miedzy miastami
	MapDistance distance(MapPoint& city1);
	
};