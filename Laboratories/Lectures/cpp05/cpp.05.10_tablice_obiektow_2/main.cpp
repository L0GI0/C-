/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Classes: Table initialisation
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

//using namespace std;

class CMiasto
{
public:
	friend std::ostream& operator<< (std::ostream& strm, const CMiasto &K);
	
	CMiasto() : m_szer(0), m_dl(0), m_wys(0), m_nazwa("")
		{}
	CMiasto(double szer, double dl, double wys, std::string nazwa) : m_szer(szer), m_dl(dl), m_wys(wys), m_nazwa(nazwa)
		{}

private:
	double m_szer;
	double m_dl;
	double m_wys;
	std::string m_nazwa;
};
/////////////////////////////////////////////////////////////////////////
inline std::ostream& operator<< (std::ostream& strm, const CMiasto &K)
{
	return strm << "Nazwa: " << K.m_nazwa << "\nDlugosc: " << K.m_dl << "\tSzeroksc: " << K.m_szer << "\tWysokosc: " << K.m_wys << std::endl;
}
/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	CMiasto aMiasto(40, 30, 150, "Kraków") ;

	CMiasto bMiasto[4] = {
		CMiasto(40, 30, 150, "Kraków"),
		CMiasto(45, 30, 50, "Warszawa"),
		CMiasto(50, 30, 0, "Sopot")
		};

	cout << aMiasto << bMiasto[0] << bMiasto[1] << bMiasto[2] << bMiasto[3];

	getchar();
	return 0;
}
