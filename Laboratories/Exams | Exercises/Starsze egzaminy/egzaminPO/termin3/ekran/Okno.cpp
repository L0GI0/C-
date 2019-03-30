#include "Ekran.h"
#include "Wizerunek_ekranu.h"
#include "Okno.h"

extern Ekran monitor;

Wizerunek_ekranu Okno::operator+(Okno& m2) {
	Wizerunek_ekranu roboczy;
	roboczy += *this;
	roboczy += m2;
	return roboczy;
}

void Okno::narysuj_sie() {
	monitor.zamaluj_obszar(x,y,x+szer, y+wys, kolor);
	
	std::string linijka(szer, '-');
	monitor.napisz(x,y, linijka);
	monitor.napisz(x, y+wys, linijka);
	
	for(int i=0; i<wys+1; i++) {
		monitor.napisz(x,y+i, "|");
		monitor.napisz(x+szer, y+i, "|");
	}
	
	monitor.napisz(x+(szer-(tytul.size()))/2, y, tytul);
	monitor.wyswietl();
}