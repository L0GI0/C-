/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 28-09-2004
/// \brief Using tables.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t[10];
	
	for(int i = 0; i < 10; ++i)
		t[i] = i+1;

	for(int i = 0; i < 10; ++i)
		cout << t[i] << endl;

	for(int i = 1; i <= 10; ++i)
	{
		t[i] = i+1;
		cout << t[i] << endl;

	}
	getchar();
}
