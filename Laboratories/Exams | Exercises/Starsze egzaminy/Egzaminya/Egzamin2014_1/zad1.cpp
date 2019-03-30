#include "zad1a.h"

class Int_t;
typedef std::vector<Int_t> vec_type;
//typedef std::vector<int> vec_type;
//typedef std::vector<double> vec_type;
//typedef std::list<Int_t> vec_type;
//typedef std::list<int> vec_type;
//typedef std::list<double> vec_type;
//typedef std::deque<Int_t> vec_type;
int main(){

    vec_type v;
    oop::fill(v,vec_type::__TYPE__(1),vec_type::__TYPE__(10));
    oop::print_stl(v,"v: ",",");
    oop::for_each(v.begin(),v.end(),oop::op<vec_type::__TYPE__>(10));
    oop::print_stl(v,"v: ",",");

}
/*Wynik
v= 1,2,3,4,5,6,7,8,9
v= 11,12,13,14,15,16,17,18,19
*/

