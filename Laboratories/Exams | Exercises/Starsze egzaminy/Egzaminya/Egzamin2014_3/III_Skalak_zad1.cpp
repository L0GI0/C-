/* uzupełnij */
#include <iostream>

namespace oop
{
	template<typename T>
	class Array
	{
	public:
		T operator
	};


}


namespace std{ class vector{}; class deque{}; class list{}; class multiset{}; class set{}; class map{}; class
multimap{}; }
#include <cstdlib> //do rand
int main()
{
typedef oop::Array<char> type; type a(rand() %10 +5); //max rozmiar tablicy
a.insert(‘#’).insert(‘C’) % type::value_type(‘P’) % type::value_type(‘P’) % ‘&’;
for(unsigned int i=0; i != ~a; ++i)
std::cout << i << “:” << a[i] << ( (i +1) != ~a ? “ “ : “\n”);
return 0;
}
//output: 0:# 1:C 2:P 3:P 4:&