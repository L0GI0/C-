/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 06-01-2005
/// \brief STL. Algorithm count(), min_element(), max_element().
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

/////////////////////////////////////////////////////////////////////////
bool isPrime (const int& nr)
{
  int number = abs(nr);
  
  if (number == 0 || number == 1) 
      return false;
      
  int div;
  for (div = number / 2; (number % div) != 0; --div) 
		;

  //je¿eli div == 1 to liczba pierwsza
  return div == 1;
}
/////////////////////////////////////////////////////////////////////////
bool maxmodulo(const int& a, const int& b)
{
	return abs(a) < abs(b) ? true : false;
}
/////////////////////////////////////////////////////////////////////////

int main(int argc, char **argv)
{
  deque<int> coll;
	deque<int>::iterator collIter;

  for(int i = 0; i < 10; ++i)
	{
		coll.push_back(i);
		coll.push_front(-i-1);
	}

	stl_print_el(coll, "Kolejka: ");
	cout << "Ilosc liczb pierwszych w coll: " << count_if(coll.begin(), coll.end(), isPrime) << endl;
	cout << "Najmniejsza liczba to: " << *min_element(coll.begin(), coll.end()) << endl;
	cout << "Najwieksza modulo liczba to: " << *max_element(coll.begin(), coll.end(), maxmodulo) << endl;

}
