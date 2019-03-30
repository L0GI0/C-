/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 13-11-2004
/// \brief I/O operations on files, error handling.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

int main()
{
	using namespace std;

	ifstream FileStream;  
	FileStream.open("main.cpp");
	
	if(!FileStream.is_open())
		return 0;

	cout << "Aktualna pozycja w pliku = " << FileStream.tellg() << endl;
	FileStream.seekg(320, ios::beg);
	cout << "Aktualna pozycja w pliku = " << FileStream.tellg() << endl;
	
	char tab[100];

	FileStream.get(tab, 100, '}');

	cout << "Aktualna pozycja w pliku = " << FileStream.tellg() << '\n' << endl;
	cout << "Przeczytany tekst: " << tab << '\n' << endl;

	FileStream.seekg(0, ios::beg);
	cout << "Aktualna pozycja w pliku = " << FileStream.tellg() << endl;

	FileStream.getline(tab, 100);

	cout << "Pierwsza linia w pliku to: " << tab;
}
