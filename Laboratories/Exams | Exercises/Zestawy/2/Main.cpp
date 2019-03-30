#include <iostream>
#include <cstring>

#define osoba string
class string
{
	int roz ;
char *wsk;
  // długość napisu

public:
osoba(char n[]);
osoba(const osoba &os):roz(os.roz), wsk(new char[strlen(os.wsk)])
{
	for(int i=0; i< roz; i++)
	{
		wsk[i] = os.wsk[i];
	}

};

void print()const
{
	for(int i=0; i< roz; i++)
	{
		std::cout << wsk[i] ;
	}
};

};

string::osoba(char *n):roz(strlen(n)),wsk(new char[strlen(n)]){
	for(int i=0; i< roz; i++)
	{
		wsk[i] = n[i];
	}
};


char* fun(int, char)
{
	char a = 'a';

	return &a;
}


class ab
{
public:
	ab(int z, int x,int c, int v):aa(z),dd(x),bb(c),cc(v){};
	int aa;
	int dd;
protected:
	int bb;
private:
	int cc;
};

class b: private ab
{
public:
	b(int z, int x,int c, int v,int ddd):ab(z,x,c,v),d(ddd){};
	using ab::aa;
protected:
	using ab::bb;
private:
	int d;
};

int main()
{
	int a = 1;
	int *ptr = &a;
	int *tab[5];
	tab[0] = ptr;

	char* (*ptr1)(int,char) = fun;

	char *t = "abbc";
	string abc(t);
	abc.print();
	ab obj(1,2,3,4);
	b obj2(1,2,3,4,5);
	obj2.aa = 5;
	return 0;
}