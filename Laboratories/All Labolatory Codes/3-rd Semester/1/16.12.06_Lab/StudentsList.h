#pragma once

class Student;
/**
*Klasa tworzaca liste studentow - tablice z obiektami typu student
*/
class StudentsList {
private:
	char* _listName; //!< Nazwa listy
	Student** _list; //!< Lista studentow
	void AddStudentToList(Student* AddedStudent); //!< Funkcja dodajaca studenta do listy
	int _counter; //!< Licznik numerujacy studentow w liscie
public:
	StudentsList();
	/**
	*	\param listName Nazwa tworzonej listy
	*/
	StudentsList(const char* listName); //!< Tworzenie listy studentow o nazwie listName
	void PrintInfo() const; //!< Wyswietlenie informacji o liscie (nazwa i jej adres)
	void AddStudent(Student* student); //!< Dodanie studenta do listy
	/**
	* \param name Imie studenta
	* \param surname Nazwisko studenta
	*/
	void AddStudent(const char* name, const char* surname); //!< Utworzenie obiektu student i wpisanie do go listy
	void PrintAll() const; //!< Wypisanie wszystkich studentow nalezacych do listy
	~StudentsList();
};