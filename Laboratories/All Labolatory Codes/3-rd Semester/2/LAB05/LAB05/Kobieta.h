#pragma once
#include "Postac.h"

class Kobieta : public Postac
{
public:
	Kobieta(const std::string name1, int age1): Postac(name1,age1) {};
	~Kobieta() {};
	void WypiszHierarchie()
	{
		std::cout << "Kobieta" << std::endl;
		Postac::WypiszHierarchie();

	
	};
private:



};