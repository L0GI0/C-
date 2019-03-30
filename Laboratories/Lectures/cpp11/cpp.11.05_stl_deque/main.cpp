/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-12-2004
/// \brief STL. Deque.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <deque>
#include "stl_print.h"
#include "CFraction.h"

using namespace OOP;

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;
	using OOP::stl_print_el;

	//utworzenie
  deque<CFraction> coll;

  //wstawienie 
  coll.assign(3, CFraction(3, 5));
  coll.push_back(CFraction(4, 5));
  coll.push_front(CFraction(2, 5));

	stl_print_el(coll, "Assing, push:\n", ", ");

  //usuniecie z pocz¹tku i koñca
  coll.pop_front();
  coll.pop_back();
	
	stl_print_el(coll, "\nPop:\n", ", ");
  
	for (unsigned i = 1; i < coll.size(); ++i) 
      coll[i] =  CFraction(1,2) * coll[i];

  //zmiania rozmiaru
  coll.resize(6, CFraction());

  stl_print_el(coll, "\nResize:\n", ", ");
}
