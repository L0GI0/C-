/* Uzupełnij */
#include <iostream>

using std::cout;
using std::endl;

template <typename T = int>
class box
{
public:
	box(T val=0):value(val){};
	operator T()
	{
		return value;
	};
private:
	T value;
};

template <typename T, int S = 2>
class array
{
public:
	array(){};
	T& operator[](int pos)
	{
		return arr[pos];
	};

	T operator[](int pos)const
	{
		return arr[pos];
	};
private:
	T arr[S];
};

int main()
{
array<box<>, 2 > a;
double i = a[0] = a[1] = 1; // a == {1,1}
const array<box<int> > b = a;
b[0] = b[1] = 2; // b == {1,1}
    cout << "a == {" << a[0] << "," << a[1] << "}" << endl;
    cout << "b == {" << b[0] << "," << b[1] << "}" << endl;
}