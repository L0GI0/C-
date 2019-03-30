#ifndef _CSHAPE_H_
#define _CSHAPE_H_
		
#include <iostream>

namespace OOP
{
class CShape
{
public:
	CShape(double x = 0, double y = 0) : m_x(x), m_y(y)
	{}
	virtual ~CShape() 
	{}
	double GetX() const;
	double GetY() const;
	void SetX(double x);
	void SetY(double y);

	virtual void Rys() const = 0
	{ std::cout << "Nie wiem jak\n"; }

	virtual double Pole() const = 0
	{	return 0; }

protected:
	double m_x, m_y;
};
double CShape::GetX() const
{
	return m_x;
}

/////////////////////////////////////////////////////////////////////////
double CShape::GetY() const
{
	return m_y;
}

/////////////////////////////////////////////////////////////////////////
void CShape::SetX(double x)
{
	m_x = x;
}

/////////////////////////////////////////////////////////////////////////
void CShape::SetY(double y)
{
	m_y = y;
}
} //namespace OOP
#endif