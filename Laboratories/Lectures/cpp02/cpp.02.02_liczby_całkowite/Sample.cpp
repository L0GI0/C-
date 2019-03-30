/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Integer variables.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	int a, b, c;
	a = 10;
	b = 010;
	c = 0x10;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;
	
	cout << "(oct) a = " << oct << a << endl;
	cout << "(oct) b = " << oct << b << endl;
	cout << "(oct) c = " << oct << c << endl << endl;

	cout << "(hex) a = " << hex << a << endl;
	cout << "(hex) b = " << hex << b << endl;
	cout << "(hex) c = " << hex << c << endl << endl;

	cout << "(dec) a + b = " << a + b << endl;
	cout << "(dec) a + b + c = " << a + b + c << endl << endl;
	getchar();
	return 0;

}
