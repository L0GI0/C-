/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-11-2004
/// \brief Class templates. Defination of member functions.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <exception>
#include "CFraction.h"
#include "OOPFunTemplates.h"

namespace OOP{

	template<typename T, int rozmiar> class Box
	{
	public:
		T box[rozmiar];
		Box() : m_size(rozmiar)	{}

		T& operator[](unsigned i) throw(std::range_error);

		void SetAll(const T& obj);

		void printOn();
	
	private:
		unsigned m_size;
	};
	/////////////////////////////////////////////////////////////////////////
	template<typename T, int rozmiar>	
		void Box<T, rozmiar>::printOn()
	{
		for(unsigned i = 0; i < rozmiar; ++i)
			std::cout << box[i] << " ";
		
		std::cout << std::endl;
	}
	/////////////////////////////////////////////////////////////////////////
	template<typename T, int rozmiar>
		inline T& Box<T, rozmiar>::operator[](unsigned i) throw(std::range_error)
	{
		if(i < rozmiar) 
			return box[i]; 
		else
			throw std::range_error("Przekroczony zakres");
	}
	/////////////////////////////////////////////////////////////////////////
	template<typename T, int rozmiar>
		void Box<T, rozmiar>::SetAll(const T& obj)
	{
		for(unsigned i = 0; i < rozmiar; ++i)
			box[i] = obj;
	}
/////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;

	OOP::Box<int, 10> a;
	
	for(int i = 0; i < 10; ++i)
		a[i] = i;

	a.printOn();

	a.SetAll(25);
	a.printOn();

	OOP::Box<OOP::CFraction, 2> aBoxFrac;

	aBoxFrac.box[0].SetL(1);
	aBoxFrac.box[0].SetM(2);

	aBoxFrac.box[1].SetL(1);
	aBoxFrac.box[1].SetM(5);

	aBoxFrac.printOn();

	aBoxFrac.SetAll(OOP::CFraction(12, 43));

	aBoxFrac.printOn();

	return 0;
}

