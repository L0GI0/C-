/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Classes: Default copy constructor.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

class CPoint 
{ 
public: 
	CPoint() : m_x(0.0),  m_y(0.0), m_Opis("")
	{ cout << "Konstruktor domniemany CPoint(" << m_Opis << ").\n"; }

	CPoint(double x, double y, string Opis = "") : m_x(x), m_y(y), m_Opis(Opis)
	{cout << "Konstruktor CPoint(" << m_Opis << ").\n"; }

	CPoint(CPoint& K)
	{ 
		m_Opis = K.m_Opis;
		m_x = K.m_x;
		m_y = K.m_y;
		cout << "Konstruktor kopiuj¹cy CPoint(" << K.m_Opis << ").\n"; 
	}

	~CPoint()
	{ cout << "Destruktor CPoint(" << m_Opis << ").\n"; }
	
	void print(void);
	void SetOpis(string Opis)
	{m_Opis = Opis; }

private: 
	double m_x; 
	double m_y; 
	string m_Opis;
}; 
/////////////////////////////////////////////////////////////////////////
void CPoint::print(void) 
{ 
	if(m_Opis.length() > 0)
		cout << m_Opis << "(x, y) = " << m_x << ", " <<  m_y << endl;
	else
		cout << "<bez_nazwy> " << "(x, y) = " << m_x << ", " <<  m_y << endl;
} 
/////////////////////////////////////////////////////////////////////////
int main()
{
	cout << "----------- Start ----------------\n";

	CPoint aPoint(1, 1, "pierwszy");
	CPoint bPoint = aPoint;	//dzia³a konstruktor kopiuj¹cy, a nie operator =
	//CPoint bPoint(aPoint);
	
	CPoint cPoint;
	cPoint = bPoint;

	aPoint.print();
	bPoint.print();
	cPoint.print();

	bPoint.SetOpis("drugi");
	cPoint.SetOpis("trzeci");
	bPoint.print();
	cPoint.print();


	getchar();
	return 0;

}
