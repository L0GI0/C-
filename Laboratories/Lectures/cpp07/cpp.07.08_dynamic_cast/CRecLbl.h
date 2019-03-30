#ifndef _CRECLBL_H_
#define _CRECLBL_H_
	
#include <iostream>
#include "CRec.h"

#include <iostream>
#include <string>
namespace OOP
{
class CRecLbl : public CRec
{
public:
	CRecLbl(double x = 0, double y = 0, double a = 1, double b = 1) : CRec(x, y, a, b)
	{ m_ptrOpis = new std::string; }

	explicit CRecLbl(const std::string& Opis)
	{ m_ptrOpis = new std::string;
		*m_ptrOpis = Opis; }

	~CRecLbl()
	{ delete m_ptrOpis; }

	void printLbl()
	{ std::cout << "Opis: " << *m_ptrOpis << std::endl; }

protected:
	std::string* m_ptrOpis;
};
} //namespace OOP
#endif
