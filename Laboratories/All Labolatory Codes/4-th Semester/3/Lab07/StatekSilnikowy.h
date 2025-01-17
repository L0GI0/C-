// Tego pliku NIE wolno zmieniac

#pragma once

#include "Statek.h"

class StatekSilnikowy: public virtual Statek {
public:
  StatekSilnikowy(const float masaCalkowita);
  void UstawPoziomOleju (float poziom);
  void WypiszPoziomOleju() const;
  void WypiszInformacje () const;

protected:
  float m_poziomOleju;
};

