/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 30-09-2004
/// \brief Classes: first class.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

class CPunkt
{
public:
	float x;
	float y;
};

int main(int argc, char * argv[])
{
using namespace std;
	CPunkt aPunkt;
	CPunkt *fPunkt = new CPunkt;
	CPunkt &cPunkt = aPunkt;

	aPunkt.x = 1;
	aPunkt.y = 1;
	cout << "aPunkt.x, aPunkt.y = " << aPunkt.x << ", " << aPunkt.y << endl;

	fPunkt->x = 2;
	(*fPunkt).y = 2;
	cout << "fPunkt->x, fPunkt->y = " << (*fPunkt).x << ", " << fPunkt->y << endl;
	
	cPunkt.x = 3;
	cPunkt.y = 3;
	cout << "aPunkt.x, aPunkt.y = " << aPunkt.x << ", " << aPunkt.y << endl;
	getchar();
	delete fPunkt;


}
