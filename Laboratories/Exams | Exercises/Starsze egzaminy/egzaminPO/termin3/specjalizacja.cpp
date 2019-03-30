#include <iostream>
#include <string>

using namespace std;

template <typename T>
class box;

template <typename T>
ostream& operator<<(ostream& str, box<T> const & bx);

template <typename T>
class box {
	public:
		box() : x(0) { cout << "Konstr domn" << endl;};
		box(T a) : x(a) {cout << "Konstr 2, a= " << a << endl; };
		
		box operator+(box& b);
		//template <typename TT>
		friend ostream& operator<<<T>(ostream& str, box<T> const& bx);
		
		T getX() const {return this->x;};
		
	private:
		T x;

};
template <typename T>
box<T> box<T>::operator+(box<T>& b)
{return (this->x + b.getX()); }

template <typename T>
ostream& operator<<(ostream& str,  box<T> const& bx) {
	str << bx.getX();
	return str;
}

int main() {
	box<int> pud1;
	box<int> pud2(5);
	//box<int> pud3 = (pud1+pud2);
	
	string a="mama ";
	string b="tata";
	operator<<(cout, pud1+pud2);
}