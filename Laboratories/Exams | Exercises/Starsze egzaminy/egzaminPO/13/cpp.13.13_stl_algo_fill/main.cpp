/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 06-01-2005
/// \brief STL. Algorithm fill(), generate().
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
  deque<int> coll(20); 
	
	stl_print_el(coll, "Lista1:  ");

	fill(coll.begin(), coll.end()-5, 5);
	stl_print_el(coll, "Lista1 fill:  ");

	fill_n(coll.rbegin(), 10, 10);
	stl_print_el(coll, "Lista1 fill_n:  ");

	generate(coll.begin(), coll.end(), rand);
	stl_print_el(coll, "Lista1 generate: ");

	generate_n(front_inserter(coll), 10,  rand);
	stl_print_el(coll, "Lista1 generate_n:  ");

}