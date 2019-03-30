/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Covering variable names.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int k = 13;
int main(int argc, char * argv[])
{
	int k = 1;

	cout << "k = " << k << endl;
	{
		int k = 1313;
		cout << "k (lokalne) = " << k << endl;
		cout << "k (globalne z bloku lokalnego) = " << ::k << endl;
		{
			cout << "k (globalne z bloku lokalnego z bloku lokalnego) = " << ::k << endl;
			cout << "k () = " << k << endl;
		}
	}
	cout << "k (po bloku lokalnym) = " << k << endl;

	getchar();
}
