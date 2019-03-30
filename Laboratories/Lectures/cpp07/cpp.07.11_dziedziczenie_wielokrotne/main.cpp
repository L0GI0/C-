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
	
	CAmf aAmf(10,100);
	aAmf.printTraveled();
	
	CAuto& refAuto = aAmf;
	refAuto.printTraveled();
	
	CLodz* ptrLodz = &aAmf;
	ptrLodz->printTraveled();

	getchar();
	return 0;

}

