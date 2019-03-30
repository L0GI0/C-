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
		return (a < b) ? b : a;
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

	cout << "max(2.3, 3.3) = " << OOP::max(2.3, 3.3) << endl;
	cout << "min(2.3, 3.3) = " << OOP::min(2.3, 3.3) << endl;

	cout << "max(2.3, 3.3) = " << OOP::max<long>(2.3, 3.3) << endl;
	cout << "min(2.3, 3.3) = " << OOP::min<long>(2.3, 3.3) << endl;

	cout << "max('a', 'b') = " << OOP::max<unsigned short>('a', 'b') << endl;
	cout << "min('a', 'b') = " << OOP::min<unsigned short>('a', 'b') << endl;

	int (*ptrInt)(int, int);
	ptrInt = OOP::max<int>;

	cout << "OOP::max<int>: " << reinterpret_cast<size_t>(ptrInt) << endl;
	return 0;
}