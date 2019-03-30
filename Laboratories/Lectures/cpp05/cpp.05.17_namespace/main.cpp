/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 14-10-2004
/// \brief Classes: Convertions 3
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "CFraction.h"

namespace OOP {
	CFraction multi1(CFraction *a, CFraction *b);
	CFraction multi2(CFraction &a, CFraction &b);
}//End of namespace OOP

/////////////////////////////////////////////////////////////////////////
int main()
{
	const OOP::CFraction aFraction(1, 2);
	
	using OOP::CFraction;
	CFraction bFraction(1, 2);
	CFraction cFraction;
	
	cFraction = OOP::multi1(const_cast<CFraction*>(&aFraction), &bFraction);
	cFraction.print();

	using namespace OOP;
	
	const CFraction &dFraction = bFraction;

	//cFraction = multi2(dFraction, bFraction); //BLAD kompilacji
	cFraction = multi2(const_cast<CFraction&>(dFraction), bFraction);
	cFraction.print();

	getchar();
	return 0;
}

/////////////////////////////////////////////////////////////////////////
namespace OOP {
	CFraction multi1(CFraction *a, CFraction *b)
	{
		CFraction tmp;
		tmp.m_l = a->m_l * b->m_l;
		tmp.m_m = a->m_m * b->m_m;
		return tmp;
	}

	/////////////////////////////////////////////////////////////////////////
	CFraction multi2(CFraction &a, CFraction &b)
	{
		CFraction tmp;
		tmp.m_l = a.m_l * b.m_l;
		tmp.m_m = a.m_m * b.m_m;
		return tmp;
	}
}//End of namespace OOP
