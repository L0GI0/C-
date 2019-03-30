//czy kod jest poprawny:
#include <iostream>

int main()
{
    struct A { virtual void a(){} static void s(){} }; // 1
    struct B : public A { virtual void b(){} }; // 2
    const A a; /*tego nie bylo:*/const/*tu const albo brak ref*/ A & b = B(); // 3
    //a.a(); // 4
    a.s(); // 5
    //a.b(); // 6
    //b.a(); // 7
    b.s(); // 8
    //b.b(); // 9
}
