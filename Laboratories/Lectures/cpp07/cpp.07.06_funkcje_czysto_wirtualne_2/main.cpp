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
#include "CLine.h"

int main(int argc, char* argv[])
{
	using namespace std;
	using namespace OOP;
	CRec aRec = CRec(0, 0, 2, 2);
	CLine aLine;
	
	CShape* Shape;
	Shape = &aRec;
	cout << "Pole Shape* (aRec) = " << Shape->Pole() << endl;
	Shape->Rys();

	cout << "-------------------------------------\n";

	Shape = &aLine;
	cout << "Pole Shape* (aLine) = " << Shape->Pole() << endl;
	Shape->Rys();

	getchar();
	return 0;
}

