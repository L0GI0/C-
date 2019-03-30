#ifndef _CREC_H_
#define _CREC_H_	
	
#include "CShape.h"

namespace OOP
{
class CRec : public CShape
{
public:
	CRec(double x = 0, double y = 0) : CShape(x, y)
	{}
	double Pole() const;
	void rys(void) const;

	char a;
};

/////////////////////////////////////////////////////////////////////////
double CRec::Pole() const
{
	return m_x * m_y;
}

/////////////////////////////////////////////////////////////////////////
void CRec::rys(void) const
{
	std::cout << "Rysuj CRrec\n";
}

/////////////////////////////////////////////////////////////////////////
} //namespace OOP
#endif