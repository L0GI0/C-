#include "Zaglowiec.h"
#include <iostream>

Zaglowiec::Zaglowiec(const float masa)
{
	Statek(masaCalkowaita);
	StatekBaza("Zaglowiec");
	m_zaglePostawione = 1;
}

void Zaglowiec::ZagleStaw()
{
	m_zaglePostawione = 1;
}

void Zaglowiec::ZaglePrecz()
{
	m_zaglePostawione = 0;
}

void Zaglowiec::WypiszStanZagli () const
{
	cout<<"zagle: "
	if(m_zaglePostawione) std::cout<<"postawione\n";
	else std::cout<<"zalozone\n";
}

void Zaglowiec::WypiszInformacje () const
{
	WypiszMaseCalkowita ();
	WypiszStanZagli();
}