#pragma once

/**
*	Klasa tworzaca obiekt typu student. 
*	Przechowuje imie studenta oraz jego 
*	identyfikator informujacy o kolejnosci 
*	utworzenia studenta.
*/
class Student
{
public:
	/**
	*	Tworzenie studenta bez imienia
	*/
	Student();
	/**
	*	Kopiowanie danych studenta
	*	\param copy Zrodlo kopii
	*/
	Student(const Student& copy);
	/**
	*	Ustawienie nowego imienia dla studenta
	*	\param name Nowe imie studenta
	*/
	void SetName(const std::string& name);
	/**
	*	Wypisywanie informacji o studencie
	*/
	void Print() const;
	/**
	*	Odczytywanie ID studenta
	*	\return ID studenta
	*/
	int GetID() const { return _id; }
private:
	/**
	*	Przechowanie ID dla nastepnego tworzonego studenta
	*/
	static int _currentID;
	/**
	*	Imie studenta
	*/
	std::string _name;
	/**
	*	Numer ID studenta
	*/
	int _id;
};

inline bool operator < (const Student& s1, const Student& s2) {
	return s1.GetID() < s2.GetID();
}