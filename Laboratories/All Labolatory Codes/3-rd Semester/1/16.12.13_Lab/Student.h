#ifndef STUDENT_H
#define STUDENT_H

class Grade;
/**
*	Klasa tworzaca obiekt Student
*/
class Student {
private:
	friend Grade;
	int _studentID; //!< ID Studenta
	/**
	*	Pozwolilem sobie skorzystac z tablicy intow zamiast operowac na klasie Grade.\n
	*	Wynikalo to troche z niewiedzy, ale rowniez z faktu, ze wartosc liczbowa oceny\n
	*	nie moze sie zmienic (obiekty const).
	*/
	int* _studentGrades; //!< Oceny studenta
	int _countStudentGrades; //!< Ilosc ocen studenta
	/**
	*	\param value Dodawana ocena
	*/
	void addGrade(const int value); //!< Dodawanie oceny studentowi
public:
	Student();
	void print() const; //!< Wypisanie danych studenta (ID oraz jego oceny)
	/**
	*	\param id Nowe ID studenta
	*/
	void setID(const int id); //!< Ustawienie na nowo ID studenta
	~Student();
};

#endif