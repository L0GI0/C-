#include <iostream>

unsigned char fun1()
{ static unsigned char _fun; return _fun--;}

unsigned char& fun2()
{ static unsigned char _fun; return ++_fun;}

struct A{
    A(){fun2();}
    A& fun1(){ _fun=0; return *this;}
    virtual void fun2(){_fun =0;}
    int _fun;
};

struct B: public A
{
    void fun2(){_fun=5;}
};

int main()
{
  /*1*/ std::cout << A()._fun << "\n";                                  //wyswietla 0
//  /*2*/ std::cout << A().fun2()._fun << "\n";                           //blad bo funkcja jest void i nic nie zwraca ;)
  /*3*/ std::cout << B().fun1()._fun << "\n";                           //wyswietla 0
  /*4*/ std::cout << (fun1(), fun1(), fun1()) << "\n";                  //wyswietla char "■" co w incie jest wartoscia 254
  /*5*/ std::cout << (fun2() = 16, fun2()=32, fun2() = 64) << "\n";     //wypisuje char wartosci 64 a wyglada to tak:
  return 0;
}
