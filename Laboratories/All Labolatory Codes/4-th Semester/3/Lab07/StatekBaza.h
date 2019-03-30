#pragma once

#include <string>

class StatekBaza
{
	protected:
		
		
	public: 
		std::string Model;
		StatekBaza(std::string model) : Model(model) {}
		StatekBaza() : Model("Kocham Proggramowac") {}
};