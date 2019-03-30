#include <iostream>
#include "Main.h"

void Rower::Wypisz() const {
    std::cout << "Wypisuje rower " << m_nazwa << ".\n";
    WypiszPredkoscMaksymalna();
    WypiszZrodloNapedu();
}
