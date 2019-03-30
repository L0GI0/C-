#pragma once 
//Klasa symulujaca wbydowany typ tablicy 
class EasyTab{

 public:
 	//Konstruktor przyjmujacy dwie wartosci int, first - poczatek tablicy, last - koniec tablicy
 	EasyTab(int first, int last);
 	//Ustawia wszyskie wartosci tablicy na podana wartosc 
 	void setAll(double value);
 	//Konstrukor kopijacy z jedna zmienna, kopiuje wszystkie elementy przeslanego obiektu
 	EasyTab(const EasyTab&);
 	EasyTab(const EasyTab&, int first, int last);
 	double & at(int element) const;
 	int inRange(int element);
 	//Deksturktor dealokujacy pamiec 
 	~EasyTab();
 	//Metoda statyczna wyswietlajaca elementy tablicy 
 	static void print(const EasyTab &);
 	
 private:
 	//piewrszy element tablicy 
 	int _first;
 	// ostatni element tablicy
 	int _last;
 	//zakres tablicy  _first - _last
 	int _range;
 	//Wskaznik na zaalokowana pamiec
 	double *_array;
};

