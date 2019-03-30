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
class CRecLbl : public CRec
{
public:
	CRecLbl(double x = 0, double y = 0, std::string Opis = "") : m_Opis(Opis)
	{
		m_x = x;
		m_y = y;
	}
	void SetOpis(std::string Opis)
	{m_Opis = Opis;}

	std::string GetOpis() const
	{ return m_Opis;}

protected:
	std::string m_Opis;
};

/////////////////////////////////////////////////////////////////////////
int main(int argc, char * argv[])
{
	using namespace std;
	
	const CRecLbl bRecLbl(5, 5, "bRecLbl");
	
	cout << "Pole " << bRecLbl.GetOpis() << " = " << bRecLbl.Pole() << endl;
}

