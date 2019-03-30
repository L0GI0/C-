#include "Main.h"

Koszula::Koszula(float cenaUbrania, std::string nazwa): Ubranie(cenaUbrania, nazwa), _czyRekawyWyprasowane(0) {

}

void Koszula::WypiszWlasciwosci() const {
	Ubranie::WypiszWlasciwosci();
	std::cout << " Stan rekawow: " << ((_czyRekawyWyprasowane) ? "wyprasowane" : "pogniecione") << "." << std::endl;
}

void Koszula::PrasujRekawy(const Zelazko& ktorymZelazkiem) {

	_czyRekawyWyprasowane = true;
	std::cout << "Prasuje rekawy " << _nazwa << " zelazkiem o temp." << ktorymZelazkiem.Temperatura() << "." << std::endl;
}