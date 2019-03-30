#include <iostream>





/*
class X
	{
public:
virtual f(void);
f1(void);
}, x, *px;

class Y: public X
{
public:
virtual f(void);
f1(void);
}; y, *py;

*/




template <typename T>
class wektor {
	public:
T  *x, *y, *z;

wektor():x(new T),y(new T),z(new T)
{
	*x = 1;
	*y = 2;
	*z = 3;
};
wektor(const wektor &obj);

void print()
{
	std::cout << *x << *y << *z;
};

wektor& add(const wektor &w1);


};

template <typename T>
wektor<T>::wektor(const wektor<T> &obj)
{
	x = new T;
	y = new T;
	z = new T;
	*x = *obj.x;
	*y = *obj.y;
	*z = *obj.z;
};

template <typename T>
wektor<T>& wektor<T>::add(const wektor<T> &w1)
{

	*x += *w1.x;
	*y += *w1.y;
	*z += *w1.z;

	return *this;

};



int main()
{
	wektor<int> we1;
	wektor<int> we2;
	wektor<int> we3 = we1.add(we2);
	we3.print();


	return 0;
}