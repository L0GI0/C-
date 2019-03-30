/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 06-01-2005
/// \brief STL. Algorithm for_each().
/////////////////////////////////////////////////////////////////////////
	
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
#include <functional>
#include "stl_print.h"

/////////////////////////////////////////////////////////////////////////
using namespace std;
using OOP::stl_print_el;


/////////////////////////////////////////////////////////////////////////

int main(int argc, char **argv)
{
  deque<int> coll, coll2(20); 
	
	for(int i = 0; i < 20; ++i)
		coll.push_back(i % 4);

	stl_print_el(coll, "Lista1:  ");

  //zamienia wartosci 2 na 10
	replace(coll.begin(), coll.begin() + 10, 2, 10);
	stl_print_el(coll, "Lista1 replace:  ");

  //zamienia wartosci parzyste na 10
	replace_if(coll.begin(), coll.begin() + 10, not1(bind2nd(modulus<int>(), 2)), 10);
	stl_print_el(coll, "Lista1 replace_if:  ");

  //zamienia przy kopiowaniu 0 na -2
	replace_copy(coll.begin(), coll.end(), coll2.begin(), 0, -2);
	stl_print_el(coll2, "Lista2 replace_copy:  ");

  //zamienia przy kopiowaniu nieparzyste na 1
	replace_copy_if(coll.begin(), coll.end(), coll2.begin(), bind2nd(modulus<int>(), 2), 1);
	stl_print_el(coll2, "Lista2 replace_copy_if:  ");

}