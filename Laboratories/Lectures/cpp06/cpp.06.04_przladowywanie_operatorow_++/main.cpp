/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 18-10-2004
/// \brief Classes: Overloaded operators ++, --
/////////////////////////////////////////////////////////////////////////

#include <iostream>

/////////////////////////////////////////////////////////
class CPoint {
public :

	friend CPoint& operator--(CPoint& K);
	friend CPoint operator--(CPoint& K, int);

	CPoint(double a = 0, double b = 0) : m_a(a), m_b(b)
		{}
	CPoint& operator++()
	{	++m_a; ++m_b;	return *this;	}

	CPoint operator++(int)
	{	CPoint tmp = *this;  ++m_a; ++m_b; return tmp; }

	double GetA() const
		{ return m_a;}
	double GetB() const
		{ return m_b;}

	void SetA(double a)
		{m_a = a;}
	void SetB(double b)
		{m_b = b;}

private:
  double m_a;
  double m_b;
};
/////////////////////////////////////////////////////////

CPoint& operator--(CPoint& K)
{	--K.m_a; --K.m_b;	return K;	}
/////////////////////////////////////////////////////////

CPoint operator--(CPoint& K, int)
{	CPoint tmp = K;  --K.m_a; --K.m_b; return tmp; }

/////////////////////////////////////////////////////////

inline std::ostream& operator<<(std::ostream& strm, const CPoint &K)
{
	return (strm << K.GetA() << "," << K.GetB());	
}

/////////////////////////////////////////////////////////
inline std::istream& operator>>(std::istream& strm, CPoint &K)
{
	double a, b;
	char tmp;
	strm >> a >> tmp >> b;
	K.SetA(a);
	K.SetB(b);	
	return strm; 
}

/////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	CPoint aPoint;
	
	cout << aPoint << endl;

	cout << aPoint++ << endl;
	cout << aPoint << endl;
	
	cout << ++aPoint << endl;
	cout << aPoint << endl;

	cout << aPoint-- << endl;
	cout << aPoint << endl;

	cout << --aPoint << endl;
	cout << aPoint << endl;
}
