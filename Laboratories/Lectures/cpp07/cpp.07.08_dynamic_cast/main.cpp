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
#include "CRecLbl.h"

int main(int argc, char* argv[])
{
	using namespace std;
	using namespace OOP;

	CRecLbl aCRecLbl("Jeden");
	CRecLbl bCRecLbl("Dwa");

	CShape* ptrShape[2];
	ptrShape[0] = &aCRecLbl;
	ptrShape[1] = &bCRecLbl;

	CRecLbl* ptrCRecLbl;


	ptrCRecLbl = dynamic_cast<CRecLbl*>(ptrShape[0]);
	ptrCRecLbl->printLbl();

	dynamic_cast<CRecLbl*>(ptrShape[1])->printLbl();


	CRecLbl cCRecLbl("Trzy");
	CShape& refShape = cCRecLbl;
	dynamic_cast<CRecLbl&>(refShape).printLbl();

	getchar();
	return 0;
}

