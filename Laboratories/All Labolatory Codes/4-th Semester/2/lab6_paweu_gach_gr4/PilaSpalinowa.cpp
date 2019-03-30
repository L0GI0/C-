#include <iostream>
#include "Main.h"

void PilaSpalinowa::Wypisz() const {
    std::cout << "Pila spalinowa marki " << m_nazwa << ".\n";
    WypiszZastosowanie();
    WypiszPoziomOleju();
}
