#pragma once

/**
*	Klasa TestObject przechowujaca liczbe
*/
class TestObject {
public:
	/**
	*	Tworzenie obiektu o wartosci zero, potrzebne
	*	do alokacji pamieci
	*/
	TestObject(): _val(0) {}
	/**
	*	Tworzenie obiektu o zadanej wartosci
	*	\param val Wartosc przechowywana przez obiekt
	*/
	TestObject(int val): _val(val) {}
	/**
	*	Wypisanie informacji o obiekcie
	*/
	void Print() const { std::cout << "Object with ID=" << _val << std::endl; }
	/**
	*	Ustawianie wartosci obiektu
	*	\param val Nowa wartosc obiektu
	*/
	void Set(int val) { _val = val; }
private:
	/// Wartosc przechowywana przez obiekt
	int _val;
};