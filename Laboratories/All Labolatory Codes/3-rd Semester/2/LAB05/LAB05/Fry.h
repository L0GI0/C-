#pragma once
#include "Kurier.h"



class Fry :public Kurier
{
public:
	explicit Fry(int age1) :Kurier("Fry", age1) {};
	static Fry* Utworz(int age1)
	{
		Fry *wsk = new Fry(age1);
		Postac::dodaj(wsk);
		return wsk;
	};
	virtual ~Fry() {};
	void PrzedstawSie() {};
	 void WypiszHierarchie()
	{
		std::cout << "Fry" << std::endl;
		Kurier::WypiszHierarchie();

	};
private:


};