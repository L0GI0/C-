#include <iostream>

template <class T>
    class X;

template <class T>
    void fun(T);

void fun(int);

template <class T>
    class X
    {
        friend void fun(T);
    };

template <class T>
    void fun(T a) { std::cout << a;}

void fun(int) {}

void test()
{
    X<char> xc;
    fun(1.0); // fun<double>(double)
    fun('x'); // fun(char) !!!
}

int main() {
	test();
}