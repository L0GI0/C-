// ten plik MOZNA modyfikowc

#include <iostream>
#include "Rower.h"

void Rower::Wypisz() const {
    std::cout << "Wypisuje rower " << m_nazwa << ".\n";
    WypiszPredkoscMaksymalna();
    WypiszZrodloNapedu();
}
