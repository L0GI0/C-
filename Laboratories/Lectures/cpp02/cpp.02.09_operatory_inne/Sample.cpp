/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Operators other.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
	short a;
	int b;
	long c;
	float d;
	double e;

  cout << "short       " << sizeof(a) << endl;
  cout << "int         " << sizeof(b) << endl;
  cout << "long        " << sizeof(c) << endl;
  cout << "float       " << sizeof(d) << endl;
  cout << "double      " << sizeof(e) << endl;
  cout << "long double " << sizeof(long double) << endl;
  cout << "char        " << sizeof(char) << endl;
  cout << "int*        " << sizeof(int*) << endl;
  cout << "float*      " << sizeof(float*) << endl;
  cout << "bool        " << sizeof(bool) << endl << endl;

  double f = -13.13;
  cout << "f = " << f << " (int)f = " << (int)f << endl << endl;

  cout << "(1+1, 2+2, 2*f, 5+5) = " << (1+1, 2+2, 2*f, 5+5) << endl << endl;

  cout << "(3 > 2) ? 1 : 0 = " << ((3 > 2) ? 1 : 0) << endl;
  getchar();
} 
