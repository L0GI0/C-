#include <iostream>

using namespace std;
class B{
    public:
    B(int y){};
    private:
    int _y;
};
class A: public B{
public:
    A(int x=0):B(x){}
private:
    int _x;
};

int main()
    {
        A *ptr=new A[10];
    }
