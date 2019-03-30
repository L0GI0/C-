#include "Main.h"

StatekSilnikowy::StatekSilnikowy(const float masaCalkowita): Statek(masaCalkowita), m_poziomOleju(0) {}

void StatekSilnikowy::UstawPoziomOleju (float poziom) {
	m_poziomOleju = poziom;
}

void StatekSilnikowy::WypiszPoziomOleju() const {
	std::cout << "Poziom oleju wynosi " << m_poziomOleju << ".\n";
}

void StatekSilnikowy::WypiszInformacje() const {

	std::cout << "Masa calkowita tego statku wynosi " << m_masa	<< ".\n";
	WypiszPoziomOleju();
}