#include <iostream>

using namespace std;

class Konw {
	public:
		Konw(int liczba=0) : x(liczba) {};
		friend void pokaz(const Konw&);
	private:
		int x;
};

void pokaz(const Konw& x) {
	cout << x.x << endl;
}

int main() {
	Konw a;
	Konw b(7);
	Konw c(5.5);
	Konw d = 7.5;
	
	pokaz(a);
	pokaz(b);
	pokaz(c);
	pokaz(d);
	pokaz('c');
	pokaz(8.99);

	return 0;
}