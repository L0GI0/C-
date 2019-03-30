// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// UWAGA
// Hierarchą klas bedzie miala glowny wplyw ocene. Zla hierarchia
// znacznie obnizy ocene, rowniez za kompilacje i wykonanie.

// Prosze zwrocic uwage na zarzadzanie pamiecia. Tak aby nie bylo
// wyciekow, ani podwojnego usuwania obiektow.

// Wszystkie klasy tablic, powinny obsługiwać dowolne rozmiary tablic.

// Do obslugi ciagu znakow mozna korzystac z klas biblioteki standardowej

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab12. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Pliku Main.cpp, nie wolno modyfikowac.

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
// /home/dokt/dog/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_12

#include"lab12.h"
#include<iostream>

int main ()
{
  const int calkowieteIle = 2;
  TabInt* wt_calkowite = new TabInt (calkowieteIle);
  wt_calkowite->Set(0, 10);	// ustaw wartosc pierwszego elementu tablicy
  wt_calkowite->Set(1, 20);	// ustaw wartosc drugiego elementu tablicy
  wt_calkowite->PrintAll();
  wt_calkowite->PrintSum();

  const int ulamkiIle = 4;
  TabFloat* wt_ulamki = new TabFloat (ulamkiIle);
  for (int i = 0; i < ulamkiIle; ++i)
    wt_ulamki->Set(i, 1./(i+1));

  wt_ulamki->PrintAll();
  wt_ulamki->PrintSum();

  TabChar* wt_znaki = new TabChar (3);
  wt_znaki->Set(0, 'p');	// ustaw wartosc pierwszego elementu tablicy
  wt_znaki->Set(1, 'i');	// ustaw wartosc drugiego elementu tablicy
  wt_znaki->Set(2, 'q');	// ustaw wartosc trzeciego elementu tablicy

  wt_znaki->PrintAll();

  TabString* wt_ciagi = new TabString (4);
  wt_ciagi->Set(0, "pierwszy");
  wt_ciagi->Set(1, "drugi");
  wt_ciagi->Set(2, "trzeci");
  wt_ciagi->Set(3, "czwarty");  

  SuperTab tab (4);
  tab.Set(0, wt_calkowite);
  tab.Set(1, wt_znaki);
  tab.Set(2, wt_ciagi);
  tab.Set(3, wt_ulamki);
  
  tab[0]->Print();
  tab[1]->PrintContent();
  
  tab.PrintAll();
}
/*
TabInt
10 20
30
TabFloat
1 0.5 0.333333 0.25
2.08333
TabChar
p i q
TabInt
p i q
TabInt
10 20
TabChar
p i q
TabString
pierwszy drugi trzeci czwarty
TabFloat
1 0.5 0.333333 0.25
*/
