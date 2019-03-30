#pragma once
#include "Kobieta.h"

class Pilot : public Kobieta
{
public:
	Pilot(const std::string name1, int age1) : Kobieta(name1, age1) {};
	~Pilot() {};
	void WypiszHierarchie()
	{
		std::cout << "Pilot" << std::endl;
		Kobieta::WypiszHierarchie();
	
	};
private:



};