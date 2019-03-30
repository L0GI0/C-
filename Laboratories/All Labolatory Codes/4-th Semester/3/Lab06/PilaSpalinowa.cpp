// ten plik MOZNA modyfikowc

#include <iostream>
#include "PilaSpalinowa.h"

void PilaSpalinowa::Wypisz() const {
    std::cout << "Pila spalinowa marki " << m_nazwa << ".\n";
    WypiszZastosowanie();
    WypiszPoziomOleju();
}
