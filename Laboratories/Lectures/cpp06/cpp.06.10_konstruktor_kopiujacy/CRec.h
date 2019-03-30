#ifndef _CREC_H_
#define _CREC_H_	

#include "CShape.h"

namespace OOP
{
class CRec : public CShape
{
public:
	CRec(double x = 0, double y = 0) : CShape(x, y)
	{std::cout << "Konstruktor CRec\n"; }

	//tak nie mo¿e byæ
	//CRec(const CRec& K)
	CRec(const CRec& K)
	{
		m_x = K.m_x;
		m_y = K.m_y;
		std::cout << "Konstruktor kopiujacy CRec\n"; 
	}

	double Pole() const;
	void rys(void) const;
};

/////////////////////////////////////////////////////////////////////////
inline double CRec::Pole() const
{
	return m_x * m_y;
}

/////////////////////////////////////////////////////////////////////////
inline void CRec::rys(void) const
{
	std::cout << "Rysuj CRrec\n";
}

/////////////////////////////////////////////////////////////////////////
#endif

}//end of namespace OOP