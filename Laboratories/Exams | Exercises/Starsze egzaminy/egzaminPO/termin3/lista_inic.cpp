#include <iostream>

using namespace std;

struct box {
	box(int a) : x(a) {cout << "konstr box\n";};
	int x;
};

struct telefon {
	telefon(int a) : nr(a) { cout << "konstr tel\n";};
	int nr;
};

struct klasa {
	klasa(int a, int b) :  pudelko(b), T(a) { cout << "konstr klasy\n"; };
	telefon T;
	box pudelko;
};

int main() {
	klasa Przyklad(4,5);
	
	return 0;
}