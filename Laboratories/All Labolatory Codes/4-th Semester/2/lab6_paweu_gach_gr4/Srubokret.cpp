#include <iostream>
#include "Main.h"

void Srubokret::Wypisz() const {
    std::cout << "Srubokret typu " << m_nazwa << ".\n";
    WypiszZastosowanie();
    WypiszZrodloNapedu();
}
