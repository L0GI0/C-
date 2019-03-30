/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-11-2004
/// \brief Functions templates. First example.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <typeinfo>

#include "CFraction.h"

namespace OOP{

	template<typename T> T max(T a, T b)
	{
		std::cout << "Nazawa typu obiektu: " << typeid(T).name() << std::endl;
		return (a < b) ? b : a;
	}

	template<typename T> T min(T a, T b)
	{
		std::cout << "Nazawa typu obiektu: " << typeid(T).name() << std::endl;
		return (a < b) ? a : b;
	}
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;
	
	cout << "max(2, 3) = " << OOP::max(2, 3) << endl;
	cout << "min(2, 3) = " << OOP::min(2, 3) << endl;

	cout << "max(2.3, 3.3) = " << OOP::max(2.3, 3.3) << endl;
	cout << "min(2.3, 3.3) = " << OOP::min(2.3, 3.3) << endl;

	cout << "max('a', 'b') = " << OOP::max('a', 'b') << endl;
	cout << "min('a', 'b') = " << OOP::min('a', 'b') << endl;

	cout << "max(OOP::CFraction(2, 5), OOP::CFraction(13, 50)) = " 
		<< OOP::max(OOP::CFraction(2, 5), OOP::CFraction(13, 50)) << endl;
	cout << "min(OOP::CFraction(2, 5), OOP::CFraction(13, 50)) = " 
		<< OOP::min(OOP::CFraction(2, 5), OOP::CFraction(13, 50)) << endl;

	cout << "max(std::string(\"Ala\"), std::string(\"Ola\")) = " 
		<< OOP::max(std::string("Ala"), std::string("Ola")) << endl;
	cout << "min(std::string(\"Ala\"), std::string(\"Ola\")) = " 
		<< OOP::min(std::string("Ala"), std::string("Ola")) << endl;

	return 0;
}