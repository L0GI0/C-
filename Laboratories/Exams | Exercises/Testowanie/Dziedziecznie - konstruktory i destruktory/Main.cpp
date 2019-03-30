#include <iostream>
#include <stdlib.h>


class Wirtualna
{
public:
	Wirtualna()
	{
		std::cout << "Konstruktor klasy Wirtualna" << std::endl;
	};
	virtual void print()const =0;

};

class Pierwsza:virtual public Wirtualna
{
public:
	Pierwsza(const int liczba1):liczba(liczba1)
	{
		std::cout << "Konstruktor klasy Pierwsza" << std::endl;
	};
	void print()const
	{
		std::cout << liczba << std::endl;
	};

protected:
	int liczba;
};

class Druga: public Pierwsza
{
public:
	Druga(const int liczba1):Pierwsza(liczba1)
	{
		std::cout << "Konstruktor klasy Druga" << std::endl;
	};

};

class Trzecia: virtual public Wirtualna
{
public:
	Trzecia(const int liczba1)
	{
		std::cout << "Konstruktor klasy Trzecia" << std::endl;
	};
	void print()const
	{
		
	};
};


int main()
{
	Trzecia druga(5);
	druga.print();

	return 0;
}