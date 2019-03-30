/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 30-09-2004
/// \brief Classes: constructor and destructor.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "CPunkt.h"

using namespace std;

int main(int argc, char * argv[])
{
	CPunkt a;

	a.SetX(10.0);
	a.SetY(10.0);

	cout << "a.m_x, a.m_y = " << a.GetX() << ", " << a.GetX() << endl << endl;

	CPunkt *f = new CPunkt(10, 20);
	delete f;

	getchar();
}
