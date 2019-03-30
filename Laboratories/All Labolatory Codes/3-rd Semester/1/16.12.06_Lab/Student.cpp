#include <iostream>
#include "Student.h"

int Student::IndexStudentID=0;

Student::Student() {

}

Student::Student(const char* name, const char* surname) {
	int CharCounter=0;
	while (*(name+CharCounter) != '\0')
		CharCounter++;
	_name = new char[CharCounter+1];

	for (int i=0; i<CharCounter+1; ++i)
		*(_name+i) = *(name+i);

	CharCounter=0;
	while (*(surname+CharCounter) != '\0')
		CharCounter++;
	_surname = new char[CharCounter+1];

	for (int i=0; i<CharCounter+1; ++i)
		*(_surname+i) = *(surname+i);


	_studentID = ++(Student::IndexStudentID);
}

void Student::Print() const {
	std::cout << "Student " << _studentID << ": " << _name << ", " << _surname << std::endl;
}

void Student::SetParentList(StudentsList* ParentList) {
	_parentList = ParentList;
}

StudentsList* Student::ParentList() const {
	return _parentList;
}

char*& Student::GetName() {
	return _name;
}

char*& Student::GetSurname() {
	return _surname;
}