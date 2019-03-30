#ifndef _CREC_H_
#define _CREC_H_
	
#include <iostream>
#include "CShape.h"

#include <iostream>

namespace OOP
{
class CRec : public CShape
{
public:
	CRec(double x = 0, double y = 0, double a = 1, double b = 1) : CShape(x, y), m_a(a), m_b(b)
	{}
	double Pole() const;
	void Rys() const; 

protected:
	double m_a, m_b;
};

/////////////////////////////////////////////////////////////////////////
double CRec::Pole() const
{
	return m_a * m_b;
}

/////////////////////////////////////////////////////////////////////////
void CRec::Rys() const
{
	std::cout << "Rysuj CRec\n";
}
} //namespace OOP
#endif