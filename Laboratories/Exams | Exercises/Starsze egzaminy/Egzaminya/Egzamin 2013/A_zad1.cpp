#include <iostream>
#include <set>
#include <vector>
using namespace std;

class T{
public:
    T(int t=0):var(t){ cout << "T, "; }
    struct op{
        bool operator()(/*const T& a, const T& b*/){
            return true;
        }
    };
private:
    int var;
};

int main()
{
	set<T, T::op> s(/*10*/);		// 1        s(10) nie mo¿e byc, nie ma takiego konstruktora set
	vector<T> v;					// 2        nie dziala konstruktor ustalamy rodzaj vektora
	v.reserve(10);					// 3        nie uruchamiaja sie konstruktory, przydziela sie tylko pamiec			// 2
    std::cout << "\n4: ";
	T t[10];						// 4		10 konstruktorów tylko tu
}
