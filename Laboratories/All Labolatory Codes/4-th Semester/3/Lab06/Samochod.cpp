// ten plik MOZNA modyfikowc

#include <iostream>
#include "Samochod.h"


void Samochod::Wypisz() const {
    std::cout << "To jest " << m_nazwa << ".\n";
    WypiszPredkoscMaksymalna();
    WypiszPoziomOleju();
}
