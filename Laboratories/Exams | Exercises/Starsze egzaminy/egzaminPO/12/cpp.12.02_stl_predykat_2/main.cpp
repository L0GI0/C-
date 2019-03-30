/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-12-2004
/// \brief STL. Predicates.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "stl_print.h"

/////////////////////////////////////////////////////////////////////////
	
using namespace std;

class Person 
{
public:
  Person() {}
  Person(const string& f, const string& n)
    : m_fn(f), m_ln(n) {}

  string firstname() const;
  string lastname() const;

private:
  string m_fn;    // imie
  string m_ln;    // nazwisko
};

inline string Person::firstname() const 
{
  return m_fn;
}

inline string Person::lastname() const 
{
  return m_ln;
}

ostream& operator<< (ostream& s, const Person& p)
{
  s << p.firstname() << " " << p.lastname();
  return s;
}

/////////////////////////////////////////////////////////////////////////
bool personSortCriterion (const Person& p1, const Person& p2)
{
  return p1.lastname() < p2.lastname() || 
         (p1.lastname() == p2.lastname() &&  p1.firstname() < p2.firstname());
}

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using OOP::stl_print_el;

	Person p1("Albert","Einstein");
	Person p2("Max","Planck");
	Person p3("Niels","Bohr");
	Person p4("Pierre","Cuire");
	Person p5("Maria","Cuire");

	vector<Person> p;
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	p.push_back(p4);
	p.push_back(p5);

	stl_print_el(p, "Lista osob:\n", "\n");

  // sortowanie
  sort(p.begin(), p.end(),     //zakres
         personSortCriterion); //predykat dwuargumentowy


	stl_print_el(p, "\nPosortowana lista osob:\n", "\n");
}
