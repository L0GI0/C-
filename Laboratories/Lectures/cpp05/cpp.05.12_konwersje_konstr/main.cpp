/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Classes: Convertions 2
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

class CFraction
{
public:
	friend CFraction multi(const CFraction a, const CFraction b);
	
	CFraction() : m_l(0), m_m(1)
		{}
	//konstruktor s³u¿¹cy jako konwerter z liczby typu int
	CFraction(int l) : m_l(l), m_m(l)
		{std::cout << "\nDziala konstruktor konwertujacy." << std::endl; }
	
	CFraction(int l, int m) : m_l(l), m_m(m)
		{}
	
	void print()
	{ std::cout << m_l << "/" << m_m << std::endl; }

private:
	int m_l;
	int m_m;
};

CFraction multi(const CFraction a, const CFraction b)
{
	CFraction tmp;
	tmp.m_l = a.m_l * b.m_l;
	tmp.m_m = a.m_m * b.m_m;
	return tmp;
}

int main()
{
	using namespace std;
	
	CFraction aFraction;
	CFraction bFraction(1, 2);
	
	//wykonujemy mno¿enie obiektu klasy CFraction przez liczbê typu int - konwersja jest potrzebna
	aFraction = multi(bFraction, 2);
	aFraction.print();

	//kompilator rozumie to tak:
	aFraction = multi(bFraction, CFraction(1));
	aFraction.print();
	getchar();
	return 0;
}
