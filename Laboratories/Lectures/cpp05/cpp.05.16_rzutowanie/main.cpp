/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 14-10-2004
/// \brief Classes: Convertions 3
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

/////////////////////////////////////////////////////////////////////////
class CFraction
{
public:
	friend CFraction multi1(CFraction *a, CFraction *b);
	friend CFraction multi2(CFraction &a, CFraction &b);

	CFraction(int l = 0, int m = 1) : m_l(l), m_m(m)
		{}

	//konstruktor s³u¿¹cy jako konwerter z liczby typu int
	CFraction(int l) : m_l(l), m_m(1)
		{std::cout << "\nDziala konstruktor konwertujacy (int)." << std::endl; }
	
	//funkcja konwertuj¹ca do float
	operator float() const
	{ 
		std::cout << "\nDziala funkcja konwertujaca do float." << std::endl;
	  return (float)m_l/(float)m_m; 
	}
	
	void print() const
	{ std::cout << m_l << "/" << m_m << std::endl; }

private:
	int m_l;
	int m_m;
};

/////////////////////////////////////////////////////////////////////////
CFraction multi1(CFraction *a, CFraction *b)
{
	CFraction tmp;
	tmp.m_l = a->m_l * b->m_l;
	tmp.m_m = a->m_m * b->m_m;
	return tmp;
}

/////////////////////////////////////////////////////////////////////////
CFraction multi2(CFraction &a, CFraction &b)
{
	CFraction tmp;
	tmp.m_l = a.m_l * b.m_l;
	tmp.m_m = a.m_m * b.m_m;
	return tmp;
}

/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	double  x = 1.75;
	int n;

	n = static_cast<int>(x);
	cout << "x, n = " << x << ", " << n << endl;

	const CFraction aFraction(1, 2);
	CFraction bFraction(1, 2);
	CFraction cFraction;
	const CFraction &dFraction = bFraction;
	
	//wywo³anie funkcji multi która nie gwarantuje ¿e nie zmieni obiektów
	//cFraction = multi1(&aFraction, &bFraction); //BLAD kompilacji
	cFraction = multi1(const_cast<CFraction*>(&aFraction), &bFraction);
	cFraction.print();
	
	//cFraction = multi2(dFraction, bFraction); //BLAD kompilacji
	cFraction = multi2(const_cast<CFraction&>(dFraction), bFraction);
	cFraction.print();
	getchar();
	return 0;
}
