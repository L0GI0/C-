/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Storage allcation - static.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void licz_wywolania(void);
void licz_wywolania_static(void);

int main(int argc, char * argv[])
{
	licz_wywolania();
	licz_wywolania_static();

	licz_wywolania();
	licz_wywolania_static();

	licz_wywolania();
	licz_wywolania_static();

	licz_wywolania();
	licz_wywolania_static();

	licz_wywolania();
	licz_wywolania_static();
	getchar();
}

void licz_wywolania(void)
{
	unsigned int i = 0;
	i = i + 1;
	cout << "(auto)   i = " << i << endl;
}

void licz_wywolania_static(void)
{
	static unsigned int i = 0;
	i = i + 1;
	cout << "(static) i = " << i << endl;
}
