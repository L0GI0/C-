#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;
// uzupe�nij
struct A {
    A(){}
    void operator()(int& a){
        static int i=0;
        a=--i;
    }
// uzupe�nij
};
int main() {
    list<int> coll(11);
    for_each( coll.begin(), coll.end(), A()/*uzupe�nij*/ );
    copy( coll.begin(), coll.end(), ostream_iterator<int>(cout, ";")/*uzupe�nij*/ );
    return 0;
}
//to ma si� wy�wietli�:
// -1; -2; -3; -4; -5; -6; -7; -8; -9; -10; -11;
