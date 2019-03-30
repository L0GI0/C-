/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-12-2004
/// \brief STL. List.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <list>
#include "stl_print.h"


inline bool isEven(const int& l)
{
	return (l % 2 == 0);
}

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;
	using OOP::stl_print_el;

  list<int> list;

  // wype³nienie
  for (int i = 0; i < 10; ++i) 
  {
    list.push_back(i);
	list.push_front(i);
  }
  
	stl_print_el(list, "Lista:\n");

	cout << "Poczatek i koniec: " << list.front() << ' ' << list.back() << endl;

	//usuniêcie elementów o wartoœci 3
	list.remove(3);

	stl_print_el(list, "\nremove(3):\n");

	//usuniêcie elementów parzystych
	list.remove_if(isEven);
	
	stl_print_el(list, "\nremove_if:\n");
}
