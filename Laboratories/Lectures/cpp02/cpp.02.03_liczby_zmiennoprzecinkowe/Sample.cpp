/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Floating point variables.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main(int argc, char * argv[])
{
	float r1 = 10;
	float r2 = 10e2;
	
	cout << "Obwod (r1=10) = " << 2 * r1 * M_PI << endl;
	cout << "Pole (r1=10) = " << r1 * r1 * M_PI << endl << endl;

	cout << "Obwod (r2=1e1) = " <<  r2 << endl;
	cout << "Pole (r2=1e1) = " << r2 * r2 * M_PI << endl;

	getchar();
	return 0;
}
