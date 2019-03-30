#pragma once
#include <vector>
#include <set>
#include <list>


/**
*	Klasa sluzaca do wypisywania zawartosci 
*	roznych kontenerow oraz do operacji 
*	na tych kontenerach
*/
class StudentsClass {
public:
	/**
	*	Wypisywanie studentow z kontenera typu vector
	*	\param studentsList Kontener przechowujacy studentow
	*/
	template <typename T>
	static void PrintStudents(const T& studentsList) {
		for (typename T::const_iterator it = studentsList.begin(); it != studentsList.end(); ++it)
			(*it).Print();
	}
	/**
	*	Tworzenie kontenera typu lista (list) ze zbioru
	*	\param set Zbior z ktorego przenosimy dane
	*	\return Utworzona lista
	*/
	static std::list<Student> MakeList(const std::set<Student>& set);
};