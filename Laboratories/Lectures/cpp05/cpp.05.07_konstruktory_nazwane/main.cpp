/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 08-11-2004
/// \brief Constructor. Named Constructor Idiom
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
 
 class CPoint 
 {
 public:
   static CPoint rectangular(double x, double y);      // Wsp. prostok¹tne
   static CPoint polar(double radius, double angle);   // Wsp. biegunowe
 
	double GetX() const
	{ return m_x; }

	double GetY() const
	{ return m_y; }

 private: //zapobiegnie mo¿liwoœci dziedziczenia
   CPoint(double x=0, double y=0);
   double m_x, m_y;
 };
 
 inline CPoint::CPoint(double x, double y) : m_x(x), m_y(y) 
 { }
 
 inline CPoint CPoint::rectangular(double x, double y)
 { return CPoint(x, y); }
 
 inline CPoint CPoint::polar(double radius, double angle)
 { return CPoint(radius*cos(angle), radius*sin(angle)); } 

/////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
	using namespace std;

  CPoint p1 = CPoint::rectangular(5.7, 1.2);   // Wsp. prostok¹tne
	CPoint p2 = CPoint::polar(5.7, 1.2);         // Wsp. biegunowe

	cout << "CPoint p1: " << p1.GetX() << ", " << p1.GetY() << endl;
	cout << "CPoint p2: " << p2.GetX() << ", " << p2.GetY() << endl;

	getchar();
	return 0;
}

