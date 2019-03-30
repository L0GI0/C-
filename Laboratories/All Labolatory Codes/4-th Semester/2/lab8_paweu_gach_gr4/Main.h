#pragma once

#include <iostream>
#include "typy.h"
#include "ObiektMiotajacy.h"

/**
*	Przetwarzanie wyjatku + wyrzucenie nowego typu wyjatku
*	Pozwala to wyjsc wyjatkowi "na zewnatrz"
*/
inline void Przetworz1 (typ1* wyjatek) {
	std::cout << "Przetworz1 - wyjatek typu 1 o adresie " << wyjatek << "\n";
	throw;
}

/**
*	Przetwarzanie wyjatku + wyrzucenie nowego typu wyjatku
*	Pozwala to wyjsc wyjatkowi "na zewnatrz"
*/
inline void Przetworz1 (typ2* wyjatek) {
	std::cout << "Przetworz1 - wyjatek typu 2 o adresie " << wyjatek << "\n";
	throw;
}