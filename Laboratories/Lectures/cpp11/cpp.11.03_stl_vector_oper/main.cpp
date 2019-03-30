/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-12-2004
/// \brief STL. Vector.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include "stl_print.h"

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;
	using OOP::stl_print_el;

	typedef vector<double> VecDbl;
	typedef vector<double>::const_iterator VecDblIter;
	
	VecDbl col;
	VecDblIter iter;

	//wstawianie na koniec
	for(unsigned i = 0; i < 10; ++i)
		col.push_back(i * 1.1);
	
	stl_print_el(col, "Po wstawieniu:\n");

	//wstawienie w dowolnym miejscu
	col.insert(col.begin(), 3.14159);

	stl_print_el(col, "\nPo insert 1:\n");

	//wstawianie calego zakresu
	col.insert(col.end(), col.begin(), col.end());

	stl_print_el(col, "\nPo insert 2:\n");

	//usuwanie pojedyncze
	col.erase(col.begin());
	col.erase(col.begin()+10);
	
	stl_print_el(col, "\nPo erase 1:\n");

	//usuwanie calego zakresu
	col.erase(col.begin(), col.begin() + 15);

	stl_print_el(col, "\nPo erase 2:\n");

	//zmiana rozmiaru z inicjalizacj¹
	col.resize(10, 3.14159);
	
	stl_print_el(col, "\nPo resize:\n");

	//wyczyszczenie
	col.clear();
}
