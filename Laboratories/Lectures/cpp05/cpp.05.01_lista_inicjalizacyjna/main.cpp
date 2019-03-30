/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 06-10-2004
/// \brief Classes: Constructors and initialization list.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

class CPoint 
{ 
public: 
	CPoint() : m_x(0.0),  m_y(0.0), m_Opis("")
	{}

	CPoint(double x, double y, std::string Opis = "") : m_x(x), m_y(y), m_Opis(Opis)
	{}

	void print(void) const;

private: 
	double m_x; 
	double m_y; 
	std::string m_Opis;

}; 
/////////////////////////////////////////////////////////////////////////
void CPoint::print(void) const
{ 
	if(m_Opis.length() > 0)
		std::cout << m_Opis << "(x, y) = " << m_x << ", " <<  m_y << std::endl;
	else
		std::cout << "<bez_nazwy> " << "(x, y) = " << m_x << ", " <<  m_y << std::endl;
} 
/////////////////////////////////////////////////////////////////////////

int main()
{
	CPoint aPoint;
	CPoint bPoint(1, 1, "bPoint");
	CPoint cPoint = CPoint(2, 2, "cPoint");
	CPoint dPoint(3, 3);
	
	aPoint.print();
	bPoint.print();
	cPoint.print();
	dPoint.print();


	getchar();
	return 0;
}
