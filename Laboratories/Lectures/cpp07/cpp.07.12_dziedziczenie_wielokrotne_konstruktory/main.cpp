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
	OOP::CAmf aAmf(10, 100);

	aAmf.printTraveled();
	OOP::CAuto &duperele = aAmf;
	dynamic_cast<OOP::CAmf&>(duperele).printTraveled();
	getchar();
	return 0;
}

