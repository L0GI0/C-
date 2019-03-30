#include <iostream>
using namespace std;
class A {
public:
    A(){ cout << "A ";}
};
class B : public A {
public:
    B(){ cout << "B ";}
};
class X : public A, virtual public B {
public:
    X(){ cout << "X ";}
};

int main() {
    try {
        X x; throw x;
    } catch(X&) {}
}
