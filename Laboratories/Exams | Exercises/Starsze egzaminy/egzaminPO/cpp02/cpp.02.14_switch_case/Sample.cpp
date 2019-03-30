/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Using switch and case.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
  int n;
  cout << "Podaj liczbe od [1,5]\n";
  cout << "n = ";
  cin >> n;
  
	switch(n)
	{
		case 1:
			cout << "Wybrales 1\n";
			break;
		case 2:
			cout << "Wybrales 2\n";
			break;
		case 3:
			cout << "Wybrales 3\n";
			break;
		case 4:
			cout << "Wybrales 4\n";
			break;
		case 5:
			cout << "Wybrales 5\n";
			break;
		default:
			cout << "Nie wybra³eœ liczby z podanego zakresu\n";
			break;

	}
}
