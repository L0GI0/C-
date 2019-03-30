/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 06-11-2004
/// \brief Inheritance, copy constructor.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "CAmf.h"


/////////////////////////////////////////////////////////////////////////
int main(int argc, char * argv[])
{
	using namespace std;
	using namespace OOP;
	
	CAmf aAmf;

	//BLAD bo nie wiadomo, ktora funkcje uzyc z CAuto czy z CLodz
	//aAmf.travel(10);

	//musimy uzyc operator zakresu
	aAmf.CAuto::travel(100);
	aAmf.CLodz::travel(10);

	aAmf.printTraveled();

	//BLAD bo nie wiadomo, ktora funkcje uzyc z CAuto czy z CLodz
	//pomimo tego ze nia ma dostepu do fun z CAuto
	//aAmf.fun();

	getchar();
	return 0;

}