/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 02-11-2004
/// \brief Inheritance. dynamic_cast needed.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <typeinfo>
#include "CCirc.h"
#include "CRec.h"
#include "CShapeGrup.h"

int main(int argc, char* argv[])
{
	using namespace std;
	using namespace OOP;

	CRec aRec(1,1,1,1), bRec(2,2,2,2);
	CCirc aCirc(3,3,3), bCirc(4,4,4);
	
	CShapeGrup g;

	g.Add(aRec);
	g.Add(bRec);

	CShape& ref = g;
	dynamic_cast<CShapeGrup&>(ref).Add(aCirc);
	dynamic_cast<CShapeGrup&>(ref).Add(bCirc);
	
	g.Rys();

	getchar();
	return 0;
}

