#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>

class Pierwsza
{
public:
	Pierwsza():liczba(0){};
	Pierwsza(const Pierwsza &obj):liczba(obj.liczba){};
	~Pierwsza(){};

private:
	int liczba;
};

template<typename T>
inline void wypisz(std::vector<T> &vect)
{
	for(unsigned i=0 ; i<vect.size();i++)
	{
		std::cout << vect[i]<< " ";
	}
	std::cout << std::endl;
};

template <typename T>
inline void wypisz_it(T& coll)
{
	typename T::const_iterator it;
	for(it = coll.begin(); it != coll.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
};


int main()
{

	std::vector<int> wektor1(10);
	std::vector<double> wektor2(15,2.4);
	std::vector<int> wektor3(wektor1.begin(), wektor1.end());
	std::vector<double> wektor4(wektor2);
	std::vector<int> wektor5(6,33);
	///	wypelnienie
	for(unsigned i=0 ; i<wektor1.size();i++)
	{
		wektor1[i] = i+1;
	}
	///	wypisanie
	wypisz(wektor1);
	wypisz(wektor2);
	wypisz(wektor3);
	wypisz(wektor4);
	std::cout << "Czy wektor5 jest pusty: " <<wektor5.empty() << std::endl;

	wektor1.swap(wektor5);
	wypisz(wektor1);
	wypisz(wektor5);

	swap(wektor1,wektor5);
	wypisz(wektor1);
	wypisz(wektor5);
	wektor5.clear();
	std::cout << "Czy wektor5 jest pusty: " <<wektor5.empty() << " Maksymalny rozmiar: " << wektor5.max_size() << " Pojemnosc: "<< wektor5.capacity() <<  std::endl;

	std::vector<char> wektor6(5,'c');
	wypisz_it(wektor6);
	wektor6[0] = 'a';
	wektor6[4] = 'd';
	std::cout << wektor6.front() << " " << wektor6.back()  << std::endl;

	std::vector<int> wektor7(5);
	std::vector<int>::reverse_iterator rit;
	int i = 0;
	for(rit = wektor7.rbegin(); rit != wektor7.rend(); rit++)
	{
		*rit = ++i;
	}
	wypisz_it(wektor7);
	wektor1.insert(wektor1.begin()+5, wektor7.begin(), wektor7.end());
	wektor1.pop_back();
	wektor1.push_back(11);
	wektor1.erase(wektor1.end()-1);
	wektor1.erase(wektor1.begin()+10, wektor1.end()-1);
	wypisz_it(wektor1);
	wektor1.pop_back();
	std::vector<int> wektor1_nowy(10);
	swap(wektor1_nowy,wektor1);
	wypisz_it(wektor1_nowy);
	wektor1.clear();
	wypisz_it(wektor1);





	////////////////// 	LISTA
	std::list<int> lista1(10);
	std::list<int>::iterator list_it;
	int j=0;
	for(list_it = lista1.begin() ; list_it != lista1.end() ; list_it++)
	{
		*list_it = ++j;
	}
	lista1.push_front(123);
	lista1.push_front(1);
	lista1.push_front(1);
	lista1.unique();
	lista1.sort();
	wypisz_it(lista1);
	lista1.reverse();
	wypisz_it(lista1);

	std::list<int> lista2(lista1);
	std::list<int>::iterator iter= lista2.begin()++;
	lista2.splice(iter,lista1);
	wypisz_it(lista2);


		return 0;
}