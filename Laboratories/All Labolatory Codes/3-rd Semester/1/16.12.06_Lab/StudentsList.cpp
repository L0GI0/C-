#include <iostream>
#include "Student.h"
#include "StudentsList.h"


StudentsList::StudentsList() {

}

StudentsList::StudentsList(const char* listName) {
	_list = NULL;
	_counter = 0;
	int CharCounter=0;
	while (*(listName+CharCounter) != '\0')
		CharCounter++;
	_listName = new char[CharCounter+1];

	for (int i=0; i<CharCounter+1; ++i)
		*(_listName+i) = *(listName+i);
}

void StudentsList::PrintInfo() const {
	std::cout << "Students list: " << _listName << " (address: " << this << ")" << std::endl;
}

void StudentsList::AddStudentToList(Student* AddedStudent) {
	Student** oldList = _list;
	_list = new Student*[_counter+1];
	for (int i=0; i<_counter; ++i)
		*(_list+i) = *(oldList+i);
	if (_counter > 0)
		delete[] oldList;
	*(_list+(_counter++)) = AddedStudent;

}

void StudentsList::AddStudent(Student* student) {
	student->SetParentList(this);
	AddStudentToList(student);
}

void StudentsList::AddStudent(const char* name, const char* surname) {
	Student* NewStudent = new Student(name, surname);
	NewStudent->SetParentList(this);
	AddStudentToList(NewStudent);

}

void StudentsList::PrintAll() const {
	std::cout << _listName << std::endl;
	for (int i=0; i< _counter; ++i) {
		_list[i]->Print();
	}
}

StudentsList::~StudentsList() {
	for (int i=0; i<_counter; ++i) {
		delete[] _list[i]->GetName();
		delete[] _list[i]->GetSurname();
		delete _list[i];
	}
	delete[] _listName;
	delete[] _list;
}