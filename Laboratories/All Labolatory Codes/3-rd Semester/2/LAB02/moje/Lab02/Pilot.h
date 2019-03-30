#ifndef PILOT_H
#define PILOT_H
#include "Osoba.h"
class Pilot : public Osoba {
public:
	Pilot(std::string name) : Osoba(name)
	{}
	virtual ~Pilot()
	{};


};


#endif