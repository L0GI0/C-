#ifndef kurierLIB
#define kurierLIB
#include "osoba.h" 

class Kurier: public Osoba{
public:
  /**
   * @brief konstruktor tworzacy nowa postac 
   * @param imie postaci
   */
  Kurier(std::string  n_name);
  /**
   * @brief wirtualny destruktor
   */ 
  virtual ~Kurier(){};
};
#endif