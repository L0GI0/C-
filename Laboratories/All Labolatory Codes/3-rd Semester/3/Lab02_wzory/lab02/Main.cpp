// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Pliku Main.cpp, nie wolno modyfikowac. Pozostale pliki
// mozna modyfikowac dowolnie.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Formula. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// /home/dokt/dog/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_02

#include"Formula.h"
#include"MathFun.h"
#include<iostream>

void FirstFormula ();
void SecondFormula ();

int main ()
{
  FirstFormula();
  SecondFormula();

  return 0;
}

void FirstFormula ()
{
  // formula: (a+b)*(c+d)+e
  using std::cout;
  using std::endl;

  const int nOperations = 4;
  const float a = 1, b = 2, c = 3, d = 4, e = 5;
  float sum1, sum2, product, result;
  operationsTab_t operationsTab;
  dataTab_t dataTab;
  resultTab_t resultTab;
  InitFormula(nOperations, operationsTab, dataTab, resultTab);

  // (a+b)
  operationsTab[0]=Add;
  dataTab[0]=&a;
  dataTab[0+1]=&b;
  resultTab[0]=&sum1;
  // (c+d)
  operationsTab[1]=Add;
  dataTab[2]=&c;
  dataTab[2+1]=&d;
  resultTab[1]=&sum2;
  // (a+b)*(c+d)
  operationsTab[2]=Multiply;
  dataTab[4]=&sum1;
  dataTab[4+1]=&sum2;
  resultTab[2]=&product;
  // (a+b)*(c+d)+e
  operationsTab[3]=Add;
  dataTab[6]=&product;
  dataTab[6+1]=&e;
  resultTab[3]=&result;

  PrintFormula(nOperations, operationsTab, dataTab, resultTab);
  cout<<"="<<CalcFormula(nOperations, operationsTab, dataTab, resultTab)<<endl;
  DeinitFormula(operationsTab, dataTab, resultTab);
}

void SecondFormula ()
{
  // formula: ((a+b)*(a+c)+(e*d))*c

  using std::cout;
  using std::endl;

  const int nOperations = 6;
  const float a = 1, b = 2, c = 3, d = 4, e = 5;
  float sum1, sum2, product1, product2, sum3, result;
  operationsTab_t operationsTab;
  dataTab_t dataTab;
  resultTab_t resultTab;
  InitFormula(nOperations, operationsTab, dataTab, resultTab);

  // (a+b)
  int step = 0;
  operationsTab[step]=Add;
  dataTab[step*2]=&a;
  dataTab[step*2+1]=&b;
  resultTab[step]=&sum1;
  // (a+c)
  ++step;
  operationsTab[step]=Add;
  dataTab[step*2]=&a;
  dataTab[step*2+1]=&c;
  resultTab[step]=&sum2;
  // (a+b)*(a+c)
  ++step;
  operationsTab[step]=Multiply;
  dataTab[step*2]=&sum1;
  dataTab[step*2+1]=&sum2;
  resultTab[step]=&product1;
  // (e*d)
  ++step;
  operationsTab[step]=Multiply;
  dataTab[step*2]=&e;
  dataTab[step*2+1]=&d;
  resultTab[step]=&product2;
  // (a+b)*(a+c)+(e*d)
  ++step;
  operationsTab[step]=Add;
  dataTab[step*2]=&product1;
  dataTab[step*2+1]=&product2;
  resultTab[step]=&sum3;
  // ((a+b)*(a+c)+(e*d))*c
  ++step;
  operationsTab[step]=Multiply;
  dataTab[step*2]=&sum3;
  dataTab[step*2+1]=&c;
  resultTab[step]=&result;
  
  PrintFormula(nOperations, operationsTab, dataTab, resultTab);
  cout<<"=";
  cout<<CalcFormula(nOperations, operationsTab, dataTab, resultTab)<<endl;
  DeinitFormula(operationsTab, dataTab, resultTab);
}

/* wynik programu:
((1+2)*(3+4))+5=26
(((1+2)*(1+3))+(5*4))*3=96
*/
