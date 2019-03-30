/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-12-2004
/// \brief STL. Mulitiset.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include "stl_print.h"

/////////////////////////////////////////////////////////////////////////
	
using namespace std;
using OOP::stl_print_el;

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
  typedef multiset<int,greater<int> > IntMultiSet;

  IntMultiSet coll1;

	//wstawienie elementow
  coll1.insert(4);
  coll1.insert(3);
  coll1.insert(5);
  coll1.insert(1);
  coll1.insert(6);
  coll1.insert(2);
  coll1.insert(5);

	cout << "Zbior 1 size, max_size: " << coll1.size() << ", " << coll1.max_size() << endl;
	stl_print_el(coll1, "Zbior 1:\n");

  //zmienna status
  IntMultiSet::iterator status;
	
	//proba wstawienia elementu istniejecego
	status = coll1.insert(4);
	
	stl_print_el(coll1, "Zbior 1 po wstawianiu:\n");  
  
	//drugi wielozbior zainicjalizowany poprzednim ale posortowany wg less<int>
  multiset<int> coll2(coll1.begin(), coll1.end());
  
	coll2.insert(10);
	coll2.insert(7);
	coll2.insert(7);
	coll2.insert(7);
	coll2.insert(7);
	coll2.insert(7);
	coll2.insert(7);
	coll2.insert(9);
	coll2.insert(8);

	stl_print_el(coll2, "\nZbior 2:\n");
  
	//usuwa elementy <=3 (nic nie zwraca)
  coll2.erase(coll2.begin(), coll2.find(3));

	//usuwniecie pierwszego elementu o wartosci 5
  coll2.erase(coll2.find(5));

	//usuniecie wszystkich eleme o wartosci 4
	unsigned num = coll2.erase(4);
	cout << num << " usunietych elementow" << endl;
	
	stl_print_el(coll2, "\nZbior 2 po usunieciu:\n");

	//zwraca pierwsz¹ pozycjê, która jest wiêksza b¹dŸ równa 
	cout << "\n*coll2.lower_bound(7) = " << *coll2.lower_bound(7) << endl;

	//zwraca pierwsz¹ pozycjê, która jest wiêksza
	cout << "*coll2.upper_bound(7) = " << *coll2.upper_bound(7) << endl;

	//zwraca pare (lower_bound, upper_bound)
	cout << "*coll2.equal_range(7) = " << *coll2.equal_range(7).first << ", " 
	     << *coll2.equal_range(7).second << endl << endl;

	cout << "*coll2.lower_bound(8) = " << *coll2.lower_bound(8) << endl;
	cout << "*coll2.upper_bound(8) = " << *coll2.upper_bound(8) << endl;
	cout << "*coll2.equal_range(8) = " << *coll2.equal_range(8).first << ", " 
	     << *coll2.equal_range(8).second << endl;
}
