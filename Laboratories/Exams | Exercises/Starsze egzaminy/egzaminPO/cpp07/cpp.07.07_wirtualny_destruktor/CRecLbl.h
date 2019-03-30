#ifndef _CRECLBL_H_
#define _CRECLBL_H_
	
#include <iostream>
#include "CRec.h"

#include <iostream>

namespace OOP
{
class CRecLbl : public CRec
{
public:
	CRecLbl(double x = 0, double y = 0, double a = 1, double b = 1) : CRec(x, y, a, b)
	{ m_ptrOpis = new std::string; }

	~CRecLbl()
	{
	delete m_ptrOpis; }

protected:
	std::string* m_ptrOpis;
};
} //namespace OOP
#endif