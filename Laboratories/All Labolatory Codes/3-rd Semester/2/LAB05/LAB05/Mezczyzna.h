#pragma once


#pragma once
#include "Postac.h"

class Mezczyzna : public Postac
{
public:
	Mezczyzna(const std::string name1, int age1) : Postac(name1, age1) {};
	~Mezczyzna() {};
	void WypiszHierarchie() 
	{
		std::cout << "Mezczyzna" << std::endl;
		Postac::WypiszHierarchie();
	};
private:



};