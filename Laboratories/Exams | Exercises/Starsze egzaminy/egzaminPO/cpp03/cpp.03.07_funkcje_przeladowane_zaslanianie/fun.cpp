/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 28-09-2004
/// \brief Function overloading.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

int max(int a, int b)
{
	return b < a ? a : b;
}

float max(float a, float b)
{
	return b < a ? a : b;
}

void print(int a)
{
	std::cout << "Liczba ca³kowita =   " << a << std::endl;
}

void print(float a)
{
	std::cout << "Liczba rzeczywista = " << a << std::endl;
}

void print(char a)
{
	std::cout << "Znak =               " << a << std::endl;
}

