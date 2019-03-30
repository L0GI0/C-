#include <iostream>

using namespace std;

template <typename T = double>
struct box{
	box(T val) : a(val) {};
	operator T() {return static_cast<T>(a);}
	//operator T() {return (T)a;}
	T a;
};
int main(){
	box<> b1 = 3.14;
	box<unsigned> b2 = 13;
	double d = b1;
	unsigned u = b2;
	std::cout << b1 << " " << b2 << " " << d << " " << u;
}

