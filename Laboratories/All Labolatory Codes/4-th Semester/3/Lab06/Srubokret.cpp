// ten plik MOZNA modyfikowc

#include <iostream>
#include "Srubokret.h"


void Srubokret::Wypisz() const {
    std::cout << "Srubokret typu " << m_nazwa << ".\n";
    WypiszZastosowanie();
    WypiszZrodloNapedu();
}
