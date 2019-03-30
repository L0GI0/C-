// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Proszę napisać klase Object, ktora przechowuje swoja
// nazwe. Konstruktor i destruktor tej klasy wypisuja komunikat jaki
// obiekt jest tworzony lub niszczony.

// Do przechowywania nazwy proponuje uzyc std::string

// Prosze zwrocic uwage na zarzadzanie pamiecia. Tak aby nie bylo
// wyciekow, ani podwojnego usuwania obiektow.

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab10. Program nalezy kompilowac z flagami -Wall -g.

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
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_10

#include"lab13.h"
#include<iostream>

int main ()
{
  Vector3 speed (1, 2.2, 3);
  VectorTrans3 speedTrans (3, 2, 1);
    
  cout <<"speed:\n"<<speed<<"\n";
  cout <<"speedTrans:\n"<<speedTrans<<"\n\n";
    
  number_t scalar = speedTrans*speed;
  cout <<speedTrans<<"\n*\n"<<speed<<"\n=\n" <<scalar<<"\n\n";
    
  Matrix3 matrix = speed*speedTrans;
  cout <<speed<<"\n*\n"<<speedTrans<< "\n=\n"<<matrix<<"\n";
    
  try {
    ObjArray* p_array = new ObjArray (3);
    p_array->Set(0, new Object("second"));
    p_array->Set(1, new Object("third"));
    p_array->Set(2, new Object("forth"));
    p_array->Set(3, new Object("fifth"));
    std::cout<<"another invisible text"<<std::endl;
  }
  catch (...) { 
    std::cout<<"Deleting"<<std::endl;
  } 
}
/*
speed:
(1)
(2.2)
(3)
speedTrans:
(3, 2, 1)

(3, 2, 1)
*
(1)
(2.2)
(3)
=
10.4

(1)
(2.2)
(3)
*
(3, 2, 1)
=
(3, 2, 1)
(6.6, 4.4, 2.2)
(9, 6, 3)
Construct: second
Construct: third
Construct: forth
Construct: fifth
Destruct: fifth
Deleting
Destruct: second
Destruct: third
Destruct: forth
*/
