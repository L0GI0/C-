#pragma once
#include <string>
#include <iostream>

class Postac
{
public:

	Postac(const std::string name1, int age1): age(age1), name(name1) 
	{
		
	};
	~Postac() {};
	static void Posprzataj()
	{
		for (int i = 0; i < size; i++)
		{
			delete tab[i];
		}
		delete[] tab;

	};
	virtual void WypiszHierarchie()
	{
		std::cout << "Postac" << std::endl;


	
	};
	static void dodaj(Postac *osoba)
	{
		if (size == 0)
		{
			size += 1;
			tab = new Postac *[size];
			tab[0] = osoba;
		}
		else 
		{
			Postac **tym = new Postac*[size + 1];
			for (int i = 0; i < size; i++)
			{
				tym[i] = tab[i];
			}
			tym[size] = osoba;
			delete[] tab;
			tab = tym;
			size += 1;
		}
	};

protected:
	int age;
	std::string name;
	static Postac **tab;
	static int size;
	

};