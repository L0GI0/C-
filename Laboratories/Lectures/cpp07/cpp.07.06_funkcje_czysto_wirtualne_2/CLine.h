#ifndef _CLINE_H_
#define _CLINE_H_
	
#include <iostream>
#include "CShape.h"

#include <iostream>

namespace OOP
{
class CLine : public CShape
{
public:
	CLine(double x = 0, double y = 0, double a = 1, double b = 1) : CShape(x, y), m_a(a), m_b(b)
	{}
	double Pole() const
	{ return CShape::Pole(); }
	void Rys() const; 

protected:
	double m_a, m_b;
};

/////////////////////////////////////////////////////////////////////////
void CLine::Rys() const
{
	std::cout << "Rysuj CLine\n";
}
} //namespace OOP
#endif