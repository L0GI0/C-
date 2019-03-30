// Prosze napisac symulacje kuchni, ktora przygotowuje kanapki i
// uklada menu. Efekt dzialania kuchni powinien byc taki, jak
// przedstawiony ponizej funkcji main..
 
// UWAGA !!!
// Funkcji Menu::dodaj() nie mozna przeciazac t.j. nalezy ja
// zaimplementowac tylko raz.
 
// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie SimKuchnia. Program nalezy kompilowac z flagami -Wall -g.
 
// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.
 
// Pliku Lab08.cpp, nie wolno modyfikowac.
 
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
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_08                                                                      
                                                                                                                                      
#include<iostream>                                                                                                                        
#include"lab08.h"                                                                                                                              
                                                                                                                                                
int main ()                                                                                                                                             
{                                                                                                                                                       
  const int liczbaPlastrowOgorka (2);                                                                                                                   
  const float cenaDlaStudenta (1.33);                                                                                                                             
  const KanapkaZOgorkiem kanapkaStudencka (liczbaPlastrowOgorka, cenaDlaStudenta);                                                                                
                                                                                                                                                                  
  const float wagaMielonki (161.11);                                                                                                                                          
  const float cenaDlaDoktoranta (2);                                                                                                                                          
  const KanapkaZMielonka kanapkaDoktorancka (wagaMielonki, cenaDlaDoktoranta);                                                                                                
                                                                                                                                                                                     
  const int liczbaPlastrowSera (2);                                                                                                                                                   
  const double gruboscPlastru (0.49684322);                                                                                                                                                                
  const float cenaDlaFizyka (2.4);                                                                                                                                                                         
  const KanapkaZSerem kanapkaFizyczna (liczbaPlastrowSera, gruboscPlastru, cenaDlaFizyka);                                                                                                                 
                                                                                                                                                                                                          
  const float cenaDlaInformatyka (11);                                                                                                                                                                     
  const KanapkaWypasiona kanapkaInformatyczna (liczbaPlastrowOgorka, wagaMielonki, liczbaPlastrowSera, gruboscPlastru, cenaDlaInformatyka);                                                                
                                                                                                                                                                                                                       
  const float cenaDlaProfesora (10.5);                                                                                                                                                                                 
  const KanapkaWypasiona kanapkaProfesorska (liczbaPlastrowOgorka, wagaMielonki, liczbaPlastrowSera, gruboscPlastru, cenaDlaProfesora);                                                                                
                                                                                                                                                                                                                          
  const KanapkaZSerem* degustacja1 = &kanapkaProfesorska;
  const KanapkaZMielonka* degustacja2 = &kanapkaInformatyczna;
  
 
    Menu klubPodWarunkiem;
  klubPodWarunkiem.dodaj(kanapkaFizyczna);
  klubPodWarunkiem.dodaj(kanapkaDoktorancka);
  klubPodWarunkiem.dodaj(kanapkaStudencka);
  klubPodWarunkiem.dodaj(*degustacja1);
  klubPodWarunkiem.dodaj(*degustacja2);

 
  std::cout<<"\n\n";  
  klubPodWarunkiem.wypiszNajdrozszaKanapke();
  std::cout<<"\n\n";
  klubPodWarunkiem.drukuj();
  
}
/*
 
Kroje kromke
klade ogorka
 
Kroje kromke
klade mielonke
 
Kroje kromke
klade ser
 
Kroje kromke
klade ogorka
klade ser
klade mielonke
 
Kroje kromke
klade ogorka
klade ser
klade mielonke
 
 
-----$ $ $   NAJDROZSZA   $ $ $-----
Kanapka wypasiona               11 PLN
        (ogorek: 2 szt.,
        mielonka: 161.11 g.,
        ser: 2 x 0.496843 mm.)
-----$ $ $   NAJDROZSZA   $ $ $-----
 
 
     __________BAR__________
     ---------P O D---------
     \\\\\\\warunkiem///////
 
Kanapka z serem zoltym          2.4 PLN
        (2 x 0.496843 mm.)
 
..............................
 
Kanapka z mielonka              2 PLN
        (161.11 g.)
 
..............................
 
Kanapka z ogorkiem              1.33 PLN
        (szt. 2)
 
..............................
 
Kanapka wypasiona               10.5 PLN
        (ogorek: 2 szt.,
        mielonka: 161.11 g.,
        ser: 2 x 0.496843 mm.)
 
..............................
 
Kanapka wypasiona               11 PLN
        (ogorek: 2 szt.,
        mielonka: 161.11 g.,
        ser: 2 x 0.496843 mm.)
 
..............................
 
 
*/