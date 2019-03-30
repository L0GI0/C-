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

class CFraction
{
public:
	friend CFraction multi(const CFraction a, const CFraction b);
	
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
CFraction multi(const CFraction a, const CFraction b)
{
	CFraction tmp;
	tmp.m_l = a.m_l * b.m_l;
	tmp.m_m = a.m_m * b.m_m;
	return tmp;
}
/////////////////////////////////////////////////////////////////////////
float sum(float a, float b)
{
	return a + b;
}
/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;
	
	CFraction aFraction(1, 2);
	
	//wykorzystujemy funkcje konwertuj¹c¹ przy wywo³aniu funkcji której argumentami s¹ dwie liczby typu float
	cout << sum(1.0, aFraction) << endl;

	cout << 1 - aFraction << endl;

	getchar();
	return 0;
}
