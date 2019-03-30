#pragma once
#include <iostream>

template<int potega>
class Jednostka
{
public:
	Jednostka(const double wartosc1):wartosc(wartosc1){};
	~Jednostka(){};

	template<int x>
	Jednostka<potega+x> operator*(const Jednostka<x> &metr)
	{
		return Jednostka<potega+x>(this->wartosc * metr.ZwrocWartosc());
	};

	Jednostka<potega> operator+(const Jednostka<potega> &metr)
	{
		return Jednostka<potega>(this->wartosc + metr.ZwrocWartosc());
	};

	Jednostka<potega> operator-(const Jednostka<potega> &metr)
	{
		return Jednostka<potega>(this->wartosc - metr.ZwrocWartosc());
	};

	template<int x>
	Jednostka<potega-x> operator/(const Jednostka<x> &metr)
	{
		return Jednostka<potega-x>(this->wartosc / metr.ZwrocWartosc());
	};

	double ZwrocWartosc()const
	{
		return wartosc;
	};




private:
	double wartosc;
};


template<int x>
std::ostream& operator<<(std::ostream &o, const Jednostka<x> &metr)
{
	std::cout << metr.ZwrocWartosc() << " m";
	if(x>1)
	{
		std::cout <<"^"<<x;
	}

	return o;
};





typedef Jednostka<1> Metr;
typedef Jednostka<2> MetrKwadratowy;
typedef Jednostka<3> MetrSzescienny;