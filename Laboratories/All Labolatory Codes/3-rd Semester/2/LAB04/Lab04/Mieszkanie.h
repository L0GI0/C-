#pragma once

#include "PrzedmiotKuchenny.h"
#include "PrzedmiotPokojowy.h"
#include <typeinfo>

class Mieszkanie 
{
public:
	Mieszkanie():size(0){};
	~Mieszkanie()
	{
		delete[]tab;
	
	};
	Mieszkanie& operator+= (Przedmiot *przedmiot1) 
	{
		if (size > 0)
		{
			Przedmiot **tym = new Przedmiot*[size + 1];
			for (int i = 0; i < size; i++)
			{
				tym[i] = tab[i];
			}
			tym[size] = przedmiot1;
			delete[] tab;
			size += 1;
			tab = tym;
		}
		else
		{
			tab = new Przedmiot*[size + 1];	
			tab[size] = przedmiot1;
			size += 1;
		}
	
		return *this;
	};

	void wypisz_przedmioty_kuchenne()
	{
		std::cout << "*** kuchnia ***" << std::endl;
		for (int i = 0; i < size; i++) 
		{
			if(PrzedmiotKuchenny *wsk = dynamic_cast<PrzedmiotKuchenny*>(tab[i]))
			{
				wsk->wypisz();
			
			}
		
		}

	};
	void wypisz_przedmioty_pokojowe()
	{
		std::cout << "*** pokoj ***" << std::endl;
		for (int i = 0; i < size; i++)
		{
			if (PrzedmiotPokojowy *wsk = dynamic_cast<PrzedmiotPokojowy*>(tab[i]))
			{
				wsk->wypisz();

			}

		}
	
	};

	Mieszkanie& operator<<(Przedmiot *przedmiot1)
	{
		if (size > 0)
		{
			Przedmiot **tym = new Przedmiot*[size + 1];
			for (int i = 0; i < size; i++)
			{
				tym[i] = tab[i];
			}
			tym[size] = przedmiot1;
			delete[] tab;
			size += 1;
			tab = tym;
		}
		else
		{
			tab = new Przedmiot*[size + 1];
			tab[size] = przedmiot1;
			size += 1;
		}

		return *this;
	};

	friend std::ostream& operator<<(std::ostream &o, Mieszkanie &m1)
	{
		o << "*** kuchnia ***" << std::endl;
		for (int i = 0; i < m1.size; i++)
		{
			if (PrzedmiotKuchenny *wsk = dynamic_cast<PrzedmiotKuchenny*>(m1.tab[i]))
			{
				o << wsk->zwroc_name() << std::endl;

			}

		}
		
		o<< "*** pokoj ***"<< std::endl;
		for (int i = 0; i < m1.size; i++)
		{
			if (PrzedmiotPokojowy *wsk = dynamic_cast<PrzedmiotPokojowy*>(m1.tab[i]))
			{
				o << wsk->zwroc_name() << std::endl;

			}

		}
		return o;
	};

private:
	Przedmiot **tab;
	int size;


};