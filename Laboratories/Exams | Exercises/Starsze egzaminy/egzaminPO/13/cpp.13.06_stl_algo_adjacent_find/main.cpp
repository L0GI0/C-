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
#include <algorithm>
#include <functional>
#include "stl_print.h"

/////////////////////////////////////////////////////////////////////////
using namespace std;
using OOP::stl_print_el;


bool podwoj(const int&a , const int&b)
{
  return a * 2 == b;
}
/////////////////////////////////////////////////////////////////////////

int main(int argc, char **argv)
{
  deque<int> coll;
	deque<int>::iterator collIter;
  
  deque<int> collSearch;

  for(int i = 0; i < 10; ++i)
	{
		coll.push_back(i);
		coll.push_back(i);
		coll.push_back(i);
		coll.push_back(i);
  }

  random_shuffle(coll.begin(), coll.end());

  stl_print_el(coll, "Lista:  ");

	cout << "Pozycja od poczatku pierwszego powdojnego wystapienia elementu w coll: " 
		<< distance(coll.begin(), 
          adjacent_find(coll.begin(), coll.end()))
          + 1 << endl;

	cout << "Pozycja od poczatku pierwszego wystapienia elementu\n  dla ktorego nastepny jest 2 razy wiekszy w coll: " 
		<< distance(coll.begin(), 
          adjacent_find(coll.begin(), coll.end(), podwoj))
          + 1 << endl;
}
