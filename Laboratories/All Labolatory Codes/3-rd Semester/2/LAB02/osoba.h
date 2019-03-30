#ifndef osobaLIB
#define osobaLIB
#include <string>
class Osoba{
public:
  /**
   * @brief klasa bazowa po ktorej dziedzicza pozostale
   * @param imie postaci
   */
  Osoba(std::string  n_name);
  // imie postaci
  std::string imie;
};
#endif