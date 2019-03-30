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

class CMiasto
{
public:
	double szer;
	double dl;
	double wys;
	std::string nazwa;
};
inline std::ostream& operator<<(std::ostream &strm, const CMiasto &K)
{
strm << "Nazwa: " << K.nazwa << "\nDlugosc: " << K.dl << "\tSzeroksc: " << K.szer << "\tWysokosc: " << K.wys << std::endl;
	return strm;
}

int main()
{
	using namespace std;

	CMiasto aMiasto;
	
	aMiasto.dl = 40;
	aMiasto.szer = 30;
	aMiasto.wys = 150;
	aMiasto.nazwa = "Kraków";

	CMiasto bMiasto[5] = {
		40, 30, 150, "Kraków",
		45, 30, 50, "Warszawa",
		50, 30, 0, "Sopot"
		};

	const CMiasto cMiasto = {40, 30, 150, "Kraków"};

	cout << aMiasto << bMiasto[0] << bMiasto[1] << bMiasto[2] << bMiasto[3] << cMiasto;

	//cMiasto.nazwa = "Kraków"; //BLAD bo obiekt typu const
	getchar();
	return 0;
}
