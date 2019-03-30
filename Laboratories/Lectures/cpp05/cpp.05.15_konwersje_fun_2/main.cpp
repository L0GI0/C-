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

class CNumber
{
public:
	CNumber(int n = 0) : m_n(n)
		{}
	int Get() const
	{ return m_n; }

	void print() const
	{ std::cout << m_n << std::endl; }

private:
	int m_n;
};

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
class CFraction
{
public:
	friend CFraction multi(const CFraction& a, const CFraction& b);
	
	CFraction(int l = 0, int m = 1) : m_l(l), m_m(m)
		{}

	CFraction(int l) : m_l(l), m_m(1)
		{std::cout << "\nDziala konstruktor konwertujacy (int)." << std::endl; }
	
	CFraction(CNumber n) : m_l(n.Get()), m_m(1)
		{ std::cout << "\nDziala konstruktor konwertujacy (CNumber)." << std::endl; }

	//funkcja konwertuj¹ca do float
	operator float() const
	{ 
		std::cout << "\nDziala funkcja konwertujaca do float." << std::endl;
	  return (float)m_l/(float)m_m; 
	}
	
	//funkcja konwertuj¹ca do CNumber
	operator CNumber() const
	{ 
		std::cout << "\nDziala funkcja konwertujaca do CNumber." << std::endl;
	  return CNumber((int)((float)m_l/(float)m_m + 0.5)); 
	}

	void print() const
	{ std::cout << m_l << "/" << m_m << std::endl; }

private:
	int m_l;
	int m_m;
};

/////////////////////////////////////////////////////////////////////////
CFraction multi(const CFraction& a, const CFraction& b)
{
	CFraction tmp;
	tmp.m_l = a.m_l * b.m_l;
	tmp.m_m = a.m_m * b.m_m;
	return tmp;
}

/////////////////////////////////////////////////////////////////////////
int sum(const CNumber& a, const CNumber& b)
{
	return a.Get() + b.Get();
}

/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;
	
	CFraction aFraction(4, 3);
	CNumber aNumber(1);
	
	//wykorzystujemy funkcje konwertuj¹c¹ przy wywo³aniu funkcji której argumentami s¹ dwa obiekty typu CNumber
	cout << sum(aNumber, aFraction) << endl;
	cout << multi(aFraction, aNumber) << endl;	
}