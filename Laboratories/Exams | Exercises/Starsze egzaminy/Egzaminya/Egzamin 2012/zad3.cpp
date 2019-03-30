#include <iostream>

using namespace std;

template <typename T, int size=2> class array{
private:
    T var[size];
public:
    array(){}
    T operator[](int i) const{
        if(i<size)
            return var[i];
    }
    T& operator[](int i){
        if(i<size)
            return var[i];
    }
};

template <typename T=int> class box{
private:
    T var;
public:
    box(T t=0):var(t){}
    operator double() const{
        return var;
    }
};

int main(){
    array<box<>, 2> a;
    double i = a[0] = a[1] = 1; //a=={1,1}
    const array<box<int> > b = a;
    b[0] = b[1] = 2;    //b=={1,1}
    cout << "a == {" << a[0] << "," << a[1] << "}" << endl;
    cout << "b == {" << b[0] << "," << b[1] << "}" << endl;
}
