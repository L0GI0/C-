#pragma once


class StudentsList;
/**
* Klasa tworzaca obiekty Student o polach Imie, Nazwisko oraz ID studenta
*/
class Student {
private:
	int _studentID; //!< ID studenta
	char* _name; //!< Imie studenta
	char* _surname; //!< Nazwisko studenta
	StudentsList* _parentList; //!< Wskaznik na rodzica (liste do ktorej nalezy student)
public:
	static int IndexStudentID; //!< Indeksowanie ID studentow
	Student();
	/**
	* Tworzenie obiektu student i przypisanie mu unikalnego ID
	* \param name Imie studenta
	* \param surname Nazwisko studenta
	*/
	Student(const char* name, const char *surname); //!< Tworzenie studenta, alokacja pamieci, wpisanie danych
	void Print() const; //!< Wypisanie danych studenta
	/**
	* \param ParentList Wskaznik na liste do ktorej nalezy wpisac studenta
	*/
	void SetParentList(StudentsList* ParentList); //!< Przypisanie danego studenta do listy
	/**
	* \return Wskaznik na liste do ktorej nalezy student
	*/
	StudentsList* ParentList() const; //!< Zwrocenie wskaznika na liste do ktorej nalezy student
	/**
	* \return Referencja na imie studenta
	*/
	char*& GetName(); //!< Zwrocenie referencji do imienia (dealokacja w StudentsList)
	/**
	* \return Referencja na nazwisko studenta
	*/
	char*& GetSurname(); //!< Zwrocenie referencji do nazwiska (dealokacja w StudentsList)
};