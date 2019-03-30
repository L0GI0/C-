/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 02-11-2004
/// \brief Inheritance. Virtual functions 3
/////////////////////////////////////////////////////////////////////////

#include <iostream>

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

	virtual void Rys() const
	{ std::cout << "Nie wiem jak!\n"; }
	virtual double Pole() const
	{ return 0.0; }

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


class CShapeNoVirtual
{
public:
	CShapeNoVirtual(double x = 0, double y = 0) : m_x(x), m_y(y)
	{}
	~CShapeNoVirtual() 
	{}
	double GetX() const;
	double GetY() const;
	void SetX(double x);
	void SetY(double y);

	void Rys() const
	{ std::cout << "Nie wiem jak!\n"; }
	double Pole() const
	{ return 0.0; }

protected:
	double m_x, m_y;
};
double CShapeNoVirtual::GetX() const
{
	return m_x;
}

/////////////////////////////////////////////////////////////////////////
double CShapeNoVirtual::GetY() const
{
	return m_y;
}

/////////////////////////////////////////////////////////////////////////
void CShapeNoVirtual::SetX(double x)
{
	m_x = x;
}

/////////////////////////////////////////////////////////////////////////
void CShapeNoVirtual::SetY(double y)
{
	m_y = y;
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(int argc, char * argv[])
{
	using namespace std;

	cout << "Rozmiar CShapeNoVirtual = " << sizeof(CShapeNoVirtual) << endl;
	cout << "Rozmiar CShape =          " << sizeof(CShape) << endl;


	getchar();
	return 0;
}
