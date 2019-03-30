#pragma once
#include <iostream>

class Urzadzenie
{
public:
	Urzadzenie(const std::string nazwa1, const std::string marka1): nazwa(nazwa1), marka(marka1)
	{
		std::cout << "Tworze urzadzenie: "<< nazwa << " marki " << marka << std::endl;

	};

	virtual ~Urzadzenie()
	{
		std::cout << "Usuwam urzadzenie: "<< nazwa << " marki " << marka << std::endl;

	};

	std::string zwroc_nazwa() const
	{
		return nazwa;
	};

	std::string zwroc_marka() const
	{
		return marka;
	};

	std::string nazwa;
	std::string marka;

};