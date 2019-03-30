#include <iostream>


template<int N>
struct sum_1_n
{
    static const int n=N+sum_1_n<N-1>::n;
};

template<>
struct sum_1_n<1>
{
    static const int n=1;
};




int main(){
    int tab[sum_1_n<10>::n];    //ilosc elementow tabeli policzona podczas kompilacji wynosi 55
    std::cout << sizeof(tab)/sizeof(int);
}
