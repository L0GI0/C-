#include <iostream>		//
#include <algorithm>		//
#include <list>			//
#include <iterator>		//
using namespace std;		//
int liczba = -1;			//

struct A {
	void operator()(int & x) { x = liczba; --liczba; }					//
};
void f(const int & x)
{
	cout << x << "; ";

}
int main()
{
	list<int> coll(11);
	for_each(coll.begin(), coll.end(), A());
	//cout << "\n";
	for_each(coll.begin(),coll.end(),f);		//dodatkowo wypisuje
	cout << "\n";							/**/
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, "; "));		/**/
	cout << "\n";
	return 0;
}
