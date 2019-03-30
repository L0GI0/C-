#include <iostream>
#include "Student.h"

Student::Student() :
		_studentID(0),
		_studentGrades(NULL),
		_countStudentGrades(0)
{

}

void Student::addGrade(const int value) {
	int* oldGrades = _studentGrades;
	_studentGrades = new int[_countStudentGrades+1];
	for (int i=0; i< _countStudentGrades; ++i)
		_studentGrades[i] = oldGrades[i];
	if (_countStudentGrades) delete[] oldGrades;
	_studentGrades[_countStudentGrades++] = value;
}

void Student::print() const {
	std::cout << "Student print ID=" << _studentID;
	if (_countStudentGrades) {
		std::cout << " grades:";
		for (int i=0; i<_countStudentGrades; ++i)
			std::cout << " " <<_studentGrades[i];
	}

	std::cout << std::endl;
}

void Student::setID(const int id) {
	_studentID = id;
}

Student::~Student() {
	delete[] _studentGrades;
}