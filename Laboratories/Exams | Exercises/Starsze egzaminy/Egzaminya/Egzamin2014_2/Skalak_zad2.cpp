#include <iostream>


unsigned fun1()
{ static unsigned char _fun; return _fun--;}

unsigned char& fun2()
{ static unsigned char _fun; return ++_fun;}

struct A
{
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
/*1*/ std::cout << A()._fun << "\n"; // wynik 0, _fun zainicjalizowana przy tworzeniu obiektu
/*2*/ std::cout << A().fun2()._fun<<”\n”; // nie zadziala
/*3*/ std::cout << B().fun1()._fun << "\n"; // wynik 0
/*4*/ std::cout << (fun1(), fun1(), fun1()) << "\n"; // 254
/*5*/ std::cout << (fun2() = 16, fun2()=32, fun2() = 64) << "\n"; // 64
return 0;
}

