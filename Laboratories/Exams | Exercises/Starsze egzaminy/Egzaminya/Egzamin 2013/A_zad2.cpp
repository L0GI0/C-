#include <iostream>

int main()
{
	struct A { virtual  void a(){} static void s(){} }; 	// 1;   jak sa definicje to dziala jak deklaracje to nie dziala
	struct B : public A { virtual void b(){} }; 		// 2;
	const A a; /*inaczej nie dziala*/
	const A & b = B();				// 3    musi byc const
//	a.a();						// 4    nie const
	a.s();						// 5        dziala
	//a.b();						// 6    nie const
	//b.a();						// 7    nie const
	b.s();						// 8        dziala jesli b powstanie
	//b.b();						// 9    nie const


}
