/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 28-09-2004
/// \brief Using functions with table as argument.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int suma(int t[], const unsigned i = 10)
{
	int sum = 0;

	for(unsigned n = 0; n < i; ++n)
		sum += t[n];
	
	return sum;
}

int main(int argc, char *argv[])
{
	const unsigned i = 10;
	int t[i];
	
	for(unsigned n = 0; n < i; ++n)
	{
		t[n] = n+1;
		cout << t[n] << endl;
	}
	cout << "Suma elementow tablicy = " << suma(t, i) << endl;
	getchar();
}
