/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Union.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

union Box
{
	char c;
	float f;
};
/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	//unia anonimowa
	union 
	{
		int i;
		double f;
	};

	Box a;
	a.c = 'A';
	cout << "a.c = " << a.c << endl;

	a.f = 32.14;
	cout << "a.f = " << a.f << endl;
	cout << "nie ma sensu czytac a.c = " << a.c << endl;

	i = 1;
	cout << "i (z unii anonimowej) = " << i << endl;
	f = 32.14;
	cout << "f (z unii anonimowej) = " << f << endl;
	cout << "i (z unii anonimowej) = " << i << endl;

	getchar();
	return 0;
}
