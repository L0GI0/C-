#include <iostream>
#include <string>

using namespace std;

class box {
		string op;
	public:
		box(string a="DOMYSLNY") : op(a) {};
		box(box& wzor);
		
		string opis() {return op;};

};

box::box(box& wzor) {
	op = wzor.op;
	cout << "konst kopiujacy\n";
}

box fun(void) {
	box lokalny("local");
	
	cout << "zdefiniowalem w funkcji obiekt lokalny, jego opis: " << lokalny.opis() << "\n";
	
	return lokalny;
}

int main() {
	cout << "Main i obiekt chwilowy zwrocony z fun ma opis:\n"<< (fun()).opis() << "\n";
}
