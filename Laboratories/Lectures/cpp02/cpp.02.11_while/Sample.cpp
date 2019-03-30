/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Loop 'while'.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int silnia = 1, i = 1, n;
  cout << "Podac liczbe naturalna n: ";
  cin >> n;

  while (i < n)
  {
    i++;
    silnia = silnia * i;
  }
	cout << "Silnia liczby " << n << " wynosi: " << silnia << endl;
	getchar();
	getchar();
}
