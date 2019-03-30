//uzup #1
#include <iostream>

using namespace std;

struct Para {
	double a, b; //*KONIECZNIE* musi byc agregat, chyba, ze doktor dopuszcza proponowana skladnie c++0x.
	/**
	 * zwracam srednia arytmetyczna. Mozna bylo roznice, 1. wyraz, 2. wyraz...
	 * cokolwiek, byle uzasadnic.
	 */
	operator double() {return (a+b)/2;}
};

std::ostream& operator<<(std::ostream& out, const Para& src) {
	return (out << "(" << src.a << "; " << src.b << ")");
}
//\uzup #1

int main(int argc, char** argv) { 
	Para p[2] = {{21,7}};
	std::cout<<"Para t[0] = " << p[0] << "\n";
	std::cout<<"Para t[1] = " << p[1] << "\n";
	double d[2] = { p[0], p[1] };
	std::cout<<"d = " << d[0] << ", " << d[1] << "\n";
}
