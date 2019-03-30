/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Using break and continue.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char * argv[])
{
	int n;
	
	srand((unsigned)time(0));
	int random_integer = rand()%2 + 1;
  cout << random_integer << endl;

	while(true)	
	{
		cout << "Podaj liczbe od 0 do 10\nn = ";
		cin >> n;

		if(n==random_integer)
		{
			cout << "Liczba losowa to: " << random_integer << endl;
			break;
		}
		else if(n > 10)
		{
			cout << "Za duza liczba\n";
			continue;
		}
		else
			cout << "Sprobuj ponownie...\n";
	}
	getchar();
	getchar();
}
