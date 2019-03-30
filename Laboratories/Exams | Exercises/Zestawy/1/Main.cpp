#include <iostream>
#include <stdlib.h>

class wektor
{
public:
	float element;
	wektor(float &x1, float &y1, float &z1):x(&x1), y(&y1), z(&z1){};
	wektor(const wektor &wektor1):x(wektor1.x),y(wektor1.y), z(wektor1.z){};
	void dodaj(const wektor &w)
	{
		std::cout << *x << "aa";
		*x+=*w.x;
		std::cout << *x << "aa";
		*y+=*w.y;
		*z+=*w.z;
	};

	void print()
	{
		std::cout << *x << " " <<*y <<" "<< *z ;
	};
private:
	float *x;
	float *y;
	float *z;
};

class X
{
	int i;
public:
	static int j;
	static int f(int j);
};

int X::f(int j ) {return 2*j;}

int* fun(int)
{
	int *a;

	return a;
}

int main()
{
	
float wektor::*pointer = &wektor::element;

 int* (*ptr[7])(int);
 	ptr[0] = fun;
 	float a = 3;
 	float b = 4;
 	float c = 5;

 	wektor w1(a,b,c);
 	wektor w2(w1);
 	w2.dodaj(w1);
 	w2.print();

	return 0;
}