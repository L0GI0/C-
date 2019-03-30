/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 28-09-2004
/// \brief Function overloading.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

void print(int);

int main(int argc, char *argv[])
{
	int a = 1;
	float b = 1.1;

	print(a);
	{
		void print(float); //zas�oni�cie a nie prze�adowanie
		std::cout << "-------------------------------------------\n";
		print(a);
		print(b);
		std::cout << "-------------------------------------------\n";
	}
	print(b);

	{
		void print(float);
		std::cout << "-------------------------------------------\n";
		::print(a);  //odwo�anie do zakresu globalnego
		print(b);
		std::cout << "-------------------------------------------\n";
	}

	{
		void print(int);
		void print(float); //prze�adowanie w zakresie lokalnym
		std::cout << "-------------------------------------------\n";
		print(a);
		print(b);
		std::cout << "-------------------------------------------\n";
	}

}
