/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-12-2004
/// \brief STL. Set runtime compare.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include "stl_print.h"

/////////////////////////////////////////////////////////////////////////
	
using namespace std;
using OOP::stl_print_el;


template <typename T>
	class RuntimeCmp 
{
public:
	enum cmp_mode {normal, reverse};

	RuntimeCmp(cmp_mode m=normal) : m_mode(m) 
	{ }
  
	bool operator()(const T& t1, const T& t2) const 
	{ return m_mode == normal ? t1 < t2 : t2 < t1; }

  // comparison of sorting criteria
  bool operator==(const RuntimeCmp& rc) 
	{ return m_mode == rc.m_mode; }

private:
  cmp_mode m_mode;
};

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{

	//IntSet - typ zbior z kryterium sortowania RuntimeCmp<int>
  typedef set<int, RuntimeCmp<int> > IntSet;

  IntSet coll1;

	//wstawienie elementow
  coll1.insert(4);
  coll1.insert(3);
  coll1.insert(5);
  coll1.insert(1);
  coll1.insert(6);
  coll1.insert(2);
  coll1.insert(5);

	stl_print_el(coll1, "Zbior 1:\n");

	//uzycie obiektu typu RuntimeCmp<int> do sortowanie malejacego
	RuntimeCmp<int> reverse_order(RuntimeCmp<int>::reverse);
	
	IntSet coll2(reverse_order);

  coll2.insert(4);
  coll2.insert(3);
  coll2.insert(5);
  coll2.insert(1);
  coll2.insert(6);
  coll2.insert(2);
  coll2.insert(5);
	
	stl_print_el(coll2, "Zbior 2:\n");

  //value_comp() zwraca obiekt wykorzystywany jako kryterium sortowania
  if (coll1.value_comp() == coll2.value_comp()) 
    cout << "\nZbior 1 i zbior 2 posiadaja to samo kryterium sortowania" << endl;
  else
		cout << "\nZbior 1 i zbior 2 posiadaja rozne kryteria sortowania" << endl;

	//przypisanie zbioru 2 do 1 - musza byc tego samego typu
  coll1 = coll2;

  coll1.insert(7);

	stl_print_el(coll1, "\nZbior 1:\n");

  if (coll1.value_comp() == coll2.value_comp()) 
    cout << "\nZbior 1 i zbior 2 posiadaja to samo kryterium sortowania" << endl;
  else
		cout << "\nZbior 1 i zbior 2 posiadaja rozne kryteria sortowania" << endl;

}