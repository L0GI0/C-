#include <functional>
#include <iterator>
#include <iostream>
#include <vector>
#include <algorithm>

//#define PIEPRZYC_BINDERY

#ifdef PIEPRZYC_BINDERY
	struct less_than_three{bool operator()(int i){return i < 3;}};
#endif

using namespace std;

int main() {
	vector<int> v;
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(v));
	cout << "mam tablice:\n";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

	#ifdef PIEPRZYC_BINDERY
		cout << "\ncount_if less_than_three():" << count_if(v.begin(), v.end(), less_than_three());
	#else
		cout << "\ncount_if bind2nd(less<int>(), 3): " << count_if(v.begin(), v.end(), bind2nd(less<int>(), 3)); // less(obj, 3)
	#endif

	cout << "\ncount_if bind1st(less<int>(), 3): " << count_if(v.begin(), v.end(), bind1st(less<int>(), 3)); // less(3, obj)
	cout << "\ndistance find_if bind2nd(greater<int>(), 3): " << distance(v.begin(), find_if(v.begin(), v.end(), bind2nd(greater<int>(), 3))) << endl;
}

