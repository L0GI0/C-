#include <iostream>

using namespace std;

class A {
	public:
	A() : opis("domn") {cout << "Konstr domniemany" << endl; }
	A(const A& obj) { cout << "Konstr kopiujacy" << endl; }
	string opis;
};

A funkcja(A obj) {
	cout << "funkcja" << endl;
	return obj;
}

int main() {
	A obj_main;
	A obj2 = funkcja(obj_main);
	return 0;
}