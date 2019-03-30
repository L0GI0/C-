#ifndef _CSHAPE_H_
#define _CSHAPE_H_

namespace OOP{
class CShape
{
public:
	//friend std::ostream& operator<<(std::ostream& o, const CShape& K)
	//{	K.printOn(); return o; }

	CShape(double x = 0, double y = 0) : m_x(x), m_y(y)
	{}
	virtual ~CShape()
	{}

	double GetX() const;
	double GetY() const;
	void SetX(double m_x);
	void SetY(double m_y);

	virtual double Pole() const = 0;

protected:
	//void printOn() const;

	double m_x,m_y;
};
double CShape::GetX() const
{
	return m_x;
}

double CShape::Pole() const 
	{ return 0.0; }

/////////////////////////////////////////////////////////////////////////
double CShape::GetY() const
{
	return m_y;
}

/////////////////////////////////////////////////////////////////////////
void CShape::SetX(double m_x)
{
	this->m_x = m_x;
}

/////////////////////////////////////////////////////////////////////////
void CShape::SetY(double m_y)
{
	this->m_y = m_y;
}

/////////////////////////////////////////////////////////////////////////
}//namespace OOP
#endif