/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 28-09-2004
/// \brief Using pointers.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 20;
	int *c, *d, *tmp;
	
	c = &a;
	d = &b;

	cout << "a, b = " << a << ", " << b << endl;
	cout << "*c, *d = " << *c << ", " << *d << endl;
	cout << "c, d (adresy)= " << c << ", " << d << endl << endl;

	tmp = c;
	c = d;
	d = tmp;

	cout << "Po zamianie wskaŸników" << endl;
	cout << "a, b = " << a << ", " << b << endl;
	cout << "*c, *d = " << *c << ", " << *d << endl;
	cout << "c, d (adresy)= " << c << ", " << d << endl << endl;

	*c = -10;
	*d = -100;

	cout << "Po przypisaniu wartoœci do wskaŸników (*c = -10, *d = -100) " << endl;
	cout << "a, b = " << a << ", " << b << endl;

}
