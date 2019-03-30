#ifndef pilotLIB
#define pilotLIB
#include "osoba.h" 

class Pilot: public  Osoba{
public:
  /**
   * @brief konstruktor tworzacy nowa postac 
   * @param imie postaci
   */
  Pilot(std::string  n_name);
  /**
   * @brief wirtualny destruktor
   */ 
  virtual ~Pilot(){};
};
#endif