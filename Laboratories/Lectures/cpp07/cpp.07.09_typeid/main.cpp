/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 02-11-2004
/// \brief Inheritance. Virtual functions 1
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <typeinfo>
#include "CCirc.h"
#include "CRec.h"

int main(int argc, char* argv[])
{
	using namespace std;
	using namespace OOP;

	CRec aRec, bRec;
	CCirc aCirc;
	CShape* ptr[2];

	cout << "Nazawa klasy obiektu aRec:  " << typeid(aRec).name() << endl;
	cout << "Nazawa klasy obiektu aCirc: " << typeid(aCirc).name() << endl;

	ptr[0] = &aRec;
	ptr[1] = &bRec;

	if(typeid(*ptr[0]) == typeid(*ptr[1]))
		cout << "Obiekty naleza do tej samej klasy.\n";
	else
		cout << "Obiekty naleza do roznych klas.\n";

	ptr[1] = &aCirc;

	if(typeid(*ptr[0]) == typeid(*ptr[1]))
		cout << "Obiekty naleza do tej samej klasy.\n";
	else
		cout << "Obiekty naleza do roznych klas.\n";

	getchar();
	return 0;

}