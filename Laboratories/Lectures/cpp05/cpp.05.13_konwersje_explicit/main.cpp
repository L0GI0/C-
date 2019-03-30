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
	//konstruktor który nie mo¿e s³u¿yæ jako konwerter z liczby typu int
	explicit CFraction(int l) : m_l(l), m_m(1)
		{std::cout << "\nDziala konstruktor jednoargumentowy." << std::endl; }
	
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

	int n = 1;
	
	CFraction aFraction;
	CFraction bFraction(1, 2);
	
	//niemo¿liwe wykonanie automatycznej konwersji
	//aFraction = multi(bFraction, n);

	//ale mo¿liwe wywo³anie konstruktora jednoargumentowego
	aFraction = multi(bFraction, CFraction(n));
	aFraction.print();
	getchar();
	return 0;
}
