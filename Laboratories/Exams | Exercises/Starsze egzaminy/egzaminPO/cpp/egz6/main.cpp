#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

// uzupełnij 

using namespace std;

struct A { 
    void operator()(int& i) {
      static int r = -1;
      i = r--;
      //cout << i << " ";
    }
}; 


int main() { 
    list<int> coll(11); 
    for_each(coll.begin(), coll.end(), A()); 
    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout,"; ")); 
    return 0; 
} 

//to ma się wyświetlić: 
// -1; -2; -3; -4; -5; -6; -7; -8; -9; -10; -11;