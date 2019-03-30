// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze zaimplementowac typ o nazwie Object, ktory bedzie mial
// konstruktor i destruktor wypisujace tekst na ekran oraz funkcje
// print wypisujaca jego nazwe na ekran

// Prosze rowniez zaimplementowac klase, ktora bedzie przechowywala
// wskaznik na obiekt typu Object. Powinien byc to unikatowy wskaznik,
// to znaczy tylko jeden obiekt moze wskazywac na jeden obiekt typu
// Object. Gdy wskaznik jest niszczony rowniez obiekt na ktory
// wskazuje jest niszczony.

// Komentarze, które są w funkcji main, mówią jaki tekst jest
// wypisywany na ekran w danym miejscu kodu

// Pliku lab04.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab04. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)

// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// ~gach/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_04

#include"lab04.h"
#include<iostream>

int main ()
{
  using namespace std;

  Object local ("local");
  local.print();		// This is local

  UniquePointer ptr1 (new Object ("dynamic1"));
  ptr1.print();			// This is a pointer to dynamic1
  ptr1->print();		// This is dynamic1
  Object* p_dynamic1 = ptr1.get();
  p_dynamic1->print();		// This is dynamic1

  UniquePointer ptr2 = ptr1;
  ptr1.print();			// This object does not point to anything
  ptr2.print();			// This is a pointer to dynamic1

  ptr2 = new Object ("dynamic2");
  ptr2 = ptr2;
  ptr2.print();			// This is a pointer to dynamic2

  ptr2 = ptr2.get();
  ptr2.print();			// This is a pointer to dynamic2

  ptr1 = ptr2;			
  ptr1.print();			// This is a pointer to dynamic2

  ptr1->print();		// This is dynamic2

  return 0;
}
/*
Constructing object local
This is local
Constructing object dynamic1
This is a pointer to dynamic1
This is dynamic1
This is dynamic1
This object does not point to anything
This is a pointer to dynamic1
Constructing object dynamic2
Destroying object dynamic1
This is a pointer to dynamic2
This is a pointer to dynamic2
This is a pointer to dynamic2
This is dynamic2
Destroying object dynamic2
Destroying object local
*/
