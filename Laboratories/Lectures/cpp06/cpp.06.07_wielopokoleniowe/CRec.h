#ifndef _CREC_H_
#define _CREC_H_	
	
#include "CShape.h"
class CRec : public CShape
{
public:
	double Pole() const;
	void rys(void) const;
};

/////////////////////////////////////////////////////////////////////////
inline double CRec::Pole() const
{
	std::cout << "Pole_z_CRec ";
	return m_x * m_y;
}

/////////////////////////////////////////////////////////////////////////
inline void CRec::rys(void) const
{
	std::cout << "Rysuj CRrec\n";
}

/////////////////////////////////////////////////////////////////////////
#endif