/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Mathemitacal operators.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	int a = 10, b = 5, c = 3;
	
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a % b = " << a % b << endl;
	cout << "a % c = " << a % c << endl << endl;

	int i = 0;
	cout << "++i = " << ++i << endl;
	i = 0;
	cout << "i++ = " << i++ << endl;
	i = 0;
	cout << "--i = " << --i << endl;
	i = 0;
	cout << "i-- = " << i-- << endl;
	getchar();
}
