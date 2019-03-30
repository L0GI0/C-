#include <iostream>

using namespace std;


template <typename T=int>
class box
{
    public:
        box(){}
        box(T val) : v(val){}
        operator T()
        {
            return v;
        }
    private:
        T v;
};

/*template<>
class box<double>
{

};*/

template<typename T, int size=2>
class array
{
public:
    array()
    {
        tab=new T[size];
    }
    ~array()
    {
        delete [] tab;
    }
    T operator [](int i) const
    {
        return tab[i];
    }
    T& operator [](int i)
    {
        return tab[i];
    }
private:
    T *tab;
};



int main()
{
    array<box<>, 2> a;
    double i = a[0] = a[1] = 1; //a=={1,1}
    const array<box<int> > b = a;
    b[0] = b[1] = 2;    //b=={1,1}
    cout << "a == {" << a[0] << "," << a[1] << "}" << endl;
    cout << "b == {" << b[0] << "," << b[1] << "}" << endl;
}
