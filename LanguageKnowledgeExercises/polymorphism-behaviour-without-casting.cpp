#include <stdio.h>
#include <iostream>

using namespace std;

class A{
	public:

	void f1(){
		cout << "f1 A\n";
	}

	virtual void f2(){
		cout << "f2 A\n";
	}

	void f3(){
		f2();
	}
};

class B: public A{
	public:
	void f1(){
		cout << "f1 B\n";
	}

	void f2(){
		cout << "f2 B\n";
	}
};

class C: public B{
	public:
	void f1(){
		cout << "f1 C\n";
	}

	void f2(){
		cout << "f2 C\n";
	}
};


int main(){
	C/*B,A>*/*a = new C();
	a->f1();
	a->f2();
	a->f3();
	return 0;
}