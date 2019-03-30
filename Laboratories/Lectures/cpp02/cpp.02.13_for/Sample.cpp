/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Loop 'for'.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
  int suma = 0, i, n;
  cout << "Podaj liczbe naturalna\n";
  cout << "n = ";
  cin >> n;
  
	for(i = 1; i <= n; i++)
		suma = suma + i;

	cout << "Suma " << n << " kolejnych liczb naturalnych wynosi: " << suma << endl;
	getchar();
	getchar();
}
