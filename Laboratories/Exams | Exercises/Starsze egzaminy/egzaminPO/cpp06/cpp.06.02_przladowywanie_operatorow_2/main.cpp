/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 18-10-2004
/// \brief Classes: Operators overloading - global functions
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "CFraction.h"

/////////////////////////////////////////////////////////////////////////
CFraction operator*(const CFraction &K1, const CFraction &K2)
{
	CFraction tmp(K1.getL() * K2.getL(), K1.getM() * K2.getM());
	return tmp;
}

/////////////////////////////////////////////////////////////////////////
CFraction operator-(const CFraction &K)
{
	CFraction tmp(-K.getL(), K.getM());
	return tmp;
}

/////////////////////////////////////////////////////////////////////////
CFraction operator-(const CFraction &K1, const CFraction &K2)
{
	CFraction tmp(K1.getL()*K2.getM() - K1.getM()*K2.getL(),
	              K1.getM()*K2.getM());
	return tmp;
}

/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;
	
	CFraction aFraction;
	CFraction bFraction;

	cout << "Podaj aFraction: ";
	cin >> aFraction;

	cout << "Podaj bFraction: ";
	cin >> bFraction;

	cout << "aFraction * bFraction = " << aFraction * bFraction << endl;
	cout << "-bFraction = " << -bFraction << endl;

	cout << "aFraction - bFraction = " << aFraction - bFraction << endl;
	cout << "1 - bFraction = " << 1 - bFraction << endl;
	cout << "bFraction - 1 = " << bFraction - 1 << endl;

	cout << "2 * bFraction = " << 2 * bFraction << endl;
	cout << "bFraction * 2 = " << bFraction * 2 << endl;
}
