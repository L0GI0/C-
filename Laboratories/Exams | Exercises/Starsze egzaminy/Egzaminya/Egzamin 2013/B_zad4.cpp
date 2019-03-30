#include <iostream>
#include <list>

class el_type{
public:
    //el_type(int t=0):var(t){}
    bool operator()(int& a) const{
        a=0;
    }
private:
    int var;
};

template <typename T, typename U> void fill_n(T& coll, int size, U fun){

}

template <typename T> std::ostream& print_stl_container(T beg, T ende){
    std::ostream out;
    for(;beg!=ende; beg++)
        out << *beg << ",";
    //out << *beg++ << std::endl;
    return out;
}
using std::list;
/* uzupelnj 1 */

int main()
{
	list<el_type> v;

	std::ostream o = std::cout;
	fill_n(v/* uzupelnij 2 */, 10, el_type() ); // uzupelnia zerami
	#define begin begin()
	#define end end()
	o << print_stl_container(v.begin, v.end);

	// wynik programu: 0,0,0,0,0,0,0,0,0,0
}

//coœ tu musi byc zdupcone z tym zadaniem :/
