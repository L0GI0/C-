/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-11-2004
/// \brief Class templates. Specialized member function.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <exception>
#include "CFraction.h"
#include "OOPFunTemplates.h"

namespace OOP{
/////////////////////////////////////////////////////////////////////////
	template<typename T> class BoxOpis
	{
	public:

		void SetT(const T& obj)
		{	box = obj; }

		void SetOpis(const std::string opis)
		{ this->opis = opis;}

		T GetT () const
		{	return box;	}

		std::string GetOpis() const
		{ return opis; }

	private:
		T box;
		std::string opis;
	};
	/////////////////////////////////////////////////////////////////////////

	void BoxOpis<CFraction>::SetT(const CFraction& K)
	{
		std::cout << "Specjalizowana funkcja skladowa dla CFraction\n";
		box = K;
	}

	template<typename T>
		std::ostream& operator<<(std::ostream& o, const BoxOpis<T> &K)
	{
		o << K.GetOpis().c_str() << ": "<< K.GetT();
		return o;
	}


}//End of namespace

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;

	OOP::BoxOpis<OOP::CFraction> aFrac;

	aFrac.SetT(OOP::CFraction(1/4));
	aFrac.SetOpis("Ulamek");

	cout << aFrac << endl << endl;

	OOP::BoxOpis<double> a;
	a.SetT(3.14159);
	a.SetOpis("M_PI");

	cout << a << endl;

	return 0;
}

