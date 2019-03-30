// Nazwa pliku wykonywalnego: Ludzie

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// -------------------- UWAGA --------------------
// Nie wolno uzywac zadnych petli ani instrukcji warunkowych
// (m.in. for, while, goto). Zamiast nich nalezy wykorzystac algorytmy
// STL.
// ------------------------------------------------

// Prosze zaimplementowac "cos" co pozwoli przechowywac informacje o
// osobach: imie, nazwisko i ocene. Powinna byc mozliwosc posortowania
// wszystkich osob alfabetycznie po imieniu lub nazwisko. Sortowanie
// powinno dac sie wykonac od A do Z i od Z do A.

// Prosze rowniez zaimplementowac metode, ktora skopiuj tylko
// informacje o ocenie do tablicy.

// Program nalezy kompilowac z flagami -Wall -g -std=c++11

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Powinien działać dla dowolnej
// liczby przekształceń.

// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)

// UWAGA!
// Wolno korzystac z dokumentacji biblioteki standardowej:
// http://www.sgi.com/tech/stl/table_of_contents.html
// http://www.cplusplus.com/reference/stl/

// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).

// Rozwiazanie (czyli dodane pliki, makefile i Main.cpp) nalezy
// wgrac do UPEL.


#include"Main.h"

template <typename PrintType>
void PrintFirstName (const PrintType& toPrint)
{
  for (auto firstName=toPrint.begin(); firstName!=toPrint.end(); ++firstName)
    for (auto lastName=firstName->second.begin(); lastName!=firstName->second.end(); ++lastName)
      std::cout<<firstName->first<<" "<<lastName->first<<": "<<lastName->second<<"\n";
}

int main()
{

  Persons computerScience;
  computerScience["Artur"]["Dent"] = 10;
  computerScience["Ford"]["Prefect"] = 14;
  computerScience["Marvin"]["Robot"] = 12;
  computerScience["Trillian"]["Astra"] = 8;
  computerScience["Artur"]["Conan Doyle"] = 9;

  std::cout<<"Print normal\n";
  PrintFirstName(computerScience);

  PersonsReverse computerScienceRev;
  computerScienceRev.insert (computerScience.begin(), computerScience.end());
  std::cout<<"\nPrint reverse\n";
  PrintFirstName(computerScienceRev);

  Persons computerScienceLast = MakeLastName (computerScience);
  std::cout<<"\nPrint last name\n";
  PrintLastName(computerScienceLast);

  PersonsReverse computerScienceLastRev = MakeLastName (computerScienceRev);
  std::cout<<"\nPrint last name reverse\n";
  PrintLastName(computerScienceLastRev);
  
  int* rating = CopyOnlyRating (computerScience);

  std::cout<<"\nPrint only rating\n";
  for (int i = 0; i < 5; ++i)
    std::cout<<"Rating: "<<rating[i]<<"\n";

  delete [] rating;

  return 0;
}
/*
Print normal
Artur Conan Doyle: 9
Artur Dent: 10
Ford Prefect: 14
Marvin Robot: 12
Trillian Astra: 8

Print reverse
Trillian Astra: 8
Marvin Robot: 12
Ford Prefect: 14
Artur Conan Doyle: 9
Artur Dent: 10

Print last name
Trillian Astra: 8
Artur Conan Doyle: 9
Artur Dent: 10
Ford Prefect: 14
Marvin Robot: 12

Print last name reverse
Marvin Robot: 12
Ford Prefect: 14
Artur Dent: 10
Artur Conan Doyle: 9
Trillian Astra: 8

Print only rating
Rating: 9
Rating: 10
Rating: 14
Rating: 12
Rating: 8
*/
