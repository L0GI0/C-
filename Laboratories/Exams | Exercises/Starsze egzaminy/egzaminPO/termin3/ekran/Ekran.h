#ifndef EKRAN
#define EKRAN

#include <string>
#include <iostream>

class Ekran {
	public:
		Ekran() : tlo_ekranu(' ') {
			tresc.resize(wys_ekranu*szer_ekranu, tlo_ekranu);
		}
		void zamaluj_obszar(int lewy, int gora, int prawy, int dol, char tlo_okna);
		
		void wyswietl() { std::cout << tresc << std::flush;}
		
		void wymaz_wszystko() {
			zamaluj_obszar(0,0,szer_ekranu, wys_ekranu, tlo_ekranu); }
			
		void napisz(int kolumna, int rzad, std::string tekst) {
			tresc.replace(szer_ekranu*rzad+kolumna, tekst.length(), tekst);
		}
	private:
		std::string tresc;
		char tlo_ekranu;
		enum {wys_ekranu=24, szer_ekranu=63};
};

#endif //EKRAN