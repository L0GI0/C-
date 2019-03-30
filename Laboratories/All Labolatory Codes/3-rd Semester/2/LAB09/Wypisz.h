#include <iostream>

void ObnizIWypiszZaradnie (Cena& cenaDoObnizenia, float obnizka)
{
  try {
    cenaDoObnizenia.Obniz_zaradnie(obnizka);
    cenaDoObnizenia.Wypisz();
    std::cout << std::endl;

  }
  catch (...) {
    std::cout << std::endl;
  }
   
}


