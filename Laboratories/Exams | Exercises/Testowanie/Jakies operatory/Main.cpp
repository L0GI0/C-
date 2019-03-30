#include <iostream>
#include <stdlib.h>

class Pierwsza
{
public:
	Pierwsza():liczba(0){};
	~Pierwsza(){};
	Pierwsza(const int liczba1): liczba(liczba1){};

	Pierwsza operator+(const Pierwsza &obj)
	{
		return Pierwsza(liczba+obj.liczba);
	};

	Pierwsza operator()(const Pierwsza &obj)
	{
		this->liczba = obj.liczba;
		return *this;
	};

	static void* operator new(size_t rozm)
	{
		void *p = malloc(rozm);
		return p;
	}

	static void* operator new [](size_t rozm)
	{
		void *p = malloc(rozm);
		return p;
	}


	static void operator delete (void *p)
	{
		std::cout << "In overloaded delete.\n";	
		free(p);
	}

	static void operator delete[] (void *p)
	{
		std::cout << "In overloaded delete.\n";	
		free(p);
	}
	operator int()
	{
		return liczba;
	};

private:
	int liczba;


};


int main()
{
	Pierwsza a(1);
	Pierwsza b(2);

//Poniższy przykład nie działa
	Pierwsza c;
	int suma = c(1+2);
	std::cout << suma << std::endl;
//Poniższy przykład działa
	Pierwsza d = a+b;
    int suma1 = d;
	std::cout << suma1 << std::endl;
	Pierwsza *pointer = new Pierwsza(2);
	delete pointer;

	Pierwsza *pointer1 = new Pierwsza[5];
	delete[] pointer1;

	return 0;
}