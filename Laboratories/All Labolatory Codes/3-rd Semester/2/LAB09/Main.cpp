// Prosze napisac klasy reprezentujace urzadzenie i cene. Urzadzenie
// charakteryzuje sie nazwa i marka oraz ma glosne konstruktor i
// destruktor. Cene da sie obnizac i posiada metode Wypisz, ktora
// wypisuje informacje o urzadzeniu i jego cenie.
 
// Prosze rowniez zaimplementowac funkcje ObnizIWypiszZaradnie, ktora
// obniza cene i wypisuja ja jezeli wszystko jest w porzadku lub
// wypisuje komunikaty bledu jezeli cos jest zle.
 
// UWAGA!  W funkcji ObnizIWypiszZaradnie nie wolno uzywac zadnych
// instrukcji warunkowych np. if, while, for.
 
// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Cena. Program nalezy kompilowac z flagami -Wall -g.
 
// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.
 
// Pliku Lab09.cpp, nie wolno modyfikowac.
 
// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Powinien działać dla dowolnej
// liczby przekształceń.
 
// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)
 
// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).
 
// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// ~gach/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_09
 
#include"Lab09.h"
 
void ObnizIWypiszBezradnie (Cena& cenaDoObnizenia, float obnizka)
{
  try {
    cenaDoObnizenia.Obniz(obnizka);
    cenaDoObnizenia.Wypisz();
    std::cout<<"Wszystko zakonczylo sie pomyslnie.\n"<<std::endl;
  }
  catch (...) {
    std::cout<<"Nie wiem co się stalo.\n"<<std::endl;
  }
   
}
 
int main ()
{
  Urzadzenie mikserBraun ("mikser", "braun");
  Cena cenaMikseraBraun (100, mikserBraun);
  ObnizIWypiszBezradnie (cenaMikseraBraun, 50);  
 
 Urzadzenie mikserZelmer ("mikser", "zelmer");
  Cena cenaMikseraZelmer (40, mikserZelmer);
  ObnizIWypiszBezradnie (cenaMikseraZelmer, 50);
 
  Urzadzenie* mikserPhilips = new Urzadzenie ("mikser", "philips");
  Cena cenaMikseraPhilips (40, mikserPhilips);
  ObnizIWypiszBezradnie (cenaMikseraPhilips, 50);

  Urzadzenie czajnikZelmer ("czajnik", "zelmer");
  Cena cenaCzajnikaZelmer (201.5, czajnikZelmer);
  ObnizIWypiszZaradnie (cenaCzajnikaZelmer, 50);

  Urzadzenie czajnikBraun ("czajnik", "braun");
  Cena cenaCzajnikaBraun (150, czajnikBraun);
  ObnizIWypiszZaradnie (cenaCzajnikaBraun, 200);
    
  Urzadzenie* zegarBraun = new Urzadzenie  ("zegar", "braun");
  Cena cenaZegaraBraun (50, zegarBraun);
  ObnizIWypiszZaradnie (cenaZegaraBraun, 60);
 
  Urzadzenie* zegarPhilips = new Urzadzenie ("zegar", "philips");
  Cena cenaZegarPhilips (120, zegarPhilips);
  ObnizIWypiszZaradnie (cenaZegarPhilips, 50);
 
  Cena zlaCena (40, NULL);
  ObnizIWypiszZaradnie (zlaCena, 20);

  return 0;
}
/*
Tworze urzadzenie: mikser marki braun
mikser marki braun kosztuje 50
Wszystko zakonczylo sie pomyslnie.
 
Tworze urzadzenie: mikser marki zelmer
Nie wiem co się stalo.
 
Tworze urzadzenie: mikser marki philips
Nie wiem co się stalo.
 
Tworze urzadzenie: czajnik marki zelmer
czajnik marki zelmer kosztuje 151.5
 
Tworze urzadzenie: czajnik marki braun
Cene produktu: czajnik firmy braun probowano obnizyc do kwoty: -50.
 
Tworze urzadzenie: zegar marki braun
Cene produktu: zegar firmy braun probowano obnizyc do kwoty: -10.
Usuwam produkt o zlej cenie.
Usuwam urzadzenie: zegar marki braun
 
Tworze urzadzenie: zegar marki philips
zegar marki philips kosztuje 70
 
Brak produktu przypisanego do ceny
 
Usuwam urzadzenie: zegar marki philips
Usuwam urzadzenie: czajnik marki braun
Usuwam urzadzenie: czajnik marki zelmer
Usuwam urzadzenie: mikser marki philips
Usuwam urzadzenie: mikser marki zelmer
Usuwam urzadzenie: mikser marki braun
*/