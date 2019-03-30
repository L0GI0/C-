#include"Typy.h"
#include<iostream>


void Wypisz(const ciag dane, const rozmiarCiagu ile)
{
  std::cout << "(" << dane[0]<<std::flush;
  for (int i = 1; i < ile;)
    std::cout << ", " << dane[i++]<<std::flush;
  std::cout << ")" << std::endl;
}
