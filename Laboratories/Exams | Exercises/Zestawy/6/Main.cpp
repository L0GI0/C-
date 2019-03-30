#include <iostream>

class wektor {
int  *x, *y, *z;
public:
	wektor(float i):x(new int),y(new int),z(new int)
	{
		*x=i;
		*y=i;
		*z=i;
	};
	wektor():x(new int),y(new int),z(new int)
	{
		*x=1;
		*y=2;
		*z=3;
	};
wektor operator+(const wektor &w)
{
	*x+= *w.x;
	*y+= *w.y;
	*z+= *w.z;
	return *this;

};

void print()const
{
	std::cout << *x << *y << *z << std::endl;
};

friend wektor operator+(const wektor &w1, const wektor &w2);

};


wektor operator+(const wektor &w1, const wektor &w2)
{
	wektor tym;
	*tym.x= *w1.x +*w2.x;
	*tym.y= *w1.y +*w2.y;
	*tym.z= *w1.z +*w2.z;
	return tym;

};

/*class wektor
{
public:
	wektor dodaj(wektor&){
		return *this;
	}

};

*/
int main()
{
	const char a = 'a';
	const char* const pointer = &a;

	//	wektor (wektor::*pointer)(wektor&);
	wektor w1;
	w1.print();
	wektor w2;
	w2.print();
	w1 = w2+2;
	w1.print();
	w1 = 2+w2;
	w1.print();
	w1 = 2.2 + w1;
	w1.print();
	

	return 0;
}