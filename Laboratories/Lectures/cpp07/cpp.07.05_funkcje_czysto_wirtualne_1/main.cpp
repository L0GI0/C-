/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 02-11-2004
/// \brief Inheritance. Pure virtual functions
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "CShape.h"
#include "CRec.h"
#include "CCirc.h"

int main(int argc, char * argv[])
{
	using namespace std;
	using namespace OOP;

	//Nie mo¿na stworzyæ obiektu klasy abstrakcyjnej
	//CShape aShape;
	CRrec aRec;
	CCirc aCirc;
	
	//mo¿emy u¿yæ referencji
	CShape& RefShape = aCirc;

	cout << "Pole RefShape (aCirc) = " << RefShape.Pole() << endl;
	RefShape.Rys();

	cout << "-------------------------------------\n";
	
	//mo¿emy u¿yæ wskaznika
	CShape* Shape;
	Shape = &aRec;
	cout << "Pole Shape* (aRec) = " << Shape->Pole() << endl;
	Shape->Rys();

	cout << "-------------------------------------\n";

	Shape = &aCirc;
	cout << "Pole Shape* (aCirc) = " << Shape->Pole() << endl;
	Shape->Rys();
	
	getchar();
	return 0;
}

