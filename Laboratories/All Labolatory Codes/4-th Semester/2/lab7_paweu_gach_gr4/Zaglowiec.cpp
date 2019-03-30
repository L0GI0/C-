#include "Main.h"
#include <typeinfo>

Zaglowiec::Zaglowiec(const float masa): Statek(masa), m_zaglePostawione(false) {}

void Zaglowiec::ZagleStaw() {
	m_zaglePostawione = true;
}

void Zaglowiec::ZaglePrecz() {
	m_zaglePostawione = false;
}

void Zaglowiec::WypiszStanZagli() const {
	std::cout << "zagle: " << ((m_zaglePostawione) ? "postawione" : "zlozone") << "\n";
}

void Zaglowiec::WypiszInformacje() const {
	std::cout << "Masa calkowita tego statku wynosi " << m_masa	<< ".\n";
	WypiszStanZagli();
}

void WypiszWlasciwosci(const Statek* statek) {
	const Zaglowiec* statekZ = dynamic_cast<const Zaglowiec*>(statek);
	if (statekZ) {
		std::cout << "To jest zaglowiec.\n";
		statekZ->WypiszStanZagli();
	}
	const StatekSilnikowy* statekS = dynamic_cast<const StatekSilnikowy*>(statek);
	if (statekS) {
		std::cout << "To jest statek silnikowy.\n";
		statekS->WypiszPoziomOleju();
	}
}