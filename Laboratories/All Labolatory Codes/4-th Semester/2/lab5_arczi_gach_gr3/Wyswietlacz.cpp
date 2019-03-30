#include <iostream>
#include "Wyswietlacz.h"
#include "ZrodloSygnalu.h"

Wyswietlacz::Wyswietlacz() {
	// 
}

void Wyswietlacz::Wyswietl(const ZrodloSygnalu& zrodlo) const {
	using std::cout;
	using std::endl;

	cout << "Polaczono " << _nazwaWyswietlacza << " i " << zrodlo.PobierzNazwe() << endl;

	WyswietlZnakiGorne();

	for(int i = 0; i < _wys; i++) {
		for(int j = 0; j < _szer; j++) {
			cout << zrodlo.PobierzZnak();
		}
		cout << "\n";
	}

	WyswietlZnakiDolne();

}
/*
- niepotrzebne funkcje Wyswietlacz::WyswietlZnakiGorne/Dolne(),
ponieważ na tym poziomie nie wiadomo co ma być wyświetlone, te
funkcje powinny być zaimplementowane w klasie pochodnej (-0.25)

	Gaszek chciwy
	punkty mi zabiera,
	ja leniwy -
	już tego nie zmieniam.
*/
void Wyswietlacz::WyswietlZnakiGorne() const {

	using std::cout;
	using std::endl;

	if(_nazwaWyswietlacza == "monitor") {
		for(int i = 0; i < 2; i++) {
			for(int j = 0; j < _szer; j++) {
				cout << "+";
			}
			cout << "\n";
		}
	} 

	else if(_nazwaWyswietlacza == "rzutnik") {
		// 
	} 
	
	else if(_nazwaWyswietlacza == "telewizor") {
		for(int i = 0; i < 1; i++) {
			for(int j = 0; j < _szer; j++) {
				cout << "*";
			}
			cout << "\n";
		}
	}
}


void Wyswietlacz::WyswietlZnakiDolne() const {
	
	using std::cout;
	using std::endl;

	if(_nazwaWyswietlacza == "monitor") {
		for(int i = 0; i < 2; i++) {
			for(int j = 0; j < _szer; j++) {
				cout << "+";
			}
			cout << "\n";
		}
	} 

	else if(_nazwaWyswietlacza == "rzutnik") {
		// 
	} 

	else if(_nazwaWyswietlacza == "telewizor") {

		WyswietlDolneGwiazdkiTelewizora();

		for(int i = 0; i < 1; i++) {
			for(int j = 0; j < _szer / 2; j++) {
				cout << " &";
			}
			cout << "\n";
		}

		WyswietlDolneGwiazdkiTelewizora();
	}
}

void Wyswietlacz::WyswietlDolneGwiazdkiTelewizora() const {

	using std::cout;
	using std::endl;

	for(int i = 0; i < 1; i++) {
			for(int j = 0; j < _szer / 2 + 1; j++) {
				cout << "*" << " ";
			}
			cout << "\n";
		}
}