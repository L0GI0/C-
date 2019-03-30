// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze napisac funkcje wykonujace operacje na tablicach
// reprezentujacych liste studentow.

// W tablicy "namesList" przechowywane sa pierwsze i drugie imie
// studenta oddzielone jedna spacja.

// W tablicy "surnamesList" przechowywane sa nazwiska studentow.

// W tablicy "yearsList" przechowywane sa lata na ktorych studiuja
// studenci.

// UWAGA
// Tablice powinny dostosowywac sie do liczby elementow, ktore maja byc w
// nich przechowywane.

// Prosze zwrocic uwage na dobre zarzadzanie pamiecia.

// Pliku Lab02.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab02. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile)

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, makefile i Lab02.cpp) nalezy wgrac
// do UPEL: upel.agh.edu.pl/wfiis/course/view.php?id=22

#include "Lab02.h"

int main ()
{
  int numberOfStudents = 0;
  char** namesList = NULL;
  char** surnamesList = NULL;
  int* yearsList = NULL;

  const char* firstName = "Spike";
  const char* secondName = "Jozef";
  const char* surname = "Spiegel";
  AddStudent(&numberOfStudents, &namesList, &surnamesList, &yearsList, firstName, secondName, surname, 3);

  firstName = "Rick";
  secondName = "Albert";
  surname = "Sanchez";
  AddStudent(&numberOfStudents, &namesList, &surnamesList, &yearsList, firstName, secondName, surname, 7);

  firstName = "Sterling";
  secondName = "Malory";
  surname = "Archer";
  AddStudent(&numberOfStudents, &namesList, &surnamesList, &yearsList, firstName, secondName, surname, 1);

  std::cout<<"Only names:\n";
  PrintListContent (numberOfStudents, namesList);

  std::cout<<"\nOnly surnames:\n";
  PrintListContent (numberOfStudents, surnamesList);

  std::cout<<"\nOnly years:\n";
  PrintListContent (numberOfStudents, yearsList);

  std::cout<<"\nEverything:\n";
  PrintListContent (numberOfStudents, namesList, surnamesList, yearsList);

  ClearStudents (&numberOfStudents, &namesList, &surnamesList, &yearsList);

  return 0;
}
/* wynik dzialania programu:
Only names:
Chuck Jozef
John Wieslaw
Johny Eugeniusz

Only surnames:
Norris
Rambo
Bravo

Only years:
7
3
1

Everything:
Norris, Chuck Jozef - year 7
Rambo, John Wieslaw - year 3
Bravo, Johny Eugeniusz - year 1
*/
