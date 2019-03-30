// tego pliku NIE wolno zmieniac

#pragma once

#include "Statek.h"

class Zaglowiec: public virtual Statek {
public:
  Zaglowiec(const float masa);
  void ZagleStaw();
  void ZaglePrecz();
  void WypiszStanZagli () const;
  void WypiszInformacje () const;

protected:
  bool m_zaglePostawione;
};

