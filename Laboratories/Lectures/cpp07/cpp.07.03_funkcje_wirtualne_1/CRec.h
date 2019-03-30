#ifndef _CREC_H_
#define _CREC_H_
	
#include <iostream>
#include "CShape.h"

#include <iostream>

namespace OOP
{
class CRrec : public CShape
{
public:
	CRrec(double x = 0, double y = 0, double a = 1, double b = 1) : CShape(x, y), m_a(a), m_b(b)
	{}
	virtual double Pole() const;
	virtual void Rys() const; 

protected:
	double m_a, m_b;
};

/////////////////////////////////////////////////////////////////////////
double CRrec::Pole() const
{
	return m_a * m_b;
}

/////////////////////////////////////////////////////////////////////////
void CRrec::Rys() const
{
	std::cout << "Rysuj CRrec\n";
}
} //namespace OOP
#endif