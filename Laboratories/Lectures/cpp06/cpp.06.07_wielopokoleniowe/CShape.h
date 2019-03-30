#ifndef _CSHAPE_H_
#define _CSHAPE_H_
	
class CShape
{
public:
	double GetX() const;
	double GetY() const;
	void SetX(double m_x);
	void SetY(double m_y);
	double Pole() const
	{ return 0.0; }

protected:
	double m_x,m_y;
};
inline double CShape::GetX() const
{
	return m_x;
}

/////////////////////////////////////////////////////////////////////////
inline double CShape::GetY() const
{
	return m_y;
}

/////////////////////////////////////////////////////////////////////////
inline void CShape::SetX(double m_x)
{
	this->m_x = m_x;
}

/////////////////////////////////////////////////////////////////////////
inline void CShape::SetY(double m_y)
{
	this->m_y = m_y;
}

/////////////////////////////////////////////////////////////////////////
#endif