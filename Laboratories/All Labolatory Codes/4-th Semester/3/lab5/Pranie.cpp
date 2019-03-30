#include "Main.h"
#include <string>
#include <iostream>

void Zelazko::UstawTemperature (int t)
{
	m_temperature = t;	
}

void Zelazko::WypiszWlasciwosci()
{
	std::cout<<m_name<<" cena: "<<m_value<<". temperatura: "<<m_temperature<<std::endl;
}

void Ubranie::Pogniec()
{
	m_stanUbrania = "Pogniecione";
}

void Ubranie::WypiszWlasciwosci()
{
	std::cout<<m_name<<" cena: "<<m_value<<". Stan ubrania: "<<m_stanUbrania<<std::endl;
}

void Ubranie::Prasuj(Zelazko Iron)
{
	m_stanUbrania = "wyprasowne";
	m_temperature = Iron.m_temperature;
	
}

void SpodnieJedwabne::PrasujNogawki(Zelazko Iron)
{
	m_stanNogawek = "wyprasowne";
	m_temperature = Iron.m_temperature;
}

void SpodnieBawelniane::PrasujNogawki(Zelazko Iron)
{
	m_stanNogawek = "wyprasowne";
	m_temperature = Iron.m_temperature;
}

void KoszulaBawelniana::PrasujRekawy(Zelazko Iron)
{
	m_stanRekawow = "wyprasowne";
	m_temperature = Iron.m_temperature;
}

void KoszulaJedwabna::PrasujRekawy(Zelazko Iron)
{
	m_stanRekawow = "wyprasowne";
	m_temperature = Iron.m_temperature;
}
