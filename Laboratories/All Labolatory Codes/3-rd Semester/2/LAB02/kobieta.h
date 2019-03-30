#ifndef kobietaLIB
#define kobietaLIB
#include "osoba.h" 

class Kobieta: public  Osoba{
public:
  /**
   * @brief konstruktor tworzacy nowa postac 
   * @param imie postaci
   */
  Kobieta(std::string  n_name);
  /**
   * @brief wirtualny destruktor
   */ 
  virtual ~Kobieta(){};
};
#endif