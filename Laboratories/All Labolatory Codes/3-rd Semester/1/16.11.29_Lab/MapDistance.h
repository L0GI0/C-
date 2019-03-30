#pragma once

//Klasa przechowujaca informacje o odleglosci miedzy miastami
class MapDistance
{
private:
	float _diff_lat; //Roznica pomiedzy dlugosciami geograficznymi
	float _diff_long; //Roznica pomiedzy szerokosciami geograficznymi
public:
	MapDistance();
	//Konstruktor przypisujacy danemu dystansowi (obiektowi) roznice odleglosci miedzy danymi miastami
	MapDistance(float diff_lat, float diff_long);
	//Wypisywanie odleglosci miedzy danymi miastami
	//Najprawdopodobniej w pliku Main.cpp, w przykladowym wyjsciu, zostaly zamienione wysokosc z szerokoscia
	void print();

	
};