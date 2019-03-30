/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 11-11-2004
/// \brief Inheritance. Virtual functions 1
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "CFraction.h"

int main(int argc, char* argv[])
{
	using namespace std;
	using namespace OOP;	

	CFraction aFrac;

	cout << "Podaj ulamek np. 1/2 = ";
	cin >> aFrac;
	cout << "aFrac = " << aFrac;
}
