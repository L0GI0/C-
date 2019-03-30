#pragma once
#include <string>

// Deklaracja wyprzedzajaca klasy ZrodloSygnalu
class ZrodloSygnalu;

// Klasa Wyswietlacz, ktora wyswietla odpowiednia znaki na ekranie
class Wyswietlacz
{
	public:
		// Konstruktor klasy
		Wyswietlacz();
		// Metoda wyswietlajaca znaki na ekran przyjmujaca odpowiednie Zrodlo sygnalu
		void Wyswietl(const ZrodloSygnalu&) const;

	protected:
		// Szerokosc wyswietlanych znakow
		int _szer;
		// Wyusokosc wyswietlanych znakow
		int _wys;
		// Nazwa danego urzadzenia
		std::string _nazwaWyswietlacza;

	private:
		// Dwie metody, ktor - w zaleznosc od Wyswietlacza, wyswietlaca ramki gorne i ramki dolne
		void WyswietlZnakiGorne() const;
		void WyswietlZnakiDolne() const;
		// Dodatkowa metoda wyswietlajaca dolny ciag gwiazdek w telewizorze
		// zapobiegajaca dwdukroptnemu uzyciu takiego samego kodu
		void WyswietlDolneGwiazdkiTelewizora() const;
};
