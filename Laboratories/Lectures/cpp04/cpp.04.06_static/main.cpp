/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 30-09-2004
/// \brief Classes: static member and function.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "CPunkt.h"

int CPunkt::n; //nie ma slowa static

int main(int argc, char * argv[])
{
	using namespace std;

	cout << "CPunkt::n = " << CPunkt::GetN() << endl;
	
	CPunkt *f;
	f = new CPunkt(10,20);

	cout << "CPunkt::n = "  << f->GetN() << endl;
	
	delete f;

	CPunkt a[3];
	cout << "CPunkt::n = "  << a[1].GetN() << endl;
	//a[0].n = 0; //BLAD bo n jest prywatne
//moje pierdulki
//	a[1].SetX(100);
//	cout << a[1].GetN() << endl;
	getchar();
}
