/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-12-2004
/// \brief STL. Map.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include "stl_print.h"

/////////////////////////////////////////////////////////////////////////
	
using namespace std;
using OOP::stl_print_el;

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
  typedef map<string, int> StrIntMap;

  StrIntMap coll1;

	//wstawienie elementow
  coll1.insert(make_pair("test4", 4));
  coll1.insert(make_pair("Test3", 3));
  coll1.insert(make_pair("test5", 5));

  coll1.insert(pair<string, int>("Test7", 7));
  coll1.insert(pair<string, int>("test6", 6));

	coll1.insert(StrIntMap::value_type("test2", 2));
  coll1.insert(StrIntMap::value_type("Test1", 1));

	cout << "Mapa 1 size, max_size: " << coll1.size() << ", " << coll1.max_size() << endl;
	stl_print_el(coll1, "Mapa 1:\n", "\n");

  //zmienna status
  pair<StrIntMap::iterator, bool> status;
	
	//proba wstawienia elementu istniejecego
	status = coll1.insert(make_pair("test4", 4));
  
	if(!status.second) 
		cout << "klucz \"test4\" juz istnieje" << endl;

  //drugi zbior zainicjalizowany poprzednim ale posortowany wg greater
  map<string, int, greater<string> >  coll2(coll1.begin(), coll1.end());
  
	coll2.insert(make_pair("test7", 7));
	coll2.insert(make_pair("Test9", 9));
	coll2.insert(make_pair("test8", 8));
	coll2.insert(make_pair("Test0", 0));

	stl_print_el(coll2, "\nMapa 2:\n", "\n");
  
	//usuwa elementy <=3 (nic nie zwraca)
  coll2.erase(coll2.begin(), coll2.find("test5"));

	
	unsigned num = coll2.erase("Test0");
	cout << num << " usunietych elementow" << endl;
	
	stl_print_el(coll2, "\nZbior 2 po usunieciu:\n", "\n");

	//zwraca pierwsz¹ pozycjê, która jest wiêksza b¹dŸ równa 
	cout << "\n*coll2.lower_bound(\"test7\") = " << coll2.lower_bound("test7")->first << endl;

	//zwraca pierwsz¹ pozycjê, która jest wiêksza
	cout << "*coll2.upper_bound(\"test7\") = " << coll2.upper_bound("test7")->first << endl;

	//zwraca pare (lower_bound, upper_bound)
	cout << "*coll2.equal_range(\"test7\") = " << (*coll2.equal_range("test7").first).first 
		<< ", " << (*coll2.equal_range("test7").second).first << endl << endl;

	cout << "\n*coll2.lower_bound(\"Test7\") = " << coll2.lower_bound("Test7")->first << endl;
	cout << "*coll2.upper_bound(\"Test7\") = " << coll2.upper_bound("Test7")->first << endl;
	cout << "*coll2.equal_range(\"Test7\") = " << (*coll2.equal_range("Test7").first).first
		<< ", " << (*coll2.equal_range("Test7").second).first << endl << endl;

}
