#include <iostream>
#include "Grade.h"

Grade::Grade(const int value, Student& student) :
		_value(value), 
		_student(student)
{
	student.addGrade(value);
}

void Grade::print() const {
	std::cout << "Grade print value=" << _value << " studentID=" << _student._studentID << std::endl;
}