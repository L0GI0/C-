#include <iostream>

//uzupe³nij
template <typename T=double>struct box{
    box(T t=0):a(t){}
    operator T()const{
        return a;
    }
//uzupe³nij
    T a;
};
    int main(){
    box<> b1 = 3.14;
    box<unsigned> b2 = 13;
    double d = b1;
    unsigned u = b2;
    std::cout << b1 << ", " << b2 << ", " << d << ", " << u;
}
