#include <iostream>

using namespace std;

/*class Baza1 {
public:
    Baza1(){ cout << "Baza1" << endl; }
    ~Baza1(){ cout << "desBaza1" << endl; }
};
class Baza2 {
public:
    Baza2(){ cout << "Baza2" << endl; }
    ~Baza2(){ cout << "desBaza2" << endl; }
};
class Baza3 {
public:
    Baza3(){ cout << "Baza3" << endl; }
    ~Baza3(){ cout << "desBaza3" << endl; }
};
class X: public Baza1, public Baza2 {
public:
    X(){ cout << "X" << endl; }
    ~X(){ cout << "desX" << endl; }
};
class Y: private Baza3, public X, public Baza1 {
public:
    Y(){ cout << "Y" << endl; }
    ~Y(){ cout << "desY" << endl; }
};
int main()
{Y a;}
//Baza3, Baza1, Baza2, X, Baza1, Y*/

template <typename T=double>
struct box{
    box(T _a) : a(_a)
    {
        //this->a=a;
    }
operator T()
{
    return a;
}
T a;
};
int main(){
box<> b1 = 3.14;
box<unsigned> b2 = 13;
double d = b1;
unsigned u = b2;
}
