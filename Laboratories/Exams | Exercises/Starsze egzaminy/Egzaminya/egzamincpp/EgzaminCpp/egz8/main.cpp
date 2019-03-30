#include <iostream>
#include <cstring>
#include <list>
using namespace std;

class Person {
	public:
	Person (string f="", string n="")
		: m_fn(f), m_ln(n) {}
	string firstname () const {return m_fn;}
	string lastname () const {return m_ln;}
	private:
	string m_fn;
	string m_ln;
};
// uzupeÂ ł niĂŚ
int main ()
{
	list <Person> coll;
	//uzupeÂ ł niĂŚ
	Person osoba ("Jan", "Kowalski");
	//dalej nie jestem pewien co do kodu:
	//uzupeÂ ł niĂŚ
}

