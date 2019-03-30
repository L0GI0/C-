#pragma once
#include "Przedmiot.h"
#include <iostream>
#include <string>

class PrzedmiotKuchenny : public Przedmiot
{
public:
	PrzedmiotKuchenny(const std::string name1) : name(name1) {};
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