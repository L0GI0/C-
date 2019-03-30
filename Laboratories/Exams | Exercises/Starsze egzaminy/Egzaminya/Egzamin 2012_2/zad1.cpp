#include <iostream>
//ABAX
class A /* UZUPELNIJ 1 */ { public: A(){std::cout << "A";} };
class B : public A/* UZUPELNIJ 2 */ { public: B(){std::cout << "B";} };;
class X : public B, public A/* UZUPELNIJ 3 */ { public: X(){std::cout << "X";} };

int main() {
    try{
        X x;
        throw x;
    }
    catch(X&){}
}
