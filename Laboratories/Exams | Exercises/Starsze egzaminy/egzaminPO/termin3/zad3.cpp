#include <iostream>
#include <typeinfo>
using namespace std;

template< typename T = int >
struct box
{
	T m_val;

	operator T() { return m_val; }

	box( ) : m_val( 0 ) { cout << "Konst domn box " << typeid(T).name() <<"\n"; }
	box( const box& );
	~box( ) {}

	box& operator= ( const box& );
	box& operator= ( const T& );
};

template< typename T >
box< T >::box( const box< T >& _Param ) 
{
	cout << "Konst kop box " <<typeid(T).name() <<"\n"; 
	m_val = _Param.m_val;
}

template< typename T >
box< T >& box< T >::operator= ( const box< T >& _Param )
{
	m_val = _Param.m_val;
	return *this;
}

template< typename T >
box< T >& box< T >::operator= ( const T& _Param )
{
	m_val = _Param;
	return *this;
}

template< typename T, int SIZE = 2 >
struct CArray
{
	T* m_box;
	int rozmiar;

	CArray( ) : rozmiar( SIZE ) { cout << "Konst domn CA\n"; m_box = new T[rozmiar]; }
	CArray( const CArray& arr )	
	{	
		cout << "Konst kop CA\n"; 
		rozmiar = arr.rozmiar;
		m_box = new T[rozmiar];
	
		for( int i = 0; i < rozmiar; ++i )
			m_box[i] = arr.m_box[i];
	}
	~CArray( ) { delete [] m_box; }

	T& operator[]( int idx ) { return m_box[idx]; }
	T operator[]( int idx ) const { return m_box[idx]; }

};

int main()
{
	CArray< box< >, 2 > a;
	double d = a[0] = a[1] = 1;

	const CArray< box< int > > b = a;
	b[0] = b[1] = 2;

	cout << "d = " << d << "\ta[0] = " << a[0] << "\ta[1] = " 	<< a[1] << endl;
	cout << "b[0] = " << b[0] << "\tb[1] = " << b[1];
	
	return 0;
}