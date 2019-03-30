/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 02-11-2004
/// \brief Inheritance. Virtual functions 1
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "CShape.h"
#include "CRec.h"
#include "CCirc.h"

int main(int argc, char * argv[])
{
	using namespace std;
	using namespace OOP;

	CShape aShape;
	CRrec aRec;
	CCirc aCirc;
	
	cout << "Pole aRec = " << aRec.Pole() << endl;
	cout << "Pole aCirc = " << aCirc.Pole() << endl;
	
	cout << "-------------------------------------\n";
	
	aRec.Rys();
	aCirc.Rys();

	cout << "-------------------------------------\n";

	CShape* Shape;
	Shape = &aShape;
	cout << "Pole aShape = " << Shape->Pole() << endl;
	Shape->Rys();

	cout << "-------------------------------------\n";
	
	Shape = &aRec;
	cout << "Pole Shape (aRec) = " << Shape->Pole() << endl;
	Shape->Rys();

	cout << "-------------------------------------\n";

	Shape = &aCirc;
	cout << "Pole Shape (aCirc) = " << Shape->Pole() << endl;
	Shape->Rys();

	getchar();
	return 0;
}

