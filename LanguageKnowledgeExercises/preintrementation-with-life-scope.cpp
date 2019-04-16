#include<stdio.h>
#include<iostream>

int a=13;

void fun()
{
  ++a;
}

void wypisz()
{
  std::cout<<a<<"\n";
  fun();
}


int main()
{ 
  int a=7;
  {
    ++a;
    fun();
    wypisz();
    std::cout<<a<<"\n";
  }
  std::cout<<a<<"\n";
}