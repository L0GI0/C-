/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 19-10-2004
/// \brief Inheritance.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "CRec.h"

/////////////////////////////////////////////////////////////////////////
namespace OOP
{

class CRecLbl : public CRec
{
public:
	CRecLbl(double x = 0, double y = 0, std::string Opis = "") : CRec(x, y), m_Opis(Opis)
	{	std::cout << "Konstruktor CRecLbl(" << (m_Opis.length() > 0 ? m_Opis : "NoName") << ")\n"; }

	void SetOpis(std::string Opis)
	{m_Opis = Opis;}

	std::string GetOpis() const
	{ return m_Opis;}

protected:
	std::string m_Opis;
};
}//end of namespace OOP

/////////////////////////////////////////////////////////////////////////
int main(int argc, char * argv[])
{
	using namespace std;
	using namespace OOP;

	const CRecLbl aRecLbl;
}

