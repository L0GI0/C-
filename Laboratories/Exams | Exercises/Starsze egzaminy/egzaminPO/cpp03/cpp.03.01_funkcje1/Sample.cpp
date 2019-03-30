/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Functions without parameters.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void print();
int print2();

int main(int argc, char *argv[])
{
	print();
	print();
	print();
	print();
	print();

	print2();
	print2();
	print2();
	print2();
	cout << "Odebrana wartosc z 'print2' = " << print2() << endl;
} 

void print()
{
	static int i = 0;
	cout << "Funkcja 'print' wywolana: " << ++i << " raz" << endl;
}

int print2()
{
	static int i = 0;
	cout << "Funkcja 'print2' wywolana: " << ++i << " raz" << endl;
	return i;
}

