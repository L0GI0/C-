#include <iostream>

using namespace std;

class Baza1 {
public:
    Baza1(){ cout << "Baza1" << endl; }
};
class Baza2 {
public:
    Baza2(){ cout << "Baza2" << endl; }
};
class Baza3 {
public:
    Baza3(){ cout << "Baza3" << endl; }
};
class X: public Baza1, public Baza2 {
public:
    X(){ cout << "X" << endl; }
};
class Y: private Baza3, public X, public Baza1 {
public:
    Y(){ cout << "Y" << endl; }
};
int main()
{Y a;}
