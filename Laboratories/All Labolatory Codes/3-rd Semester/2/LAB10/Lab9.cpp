// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Proszę napisać klase Number, która będzie przechowywać nazwę oraz
// wartość. Klasa może przechowywać jedynie wartości z wcześniej
// ustawionego zakresu.

// Prosze zwrocic uwage na zarzadzanie pamiecia. Tak aby nie bylo
// wyciekow, ani podwojnego usuwania obiektow.

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab9. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Pliku Lab9.cpp, nie wolno modyfikowac.

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
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_9

#include"Lab9.h"
#include<iostream>

int main ()
{
  Number::SetRange(1, 6);
  
  try {
    Number* lowest = Number::Factory("lowest", 2.2);
    lowest->Print();
    lowest->Print();

    Number* middle = Number::Factory("middle", 5.4);
    middle->Print();

    Number* highest = Number::Factory("highest", 8.3);
    highest->Print();

    std::cout<<"END OF NUMBERS"<<std::endl;
  }
  catch (OutOfRange exception) {
    std::cout<<"Huston we've got problem"<<std::endl;
    std::cout<<exception<<std::endl;
    std::cout<<"Cleaning up"<<std::endl;
  } 
}
/*
lowest = 2.2
lowest = 2.2
middle = 5.4
Huston we've got problem
Number named: highest has value 8.3 which is outside of the allowed range: [1, 6]
Cleaning up
*/
