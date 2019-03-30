/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 06-01-2005
/// \brief STL. Algorithm: random_shuffle().
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

class MyRandom 
{
public:
  //ptrdiff_t typ ze znakiem s³u¿¹cy do przechwowywania ró¿nicy wskaŸników
  ptrdiff_t operator() (ptrdiff_t max) 
  {
    double tmp;
    tmp = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
    return static_cast<ptrdiff_t>(tmp * max);
  }
};

int main(int argc, char **argv)
{
  vector<int> coll; 
	
  for(int i = 0; i < 20; ++i)
		coll.push_back(i+1);

	stl_print_el(coll, "Lista1:\n");
	random_shuffle(coll.begin(), coll.end());
	stl_print_el(coll, "\nLista1:\n");
  
  sort (coll.begin(), coll.end());

	stl_print_el(coll, "\nLista1:\n");
  MyRandom random;
	random_shuffle(coll.begin(), coll.end(), random);
	stl_print_el(coll, "\nLista1:\n");

}
