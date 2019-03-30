#include "Main.h"

Spodnie::Spodnie(float cenaUbrania, std::string nazwa): Ubranie(cenaUbrania, nazwa), _czyNogawkiWyprasowane(0) {

}

void Spodnie::WypiszWlasciwosci() const {
	Ubranie::WypiszWlasciwosci();
	std::cout << " Stan nogawek: " << ((_czyNogawkiWyprasowane) ? "wyprasowane" : "pogniecione") << "." << std::endl;
}

void Spodnie::PrasujNogawki(const Zelazko& ktorymZelazkiem) {

	_czyNogawkiWyprasowane = true;
	std::cout << "Prasuje nogawki " << _nazwa << " zelazkiem o temp." << ktorymZelazkiem.Temperatura() << std::endl;
}