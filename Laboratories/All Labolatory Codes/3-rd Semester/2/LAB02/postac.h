#ifndef postacLIB
#define postacLIB
#include "osoba.h" 
#include "pilot.h"
#include "kurier.h"
#include <iostream>
class Postac: public  Osoba{
public:
  /**
   * @brief konstruktor tworzacy nowa postac 
   * @param imie postaci
   */
  Postac(std::string  n_name);
  /**
   * @brief wyswietla komunikat o imieniu i funkcji
   */
  void PrzedstawSie();

  /**
   * @brief wirtualny destruktor
   */ 
  virtual ~Postac(){};
};
#endif