#include "Main.h"

Ubranie::Ubranie(float cenaUbrania, std::string nazwaUbrania): Przedmiot(cenaUbrania, nazwaUbrania), _czyWyprasowane(0) {

}

void Ubranie::WypiszWlasciwosci() const {
	std::cout << _nazwa << " cena: " << _cena << ". Stan ubrania: " << ((_czyWyprasowane) ? "wyprasowane" : "pogniecione") << ".";
}

void Ubranie::Prasuj(const Zelazko& ktorymZelazkiem) {
	_czyWyprasowane = true;
	std::cout << "Prasuje " << _nazwa << " zelazkiem o temp. " << ktorymZelazkiem.Temperatura() << "." << std::endl;
}

void Ubranie::Pogniec() {
	_czyWyprasowane = false;
}
