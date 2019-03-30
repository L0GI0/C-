/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Functions and references.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

//! Return min value
int min(const int &a, const int &b);
//! Return max value
int max(const int &, const int &);
//! Swap two values
void zamien(int &a, int &b);

int main(int argc, char *argv[])
{
	int a = 1, b = 2;

	cout << "a, b =      " << a << ", " << b << endl;

	cout << "min(a, b) = " << min(a, b)  << endl;
	cout << "max(a, b) = " << max(a, b)  << endl;

	cout << "min(b, a) = " << min(b, a)  << endl;
	cout << "max(b, a) = " << max(b, a)  << endl << endl;

	cout << "Przed zamien a, b = " << a << ", " << b << endl;
	
	zamien(a, b);

	cout << "Po zamien a, b =    " << a << ", " << b << endl;
	getchar();
} 

int min(const int &a, const int &b)
{
	return a < b ? a : b; 
}

int max(const int &a, const int &b)
{
	return b < a ? a : b; 
}

void zamien(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}