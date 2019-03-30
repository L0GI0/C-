// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Pliku lab03.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Powinien działać dla dowolnej
// liczby przekształceń.

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab03. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)

// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// /home/dokt/dog/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_03


#include"lab03.h"
#include"lab03.h"

#include<iostream>

int main ()
{
  Wzor wzor (2);
  std::cout<<"Inicjalizacja: "<<wzor.wynik()<<"\n";
  wzor.przeksztalc(DODAJ, 3);
  std::cout<<"Po operacji nr 1: "<<wzor.wynik()<<"\n";
  wzor.przeksztalc(POMNOZ, 2);
  std::cout<<"Po operacji nr 2: "<<wzor.wynik()<<"\n";
  wzor.przeksztalc(PODZIEL, 2.5)->przeksztalc(ODEJMIJ, 5)->przeksztalc(DODAJ, -1);
  std::cout<<"Ostateczny wynik: "<<wzor.wynik()<<"\n";
  std::cout<<"\n";

  const float liczba_poczatkowa = 1;
  std::cout<<"Zmiana liczby poczatkowej na: "<<liczba_poczatkowa<<"\n";
  wzor.ustaw_liczbe (liczba_poczatkowa);
  std::cout<<"Ostateczny wynik:"<<wzor.wynik()<<"\n";

  return 0;
}

/*
Inicjalizacja: 2
Po operacji nr 1: 5
Po operacji nr 2: 10
Ostateczny wynik: -2

Zmiana liczby poczatkowej na: 1
Ostateczny wynik:-2.8
*/
