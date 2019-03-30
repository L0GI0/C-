#include <iostream>
#include "Main.h"

void Samochod::Wypisz() const {
    std::cout << "To jest " << m_nazwa << ".\n";
    WypiszPredkoscMaksymalna();
    WypiszPoziomOleju();
}
