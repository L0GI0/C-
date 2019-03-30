#include"Formula.h"
#include"MathFun.h"
#include<iostream>

void PrintFormula(int nOperations, int opNo, operationsTab_t operationsTab, dataTab_t dataTab, resultTab_t resultTab)
{
  using std::cout;
  using std::endl;
  
  int prim1 = -1;
  int prim2 = -1;
  int index1 = opNo*2;
  int index2 = opNo*2+1;
  for (int i = 0; i < nOperations; ++i) {
    if (resultTab[i] == dataTab[index1])
      prim1 = i;

    if (resultTab[i] == dataTab[index2])
      prim2 = i;
  }

  if (prim1 < 0 )
    cout <<*dataTab[index1];
  else {
    cout <<"(";
    PrintFormula(nOperations, prim1, operationsTab, dataTab, resultTab);
    cout <<")";
  }
  
  if (operationsTab[opNo] == Add)
    cout<<"+";
  
  if (operationsTab[opNo] == Multiply)
    cout<<"*";

  if (prim2 < 0 )
    cout <<*dataTab[index2];
  else {
    cout <<"(";
    PrintFormula(nOperations, prim2, operationsTab, dataTab, resultTab);
    cout <<")";
  }
}

void PrintFormula(int nOperations, operationsTab_t operationsTab, dataTab_t dataTab, resultTab_t resultTab)
{
  PrintFormula(nOperations, nOperations-1, operationsTab, dataTab, resultTab);
}
