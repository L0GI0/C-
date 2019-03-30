/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 30-09-2004
/// \brief Operators: new and delete.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	float *f, *g;
	f = new float;
	g = new float;

	float* const ff = new float[10];

	cout << "*f = " << *f << endl;
	*f = 10.0;
	cout << "*f po inicjalizacji = " << *f << endl;
	
	for(int i = 0; i < 10; i++)
		*(ff + i) = (float)(i+1)/2;

	for(int i = 0; i < 10; i++)
		cout << *(ff + i) << endl;

	//g = f; //BLAD

	delete g;
	delete f;
	
	//*f = 10; //B£¥D

	delete [] ff;
}