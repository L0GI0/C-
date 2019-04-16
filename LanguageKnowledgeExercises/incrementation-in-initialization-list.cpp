#include<stdio.h>
#include<iostream>

class A{
  public:
    int a;
    A(int n): a(n)
    {}
};

class B{
  public:
    int b;
    B(int &n): b(n)
    {}
};

class C: public A, public B{
  public:
    C(int n): A(n++), B(++n)
    {}
};

int main()
{ 
  int n=3;
  C c(n);
  std::cout<<c.a<<" "<<c.b<<"\n";
}
