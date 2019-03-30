/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-11-2004
/// \brief Functions templates. Buildin types.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "CFraction.h"

namespace OOP{

	template<typename T> void swap(T& a, T& b)
	{
		T tmp = T(a);
		a = b;
		b = tmp;
		//For illustration
		tmp.~T();
	}

/////////////////////////////////////////////////////////////////////////
	template<typename T> const T& max(const T& a, const T& b)
	{
		return (a < b) ? b : a;
	}

/////////////////////////////////////////////////////////////////////////
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

	cout << "a = " << a << ", b = " << b << endl;
	OOP::swap(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	OOP::CFraction aFrac(2, 5);
	OOP::CFraction bFrac(3, 50);

	cout << "aFrac = " << aFrac << ", bFrac = " << bFrac << endl;
	OOP::swap(aFrac, bFrac);
	cout << "aFrac = " << aFrac << ", bFrac = " << bFrac << endl;

	return 0;
}