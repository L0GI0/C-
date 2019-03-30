#pragma once

#include <string>
#include "Nazwany.h"


class Pojazd : public Nazwany
{
	protected:
		float m_predkosc;
		
	
	public:
		virtual void WypiszPredkoscMaksymalna() const
		{
			std::cout<<"Predkosc maksymalna tego pojazdu wynosi "<<m_predkosc<<"."<<std::endl;
		}
  		Pojazd (std::string nazwa, float predkosc) : Nazwany(nazwa), m_predkosc(predkosc) {}
};

class Narzedzie : public Nazwany
{
	protected:
		std::string m_zastosowanie;
		
	
	public:
		virtual void WypiszZastosowanie() const
		{
			std::cout<<"Tego narzedzia uzywa sie do "<<m_zastosowanie<<"."<<std::endl;
		}
  		Narzedzie (std::string nazwa, std::string zastosowanie) : Nazwany(nazwa), m_zastosowanie(zastosowanie) {}
};

class Spalinowy : public Nazwany
{
	protected:
		float m_olej;
		
	
	public:
  		virtual void WypiszPoziomOleju() const
		{
			std::cout<<"Poziom oleju wynosi "<<m_olej<<"."<<std::endl;
		}
		Spalinowy (std::string nazwa, float olej) : Nazwany(nazwa), m_olej(olej) {}
};

class Reczny : public Nazwany
{
	protected:
		std::string m_zrodlo;
		
	
	public:
		virtual void WypiszZrodloNapedu() const
		{
			std::cout<<"Do napedzenia tego urzadzenia uzywa sie "<<m_zrodlo<<"."<<std::endl;
		}
  		Reczny (std::string nazwa, std::string zrodlo) : Nazwany(nazwa), m_zrodlo(zrodlo) {}
};

#include "Samochod.h"
#include "Rower.h"
#include "PilaSpalinowa.h"
#include "Srubokret.h"
