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

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;
	using OOP::stl_print_el;

  list<int> list1, list2;

  // wype³nienie
  for (int i = 0; i < 6; ++i) 
  {
    list1.push_back(i);
    list2.push_front(i);
  }
  
	stl_print_el(list1, "Lista 1:\n");
	stl_print_el(list2, "Lista 2:\n");

	//wstawia wszystkie elem. list1 przed drugi elemet list2
	list2.splice(++list2.begin(), //pozycja
								list1);					//lista Ÿród³owa

	cout << "\nPo splice 1:\n";
	stl_print_el(list1, "Lista 1:\n");
	stl_print_el(list2, "Lista 2:\n");

	//przenosi pierwszy element na koniec tej samej listy
  list2.splice(list2.end(),        //pozycja 
                list2,             //lista Ÿród³owa
                list2.begin());    //pozycja w liscie Ÿród³owej

	cout << "\nPo splice 2:\n";
	stl_print_el(list2, "Lista 2:\n");

	//sortowanie list2
  list2.sort();

	///przypisanie
  list1 = list2;

	//usuniecie duplikatow w list2
  list2.unique();

	cout << "\nPo sort i unique:\n";
	stl_print_el(list1, "Lista 1:\n");
	stl_print_el(list2, "Lista 2:\n");

  //po³acznie posortowanych list1 i list2
  list1.merge(list2);

	cout << "\nPo merge:\n";
	stl_print_el(list1, "Lista 1:\n");
	

	//odwrócenie kolejnoœci w list1
	list1.reverse();
	cout << "\nPo reverse:\n";
	stl_print_el(list1, "Lista 1:\n");
}
