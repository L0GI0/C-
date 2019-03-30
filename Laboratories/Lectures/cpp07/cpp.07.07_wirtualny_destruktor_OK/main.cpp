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
	CShape* ptrShape;

	for(long i = 0; i < 10000000; i++)
	{
		if(i % 10000 == 0)
			cout << "i = " << i << "               \r";
		ptrShape = new CRecLbl;
		delete ptrShape;
	}

	getchar();
	return 0;
}

