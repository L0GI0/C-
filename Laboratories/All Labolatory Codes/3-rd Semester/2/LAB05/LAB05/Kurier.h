#pragma once

#include "Mezczyzna.h"

class Kurier : public Mezczyzna
{
public:
	Kurier(const std::string name1, int age1) : Mezczyzna(name1, age1) {};
	~Kurier() {};
	void WypiszHierarchie() 
	{
		std::cout << "Kurier" << std::endl;
		Mezczyzna::WypiszHierarchie();
	};
private:



};