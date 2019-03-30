#ifndef mezczyznaLIB
#define mezczyznaLIB
#include "osoba.h" 

class Mezczyzna: public Osoba{
public:
  /**
   * @brief konstruktor tworzacy nowa postac 
   * @param imie postaci
   */
  Mezczyzna(std::string  n_name);
  /**
   * @brief wirtualny destruktor
   */ 
  virtual ~Mezczyzna(){};
};
#endif