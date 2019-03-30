// Tego pliku NIE wolno zmieniac

#pragma once

#include"StatekBaza.h"
#include<iostream>

class Statek : StatekBaza
{
public:
  Statek(const float masa) : m_masa (masa) {std::cout<<"Tworzony jest statek o masie "<<m_masa<<".\n";}
  ~Statek () {}

  void WypiszMaseCalkowita () const {std::cout<<"Masa calkowita tego statku wynosi "<<m_masa<<".\n";}
protected:
  float m_masa;
};
