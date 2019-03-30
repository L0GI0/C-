/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-11-2004
/// \brief Functions templates. Types.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "CFraction.h"

namespace OOP{

	template<typename T> T max(T a, T b)
	{
		return (a > b) ? a : b;
//		return (a < b) ? b : a;
	}

	template<typename T> T min(T a, T b)
	{
		return (a < b) ? a : b;
	}
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;

	int a = 10, b = 5;

	cout << "max(2.3, 3.3) = " << OOP::max(2.3, 3.3) << endl;
	cout << "min(2.3, 3.3) = " << OOP::min(2.3, 3.3) << endl;

	//porównanie adresów a nie wartoœci
	cout << "max(a, b) = " << OOP::max(&a, &b) << endl;
	cout << "min(a, b) = " << OOP::min(&a, &b) << endl;


	//Ju¿ nie mo¿na u¿yæ funkcji max w stosunku do CFraction
	//cout << "max(OOP::CFraction(2, 5), OOP::CFraction(13, 50)) = " 
	//	<< OOP::max(OOP::CFraction(2, 5), OOP::CFraction(13, 50)) << endl;

	cout << "min(OOP::CFraction(2, 5), OOP::CFraction(13, 50)) = " 
		<< OOP::min(OOP::CFraction(2, 5), OOP::CFraction(13, 50)) << endl;

	return 0;
}