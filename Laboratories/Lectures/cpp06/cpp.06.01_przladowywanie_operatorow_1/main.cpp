/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 18-10-2004
/// \brief Classes: Operators overloading - member function
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

/////////////////////////////////////////////////////////////////////////
class CFraction
{
public:
   friend std::ostream& operator<< (std::ostream& o, const CFraction& K);
   friend std::istream& operator>> (std::istream& i, CFraction& K);

	CFraction(int l = 0, int m = 1) : m_l(l), m_m(m)
		{}

	//sk³adowa funkcja operatorowa mno¿enia
	CFraction operator*(const CFraction &K) const
	{
		CFraction tmp;
		tmp.m_l = m_l * K.m_l;
		tmp.m_m = m_m * K.m_m;
		return tmp;
	}
	
	//sk³adowa funkcja operatorowa zmiany znaku
	CFraction operator-() const
	{
		CFraction tmp;
		tmp.m_l = -m_l;
		tmp.m_m = m_m;
		return tmp;
	}

	//sk³adowa funkcja operatorowa odejmowania
	CFraction operator-(const CFraction &K) const
	{
		CFraction tmp;
		tmp.m_l = m_l*K.m_m - m_m*K.m_l;
		tmp.m_m = m_m * K.m_m;
		return tmp;
	}

private:
	int m_l;
	int m_m;
};

/////////////////////////////////////////////////////////////////////////
std::ostream& operator<< (std::ostream& o, const CFraction& K)
{
	return o << K.m_l << "/" << K.m_m;
}

/////////////////////////////////////////////////////////////////////////
std::istream& operator>> (std::istream& i, CFraction& K)
{
	char tmp;
	return i >> K.m_l >> tmp >> K.m_m;
}

/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;
	
	CFraction aFraction;
	CFraction bFraction;
	CFraction cFraction;

	cout << "Podaj aFraction: ";
	cin >> aFraction;

	cout << "Podaj bFraction: ";
	cin >> bFraction;

	//cFraction = aFraction * bFraction;
	cout << "aFraction * bFraction = " << aFraction * bFraction << endl;
	cout << "aFraction * bFraction = " << aFraction.operator*(bFraction) << endl;
	
	cout << "bFraction * 2 = " << bFraction * 2 << endl;
	
	//nie mo¿na wywo³aæ: 2.operator*(bFraction)
	//cout << "2 * bFraction = " << 2 * bFraction<< endl;

	cFraction = -bFraction;
	cout << "cFraction = " << cFraction << endl;

	cFraction = aFraction - bFraction;
	cout << "cFraction = " << cFraction << endl;
}
