#include <iostream>
 
class l_zes {
int  re, im ;
public:
	l_zes():re(0), im(0){};
	l_zes(int i):im(i){};
	l_zes(const l_zes &l):re(l.re), im(l.im){};



};

class A{
public:
	~A(){std::cout << "A" << std::endl;};
};
class B{public:
	~B(){std::cout << "B" << std::endl;};
};
class C{public:
	~C(){std::cout << "C" << std::endl;};
};
class X:public A, public B{public:
	~X(){std::cout << "X" << std::endl;};
};
class Y:public X, public C{public:
	~Y(){std::cout << "Y" << std::endl;};
};


int main()
{

int a=3; 
l_zes z1;

Y obj;


	return 0;
}