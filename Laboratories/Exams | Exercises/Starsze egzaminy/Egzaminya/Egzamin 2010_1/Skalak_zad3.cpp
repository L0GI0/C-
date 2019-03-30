#include <iostream>

using namespace std;

struct A { ~A() { cout << "~A\n"; } };
struct B { ~B() { cout << "~B\n"; } };
struct X : virtual public A, private B { ~X() { cout << "~X\n"; } };
struct Y : virtual public A, private B { ~Y() { cout << "~Y\n"; } };
struct Z : public Y, public X { Z() { cout << "Z\n"; } };
int main() {
Z test;
return 0;
}


//konstruktory wywoluja sie w odpowiedniej kolejnosci jak zostalo zadeklarowane dziedziczenie, 
//destruktory wywaluje sie w odwrtotnej kolejnosci do konstruktorow


//konst A B Y B X Z
//Z -X -B-Y-B-A