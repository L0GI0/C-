#include <iostream>

template <typename T=double>class box{
public:
    box(T t=T()):var(t){}
    void print(){
        std::cout << "Wypisuje obiekt T: " << var << std::endl;
    }
private:
    T var;
};

template <> class box<char>{
public:
    explicit box(char c=char()):var(c){}
    void print(){
        std::cout << "Wypisuje obiekt char: " << static_cast<int>(var) << std::endl;
    }
private:
    char var;
};
/* uzupe³nij */

box<> a = 2.2;
box<int> b = 3;
box<char> c = box<char>('A');
//box<char> d = 'A';
//odkomentowanie tej linijki powoduje blad kompilacji

int main()
{
	a.print();		// Wypisuje obiekt T: 2.2
	b.print();		// Wypisuje obiekt T: 3
	c.print();		// Wypisuje obiekt char: 65
}
