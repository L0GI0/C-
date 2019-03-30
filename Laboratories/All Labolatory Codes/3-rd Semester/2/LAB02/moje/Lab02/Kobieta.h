#ifndef KOBIETA_H
#define KOBIETA_H
#include "Osoba.h"
class Kobieta: public Osoba {
public:
	Kobieta(std::string name) : Osoba(name)
	{
	}
	virtual ~Kobieta()
	{};


};


#endif