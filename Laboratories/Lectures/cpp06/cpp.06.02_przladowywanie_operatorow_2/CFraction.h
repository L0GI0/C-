/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 18-10-2004
/// \brief Classes: Operators overloading - global functions
/////////////////////////////////////////////////////////////////////////

#ifndef _CFRACTION_H_
#define _CFRACTION_H_

class CFraction
{
public:
   friend std::ostream& operator<< (std::ostream& o, const CFraction& K);
   friend std::istream& operator>> (std::istream& i, CFraction& K);

	CFraction(int l = 0, int m = 1) : m_l(l), m_m(m)
		{}
	int getL() const
	{ return m_l; }

	int getM() const
	{ return m_m; }

	void setL(int l)
	{ m_l = l;}
	
	void setM(int m)
	{ m_m = m;}

	//funkcja konwertuj¹ca do float
	float toFloat(void) const
	{ return (float)m_l/(float)m_m; }

private:
	int m_l;
	int m_m;
};

/////////////////////////////////////////////////////////////////////////
inline std::ostream& operator<< (std::ostream& o, const CFraction& K)
{
	return o << K.m_l << "/" << K.m_m;
}

/////////////////////////////////////////////////////////////////////////
inline std::istream& operator>> (std::istream& i, CFraction& K)
{
	char tmp;
	return i >> K.m_l >> tmp >> K.m_m;
}

#endif