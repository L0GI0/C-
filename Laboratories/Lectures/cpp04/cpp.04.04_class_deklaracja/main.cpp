/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 30-09-2004
/// \brief Classes: daclaration and defination in external files.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "CPunkt.h"

int main(int argc, char * argv[])
{
	using namespace std;
	CPunkt aPunkt;

	aPunkt.SetX(10.0);
	aPunkt.SetY(10.0);

	cout << "aPunkt.m_x, aPunkt.m_y = " << aPunkt.GetX() << ", " << aPunkt.GetX() << endl;

}
