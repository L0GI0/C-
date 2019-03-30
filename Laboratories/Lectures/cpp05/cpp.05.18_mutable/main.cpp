/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-10-2004
/// \brief Classes: Mutable 
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "CFraction.h"

/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace OOP;
	const CFraction aFraction(1, 2, "aFraction");
	const CFraction bFraction;

	aFraction.printOut();

	bFraction.SetOpis("bFraction"); //OK mimo i¿ obiekt sta³y
	//bFraction.SetLM(1, 2); //Blad bo obiekt sta³y

	bFraction.printOut();

	getchar();
	return 0;
}
