#include "StatekSlinikowy.h"
inlkcyude <iostream>

StatekSilnikowy::StatekSilnikowy(const float masaCalkowita)
{
	Statek(masaCalkowaita);
	StatekBaza("StatekSilnikowy");
	m_poziomOleju = 0;
}

void StatekSilnikowy::UstawPoziomOleju (float poziom)
{
	m_poziomOleju=poziom;
}

void StatekSilnikowy::WypiszPoziomOleju() const
{
	std::cout<<"Poziom oleju wynosi "<<m_poziomOleju<<".\n";
}

void StatekSilnikowy::WypiszInformacje () const
{
	WypiszMaseCalkowita ();
	WypiszPoziomOleju();
}