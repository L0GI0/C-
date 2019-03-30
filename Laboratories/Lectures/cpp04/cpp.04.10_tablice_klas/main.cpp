/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Classes: Tables with classes.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

class CPoint 
{ 
public: 
	CPoint(double x = 0.0, double y = 0.0)
	{m_x = x;  m_y = y; }
	
	void SetX(double x)
		{m_x = x;}

	void SetY(double y)
		{m_y = y;}

	double GetX() const
		{ return m_x; }

	double GetY() const
		{ return m_y; }

	void printOut() const
		{std::cout << m_x << ", " << m_y;}

private: 
	double m_x; 
	double m_y; 
}; 
/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	const unsigned int n = 6;
	CPoint Tab1[n];

	//referencja do pierwszego elementu tablicy Tab1
	CPoint &Ref = Tab1[0];
	
	//wype³nienie Tab1
	for(unsigned int i = 0; i < n; ++i)
		Tab1[i].SetX(i), Tab1[i].SetY(i+1);

	cout << "------------- Tab1 -------------------\n";
	//wypisanie Tab1
	for(unsigned int i = 0; i < n; ++i)
	{
		cout << i << ": ";
		Tab1[i].printOut();
		cout << endl;
	}
	
	cout << "----------- Ref - Tab[0] -------------\n";

	//zmiania Tab1[0] przez referencje
	Ref.SetX(1.1);
	Ref.SetY(1.1);

	//wypisanie Tab1[0]
	Tab1[0].printOut();
	cout << "\n------------ Tab2 --------------------\n";

	//utworzenie Tab2 z jednoczesn¹ inicjalizacj¹ 
	CPoint Tab2[n] = {CPoint(1, 1),
										CPoint(2, 2),
										CPoint(3, 3)};

	//wypisanie Tab2
	for(unsigned int i = 0; i < n; ++i)
	{
		cout << i << ": ";
		Tab2[i].printOut();
		cout << endl;
	}

	cout << "-------------- Tab3 ------------------\n";
	//utworzenie Tab3 z jednoczesn¹ inicjalizacj¹ 
	//u¿ywaj¹c niejawnych wywo³añ konstruktorów
	CPoint Tab3[n] = {1, 1,
										2, 2,
										3, 3};

	//wypisanie Tab3
	for(unsigned int i = 0; i < n; ++i)
	{
		cout << i << ": ";
		Tab3[i].printOut();
		cout << endl;
	}
	getchar();
	return 0;
}
