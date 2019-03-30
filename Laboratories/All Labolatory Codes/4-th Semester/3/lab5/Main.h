#ifndef __MAIN_H__
#define __MAIN_H__


#include <string>
#include <iostream>


/*Klasa reprezentujaca zelazko*/
class Zelazko 
{
	protected: 
		
		int m_value;
		std::string m_name;
		
	public:
		Zelazko(float val, std::string name) : m_value(val), m_temperature(0), m_name(name){} //konstruktor
		void UstawTemperature (int t); //ustawia temperature
		void WypiszWlasciwosci(); //wupisuje wlascioweci zelzaka
		int m_temperature; //zmienna zawiarjaca temeprature

};

/*Klasa reprezentujaca model zelazka Zelmer*/
class ZelazkoZelmer : public Zelazko
{
	public:
		ZelazkoZelmer(float val) : Zelazko(val, "Zelmer") {}
};

/*Klasa reprezentujaca model zelazka Tefal*/
class ZelazkoTefal : public Zelazko
{
	public:
		ZelazkoTefal(float val) : Zelazko(val, "Tefal") {} 
		
};

/*Klasa reprezentujaca Ubranie*/
class Ubranie 
{
	protected:
		int m_value;
		int m_temperature;
		std::string m_stanUbrania;
		std::string m_name;
	public :
		Ubranie (float val, std::string name) : m_value(val), m_temperature(0), m_stanUbrania("Pogniecione"), m_name(name) {}
		void Pogniec();   //zmienania status ubran an pogniecione
		void WypiszWlasciwosci(); //wypisuje wlasciowsci ubrania
		void Prasuj(Zelazko Iron); //zmienia status ubrania na wyprasowane i w jakiej temperaturze
};

/*Klasa reprezentujaca rodzaj Ubrania spodnie jedawbne*/
class SpodnieJedwabne: public Ubranie
{
	protected:
		std::string m_stanNogawek;
		
	public:
		SpodnieJedwabne (float val) : Ubranie(val, "Spodnie jednawbne"), m_stanNogawek("Pogniecione") {}
		void PrasujNogawki(Zelazko Iron);	////zmienia status ubrania na wyprasowane i w jakiej temperaturze
};

/*Klasa reprezentujaca rodzaj Ubrania koszula jedawbna*/
class KoszulaJedwabna: public Ubranie
{
	protected:
		std::string m_stanRekawow;

	public:
		KoszulaJedwabna (float val) : Ubranie(val, "Koszula jedwabna"), m_stanRekawow("Pogniecione") {}
		void PrasujRekawy(Zelazko Iron); //zmienia status ubrania na wyprasowane i w jakiej temperaturze
		
};

/*Klasa reprezentujaca rodzaj Ubrania spodnie bawelniane*/
class SpodnieBawelniane: public Ubranie
{
	protected:
		std::string m_stanNogawek;

	public:
		SpodnieBawelniane (float val) : Ubranie(val, "Spodnie Bawelnniane"), m_stanNogawek("Pogniecione") {}
		void PrasujNogawki(Zelazko Iron);	 //zmienia status ubrania na wyprasowane i w jakiej temperaturze
			
};

/*Klasa reprezentujaca rodzaj Ubrania spodnie bawelaniune*/
class KoszulaBawelniana : public Ubranie
{
	protected:
		
		std::string m_stanRekawow;

	public:
		KoszulaBawelniana (float val) : Ubranie(val, "Koszula Bawloniana"), m_stanRekawow("Pogniecione") {}
		void PrasujRekawy(Zelazko Iron); //zmienia status ubrania na wyprasowane i w jakiej temperaturze
	
};



#endif 