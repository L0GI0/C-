#include <iostream>

template <int a=0, int b=0, int c=0> struct sum{
    static const int n = a + b + c;
} ;

template <int N=0> struct product_1_n{
    static const int n = N + product_1_n<N-1>::n;
};

template <> struct product_1_n<1>{
    static const int n = 1;
};
/* uzupe³nij */

int main()
{
	int tab[product_1_n<sum<1,2,3>::n>::n];
	std::cout << sizeof(tab)/sizeof(int);
}
