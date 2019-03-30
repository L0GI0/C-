/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 11-11-2004
/// \brief Inheritance. Virtual functions 1
/////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
/////////////////////////////////////////////////////////////////////////

int main(int argc, char* argv[])
{
	using namespace std;
	ifstream FileIn;
	FileIn.open("main.cpp");

	while(!FileIn.eof())
	{
		char linia[256], znak;

		FileIn.get(znak);
		FileIn.getline(linia, 255);
	
		if(znak != '/')
			cout << znak << linia << endl;
	}
	FileIn.close();
}