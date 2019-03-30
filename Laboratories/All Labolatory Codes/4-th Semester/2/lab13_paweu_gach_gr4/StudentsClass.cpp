#include "Main.h"

std::list<Student> StudentsClass::MakeList(const std::set<Student>& set) {
	std::list<Student> returnedList;
	for (std::set<Student>::iterator it = set.begin(); it != set.end(); ++it)
		returnedList.push_back(*it);
	return returnedList;
}
