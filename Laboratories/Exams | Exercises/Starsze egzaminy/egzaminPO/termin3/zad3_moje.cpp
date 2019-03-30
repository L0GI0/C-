#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T = int>
struct box {
	public:
		T x;
		
		box() {}
		box( const box& );

		T& operator=(const T &dana );
		operator T() { cout << "Op T() x= "<<x<< "" << endl; return x;}
};

template <typename T>
box<T>::box( const box<T>& wzor ) 
{
	cout << "Kop" << endl;
	x = wzor.x;
}

template <typename T>
T& box<T>::operator=(const T &dana) {
	cout << "Op= " << endl; 
	x=dana;
	cout << " x= " << x << "" << endl;
	return x;
}

template <typename T, int SIZE=2>
class CArray {
	public:
		T *tab;
		int rozmiar;
		CArray();
		CArray(const CArray &wzor) {
			rozmiar = wzor.rozmiar;
			tab=new T[SIZE];
			for(int i=0; i<rozmiar; i++) {
				tab[i]=wzor.tab[i];
			}
		}
		
		~CArray() { delete [] tab; }
		T& operator[](int idx) {return tab[idx];};
		T operator[](int idx) const {cout << "Op[] c " << tab[idx] <<endl; return tab[idx];};
};

template <typename T, int SIZE>
CArray<T, SIZE>::CArray() : rozmiar(SIZE) {
cout << "Konst domn CA" << endl;
	tab = new T[SIZE];
}

int main()
{
	CArray< box< >, 2 > a;
	double d = a[0] = a[1] = 1;

	
	cout << "--------------" << endl;
	const CArray< box< int > > b = a;
	cout << "--------------" << endl;
	b[1] = 2;
	
	cout << b.tab[1];

	//cout << "d = " << d << "\ta[0] = " << a[0] << "\ta[1] = " 	<< a[1] << endl;*/
	//cout << "b[0] = " << b[0] << "\tb[1] = " << b[1];
	
	return 0;
}