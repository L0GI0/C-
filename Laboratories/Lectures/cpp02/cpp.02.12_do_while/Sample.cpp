/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Loop 'do ... while'.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
  double suma = 0.0, a;
  cout << "Podaj liczby (0 oznacza koniec)\n";
  
  do
  {
    cout << "a = ";
    cin >> a;
    suma = suma + a;
  }
  while (a);
  cout << "Suma: " << suma << endl;
  getchar();
  getchar();
}
