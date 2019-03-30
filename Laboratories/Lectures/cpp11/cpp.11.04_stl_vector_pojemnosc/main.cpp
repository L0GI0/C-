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

	vector<double> col;

	//zarezerwowanie pamiêci
	col.reserve(5);

	cout << "size, capacity: " << endl;

	cout << col.size() << ' '	<< col.capacity() << '\n';

	size_t capacity = col.capacity();

	for(unsigned i = 0; i < 50; ++i)
	{
			col.push_back(i+1);

			if(capacity != col.capacity())
			{
				capacity = col.capacity();
				cout << col.size() << ' '
					<< col.capacity() << '\n';
			}
	}

	stl_print_el(col, "Po wstawieniu:\n");

	//skasowanie ostatnich 15 elem.
	col.erase(col.end()-15, col.end());
	
	stl_print_el(col, "Po usuniêciu 15 ostatnich:\n");
	
	cout << "size, capacity: " << endl;
	cout << col.size() << ' '
		<< col.capacity() << '\n';

	vector<double> col2(col);

	//zamiana wektorów
	col2.swap(col);

	cout << "Po funkcji swap:\nsize, capacity: " << endl;
	cout << col.size() << ' '
		<< col.capacity() << '\n';

}
