/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Logical operators.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	int k = 10, l = 5;
	
	cout << "k = " << k << ", l = " << l << endl << endl;

  cout << "(k > l) = " << (k > l) << endl;
	cout << "(k < l) = " << (k < l) << endl;
	cout << "(k >= k) = " << (k >= k) << endl;
	cout << "(k <= l) = " << (k <= l) << endl;
	cout << "(k == l) = " << (k == l) << endl;
	cout << "!(k == l) = " << !(k == l) << endl << endl;
	
	cout << "(k == l) || !(k == l) = " << ((k == l) || !(k == l)) << endl;
	cout << "(k == l) && !(k == l) = " << ((k == l) && !(k == l)) << endl;
	getchar();
}
