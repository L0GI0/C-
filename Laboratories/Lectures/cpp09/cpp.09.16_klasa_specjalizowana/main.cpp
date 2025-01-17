/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-11-2004
/// \brief Class templates. Specialized class.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string.h>
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
	template<typename T>
		std::ostream& operator<<(std::ostream& o, const BoxOpis<T> &K)
	{
		o << K.GetOpis().c_str() << ": "<< K.GetT();
		return o;
	}

	/////////////////////////////////////////////////////////////////////////
	template<> 
		class BoxOpis<char*>
	{
	public:
		BoxOpis()
		{ box = new char [1]; 
			box[0] = '\0';
		}
		
		~BoxOpis()
		{	delete [] box; }

		void SetT(const char* obj)
		{	
			if(strlen(box) < strlen(obj))
			{
				delete [] box;
				box = new char[strlen(obj)+1];
			}
			strcpy(box, obj); 
		}

		void SetOpis(const std::string opis)
		{ this->opis = opis;}

		char* GetT () const
		{	
			char* copy = new char[strlen(box)+1];
			strcpy(copy, box); 
			return copy;
		}

		std::string GetOpis() const
		{ return opis; }

	private:
		char* box;
		std::string opis;
		
	};
	/////////////////////////////////////////////////////////////////////////
	std::ostream& operator<<(std::ostream& o, const BoxOpis<char*> &K)
	{
		char *tmp =	K.GetT();
		o << K.GetOpis().c_str();
		o << ": ";
		o << tmp;
		delete [] tmp;
		return o;
	}

}//End of namespace

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;

	OOP::BoxOpis<char*> a;

	a.SetT("Zmienna");
	a.SetOpis("char*");

	cout << a << endl;

	OOP::BoxOpis<OOP::CFraction> aFrac;
	aFrac.SetT(OOP::CFraction(2, 3));
	aFrac.SetOpis("Ulamek");

	cout << aFrac << endl;

	return 0;
}

