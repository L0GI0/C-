#include <iostream>

using namespace std;

struct A {
	int x;
	
	int& operator=(int b) const { return b;}
	//void operator= (const int& b) { x=b;}
	operator int() const { return x;} 

	int& fun() {
		return x;
	}
	int fun() const {
		return x;
	}
};

int main() {
	A obj;
	
	obj.x=2;
	
	const A obj2 = obj;
	
	obj2 = 5;
	
	
	cout << obj << " " << obj2;
	
	return 0;
}