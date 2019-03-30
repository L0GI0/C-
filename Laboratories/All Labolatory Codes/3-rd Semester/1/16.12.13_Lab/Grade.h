#ifndef GRADE_H
#define GRADE_H
#include "Student.h"

/**
* Klasa tworzaca obiekt oceny (Grade)
*/
class Grade {
private:
	const int _value; //!< Wartosc liczbowa oceny
	Student& _student; //!< Student do ktorego przypisana jest ocena
public:
	Grade(const int value, Student& student); //!< Konstruktor tworzacy ocene
	void print() const; //!< Funkcja wypisujaca wartosc liczbowa ocene oraz jej "wlasciciela"
};

#endif