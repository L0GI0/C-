/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 06-01-2005
/// \brief STL. Algorithm: rotate(), rotate_copy().
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



int main(int argc, char **argv)
{
  vector<int> coll1; 
	deque<int> coll2(20);
	
  for(int i = 0; i < 10; ++i)
		coll1.push_back(i);

	stl_print_el(coll1, "Lista1:         ");

	rotate(coll1.begin(), coll1.begin()+3, coll1.end());
	stl_print_el(coll1, "Lista1 rotate:  ");

	rotate_copy(coll1.begin(), coll1.begin()+5, coll1.end(), coll2.begin() +7);
	stl_print_el(coll2, "Lista2 rotate:  ");
}
