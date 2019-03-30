#include <iostream>

unsigned char fun1()
{ static unsigned char _fun; return ++_fun;}

unsigned fun2()
{ static unsigned char _fun; return _fun--;}

struct A
{
    A() :  _fun(1.987) { ::fun2(); }
    A& fun1() { _fun= ::fun2(); return *this; }
    int fun2() {return _fun =10;}
    int _fun;
};

struct B: public A
{
   B() { _fun -= .987;}
   int fun2(){ return _fun=1313;}
};

int main()
{                                                         //output w/g Mindura (brak b³êdów w kodzie):
  /*1*/ std::cout << A()._fun << "\n"; // 1

  /*3*/ std::cout << B().fun1()._fun << "\n";
  /*4*/ std::cout << (fun1()<<fun2()) << "\n";  // >500 coœ, przesuniêcie bitowe
  /*5*/ std::cout << (fun2() + fun1()) << "\n"; // ok~253 suma
  return 0;
}
