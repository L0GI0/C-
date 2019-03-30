//uzup #1
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

template <typename T>
class gen {
	public:
		gen(T init) : next_(init) {}
		T operator()() {
			return next_++;
		}
	private:
		T next_;
};

//ta, mozna kompbinowac z bind* itd., ale komu by sie chcialo...
template <typename T>
class dump {
	public:
		void operator()(const T& what) {
			cout << what << "; ";
		}
};
//\uzup #1

int main(int argc, char** argv) { 
	std::list<int> col; 
	//template <class OutputIterator, class Size, class Generator> 
	//  void generate_n ( OutputIterator first, Size n, Generator gen ) 
	std::generate_n(/*uzup #2*/back_inserter(col), 9/*\uzup #2*/, gen<int>(-9));
	std::for_each(/*uzup #2*/col.begin(), col.end(), dump<int>()/*\uzup #2*/);
} 
/* 
output: 
-9; -8; -7; -6; -5; -4; -3; -2; -1; 
*/ 
