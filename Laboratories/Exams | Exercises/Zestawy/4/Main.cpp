#include <iostream>


typedef void(*FunPointer)(void);

class wektor {
int  *x, *y, *z;
public:

void operator+=(const wektor &w)
{
	*x+=*w.x;
	*y+=*w.y;
	*z+=*w.z;
};

friend std::ostream& operator<<( std::ostream &out, const wektor &w);
};

std::ostream& operator<<( std::ostream &out, const wektor &w)
{
	return out <<"[ " << *w.x << " " << *w.y << " " << *w.z << "]";
};    


int main()
{

	int a = 5;
	int* const pointer = &a;

	FunPointer *tab[7];




	return 0;
}