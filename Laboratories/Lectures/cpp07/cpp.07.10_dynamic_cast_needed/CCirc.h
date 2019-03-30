#ifndef _CIRC_H_
#define _CIRC_H_
	
#include <iostream>
#include "CShape.h"
	
namespace OOP
{
class CCirc : public CShape
{
public:
	CCirc(double x = 0, double y = 0, double rad = 1) : CShape(x, y), m_rad(rad)
	{}
	double Pole() const;
	void Rys() const;

protected:
	double m_rad;
};

/////////////////////////////////////////////////////////////////////////
double CCirc::Pole() const
{
	return 3.14159 * m_rad * m_rad;
}

/////////////////////////////////////////////////////////////////////////
void CCirc::Rys() const
{
		std::cout << "Rysuj CCirc(" << m_x << ", "
														 << m_y << ", "
														 << m_rad << ")"
														 << std::endl;

}
} //namespace OOP
#endif