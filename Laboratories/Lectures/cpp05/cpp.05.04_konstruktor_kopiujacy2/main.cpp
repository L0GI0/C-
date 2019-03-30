/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Classes: Copy constructors not default (with or without const).
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

class CPoint2 
{ 
public: 
	CPoint2() : m_x(0.0),  m_y(0.0), m_Opis("")
	{ cout << "Konstruktor domniemany CPoint2(" << m_Opis << ").\n"; }

	CPoint2(double x, double y, string Opis) : m_x(x),  m_y(y), m_Opis(Opis)
	{ cout << "Konstruktor CPoint2(" << m_Opis << ").\n"; }

	CPoint2(const CPoint2 &K);
	//CPoint2(CPoint2 &K)

	~CPoint2()
	{ cout << "Destruktor CPoint2(" << m_Opis << ").\n"; }
	
	void print(void) const; 
	void SetOpis(string Opis)
	{m_Opis = Opis; }

private: 
	double m_x; 
	double m_y; 
	string m_Opis;
}; 
/////////////////////////////////////////////////////////////////////////
CPoint2::CPoint2(const CPoint2 &K) 
//CPoint2::CPoint2(CPoint2 &K) 
{
	m_x = K.m_x; 
	m_y = K.m_y; 
	m_Opis = "InnyNizObiektuKopiwanego"; 
	cout << "Konstruktor kopiujacy CPoint2(" << m_Opis << ").\n";
}

void CPoint2::print(void) const
{ 
	if(m_Opis.length() > 0)
		cout << m_Opis << "(x, y) = " << m_x << ", " <<  m_y << endl;
	else
		cout << "<bez_nazwy> " << "(x, y) = " << m_x << ", " <<  m_y << endl;
} 
/////////////////////////////////////////////////////////////////////////
inline void fun(CPoint2 K)
{;}
/////////////////////////////////////////////////////////////////////////
inline CPoint2 fun()
{	CPoint2 K;	return K; }

int main()
{
	cout << "-------------- 1 -----------------\n";
	const CPoint2 aPoint2(1, 1, "pierwszy");

	CPoint2 bPoint2 = aPoint2;
	
	aPoint2.print();
	bPoint2.print();

	bPoint2.SetOpis("drugi2");

	cout << "\n-------------- 2 -----------------\n";
	aPoint2.print();
	bPoint2.print();

	cout << "\n-------------- 3 -----------------\n";

	fun(bPoint2);
	cout << "\n-------------- 4 -----------------\n";
	fun();
	cout << "\n-------------- 5 -----------------\n";


	getchar();
	return 0;
}
