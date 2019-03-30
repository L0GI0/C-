#include "Main.h"
#include <iostream>

int Student::_currentID = 0;

Student::Student(): _name(), _id(++_currentID) {

}

Student::Student(const Student& copy) {
	_name = copy._name;
	_id = ++_currentID;
}

void Student::SetName(const std::string& name) {
	_name = name;
}

void Student::Print() const {
	std::cout << "I am " << _name << ".\n"; 
}