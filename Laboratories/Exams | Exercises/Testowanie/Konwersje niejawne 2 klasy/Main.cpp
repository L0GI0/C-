#include <iostream>


class Pierwsza
{
public:

	Pierwsza operator+(const Pierwsza &obj) 
	{
		return Pierwsza(return_liczba() + obj.return_liczba());
	}


	void sth()const
	{
		std::cout << liczba << std::endl;
	};

	int &ref;
	operator int()
	{
		return liczba;
	}

	int return_liczba() const
	{
		return liczba;
	}

	void sthx(Pierwsza &obj) 
	{

		obj.liczba = 100;
		std::cout << obj.liczba << std::endl;
	};
	Pierwsza(const int liczba1):liczba(liczba1){};
private:
	int liczba;


};

class Druga
{
public:

	Druga(const Pierwsza obj1):obj(obj1){};
	void nth()const
	{};

private:
	 Pierwsza obj;
};

	


int main()
{
	Pierwsza a(2);
	Pierwsza c = 4.5;
	Druga b = a;
	b.nth();

	c.sth();
	double d = 3.5;
	char e = d;
	std::cout << e << std::endl;

	///
	Pierwsza x(5);
	const Pierwsza y(3);
	Pierwsza z = y;
	x.sthx(z);
	Pierwsza xy = 5+x;
	std::cout << xy << std::endl;

	return 0;
}