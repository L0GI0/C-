/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Classes: Private class.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

class CPointCollection;

	// Point class. 
class CPoint 
{ 
	friend class CPointCollection;

private: 
	CPoint() : m_x(0.0),  m_y(0.0), m_Opis("")
	{ cout << "Konstruktor domniemany CPoint(" << m_Opis << ").\n"; }

	CPoint(double x, double y, string Opis = "") : m_x(x), m_y(y), m_Opis(Opis)
	{cout << "Konstruktor CPoint(" << m_Opis << ").\n"; }

	~CPoint()
	{ cout << "Destruktor CPoint(" << m_Opis << ").\n"; }

	double m_x; 
	double m_y; 
	string m_Opis;
}; 

/////////////////////////////////////////////////////////////////////////
class CPointCollection 
{ 
public: 
	CPointCollection()
	{ cout << "Konstruktor domniemany CPointCollection.\n"; } 

	CPointCollection(double x1, double y1, double x2, double y2, string opis1 = "", string opis2 = "") 
		: aPoint(x1, y1, opis1), bPoint(x2, y2, opis2)
	{ cout << "Konstruktor CPointCollection.\n"; } 

	~CPointCollection()
	{ cout << "Destruktor CPointCollection.\n"; }
	void print(void);

private: 
	CPoint aPoint, bPoint; 
}; 
/////////////////////////////////////////////////////////////////////////
void CPointCollection::print(void) 
{ 
	
	if(aPoint.m_Opis.length() > 0)
		cout << aPoint.m_Opis << "(x, y) = " << aPoint.m_x << ", " <<  aPoint.m_y << endl;
	else
		cout << "<bez_nazwy> " << "(x, y) = " << aPoint.m_x << ", " <<  aPoint.m_y << endl;

	if(bPoint.m_Opis.length() > 0)
		cout << bPoint.m_Opis << "(x, y) = " << bPoint.m_x << ", " <<  bPoint.m_y << endl << endl;
	else
		cout << "<bez_nazwy> " << "(x, y) = " << bPoint.m_x << ", " <<  bPoint.m_y << endl << endl;
} 
/////////////////////////////////////////////////////////////////////////
int main()
{
	//Niemo¿liwe jest utoworzenie obiektu CPoint
	//CPoint a;

	CPointCollection *aPointCollection;
	aPointCollection = new CPointCollection(1.1, 1.1, 2.2, 2.2, "pierwszy", "drugi");

	aPointCollection->print();
	delete aPointCollection;

	CPointCollection cPointCollection;
	cPointCollection.print();

	getchar();
	return 0;

}
