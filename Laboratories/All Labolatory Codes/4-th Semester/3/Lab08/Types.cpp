#include "Types.h"
#include <iostream>

void typ1::PrzedstawSie()
{
	std::cout<<"Nazywam sie 1"<<std::endl;
}

void typ2::PrzedstawSie()
{
	std::cout<<"Nazywam sie 2"<<std::endl;
}

void typ3::PrzedstawSie()
{
	std::cout<<"Nazywam sie 3"<<std::endl;
}

void typ4::PrzedstawSie()
{
	std::cout<<"Nazywam sie 4"<<std::endl;
}

void Przetworz1(typ1 * t1)
{
	std::cout<<"Przetworz1 - wyjatek typu 1 o adresie: "<<t1<<std::endl;
}

void Przetworz1(typ2 * t2)
{
	std::cout<<"Przetworz1 - wyjatek typu 2 o adresie: "<<t2<<std::endl;
	delete t2;
	typ4 * t4 = new typ4;
	throw (t4);
}
