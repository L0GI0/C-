#include <iostream>

class A {
public:
A() {std::cout << "A" << std::endl;}
};
class B : public A {
public:
B() {std::cout << "B" << std::endl;}
};
class X : public B, public A {
public:
X() {std::cout << "X" << std::endl;}
}; 

int main() {
X x;
}
