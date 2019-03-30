#include "Ekran.h"

extern Ekran monitor;

void Ekran::zamaluj_obszar(int lewy, int gora, int prawy, int dol, char tlo_okna) {
	int dlugosc = prawy-lewy;
	for(int y=gora; y<dol; y++) {
		tresc.replace(y*szer_ekranu+lewy, dlugosc, dlugosc, tlo_okna);
	}
	
	for(int i=0; i<wys_ekranu; i++) {
		tresc[(i+1)*szer_ekranu-1]= '\n';
	}
}