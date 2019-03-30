// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Dlugosc wektora nalezy obliczyc jako: l = sqrt(x*x + y*y + z*z)
// funkcja sqrt znajduje sie w pliku <math.h>

// Przy pisaniu programu nie można korzystać z żadnych innych funkcji
// lub klas bibliotecznych

// Nie wolno przeladowywac operatorow (w tym operatora: <)

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab04. Program nalezy kompilowac z flagami -Wall -g.

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
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_04


#include<iostream>
#include"Wektor.h"

int main ()
{
  using namespace std;
  cout<<"Tworzy sie Ziemia"<<endl;
  char nazwa [] = "zolw";
  const char* nazwa_const = nazwa;
  Wektor zolw (nazwa_const, 3, 4, 0);
  cout<<"Pozniej bylo duzo zwierzat\n";
  const Wektor zajac ("zajac", 3.14);

  zolw.Wypisz();
  cout<<"\n";
  zajac.Wypisz();
  cout<<"\n";
  
  cout <<"Wyscig wygral: ";
  if (zolw > zajac)
    zolw.PrzedstawSie();
  else
    zajac.PrzedstawSie();
  cout<<"\n";

  nazwa[0] = 'p';
  nazwa[1] = 's';
  nazwa[2] = 'e';
  nazwa[3] = 'm';
  cout <<"Ktory okazal sie ";
  zolw.PrzedstawSie();
  cout <<"\n";

  zolw = "krowa";
  zolw.Wypisz();
  cout <<"\n";
  Wektor kon ("kon", 1, 2, 1);
  
  return 0;
}
/*
WIELKI WYBUCH!
Tworzy sie Ziemia
Pierwsze zwierze na Ziemi!
Pozniej bylo duzo zwierzat
zolw: (3, 4, 0) dlugosc: 5
zajac: (3.14, 0, 0) dlugosc: 3.14
Wyscig wygral: zolw
Ktory okazal sie psem
krowa: (0, 0, 0) dlugosc: 0
Koniec Swiata!
*/
