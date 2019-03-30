#include"Min.h"
#include"Typy.h"
#include<iostream>


float Min (ciag dane, rozmiarCiagu rozmiar)
{
  std::cout<<"minimum: " << std::flush;
  float min = 1e100;
  for (int i = 0; i < rozmiar; ++i) {
    if (min > dane[i])
      min = dane[i];
  }
  return min;
}
