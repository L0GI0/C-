#ifndef OSOBA_H
#define OSOBA_H
#include <iostream>
#include <string>
class Osoba {
public:
	Osoba(std::string name) : imie(name)
	{
		std::cout << "konstruktor O" << std::endl;
	}
	virtual ~Osoba()
	{};

	 std::string imie;

};

#endif