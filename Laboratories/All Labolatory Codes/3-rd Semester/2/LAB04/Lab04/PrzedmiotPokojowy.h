#pragma once
#include "Przedmiot.h"
class PrzedmiotPokojowy :public Przedmiot
{
public:
	PrzedmiotPokojowy(const std::string name1) : name(name1) {};
	void wypisz()
	{
		std::cout << name << std::endl;
	};
	std::string zwroc_name()
	{
		return name;
	};

private:
	std::string name;


};