#include <iostream>
#include <set>
#include <iterator>
template <typename T> class cmp{
public:
    enum sort {norm, rev};
    cmp(sort a=norm):activ(a){}
    bool operator()(const T& a, const T& b)const{
        return activ==norm ? a<b : b<a;
    }
private:
    sort activ;
};

typedef std::set<std::string, cmp<std::string> > set_of_strings;

void printf(const set_of_strings& sos){
    std::copy(sos.begin(), sos.end(), std::ostream_iterator<std::string>(std::cout, ","));
    std::cout << std::endl;
}

/* UZUPE£NIJ 1 */
int main() {
    set_of_strings norm; //Kontener STL set
    norm.insert("Ela"); norm.insert("Ola"); norm.insert("Ala");
    printf(norm);
    //norm zawiera: Ala, Ela, Ola
    set_of_strings rev(norm.begin(), norm.end(), cmp<std::string>::rev);
    printf(rev);
    //rev zawiera: Ola,Ela,Ala
    rev=norm; //norm i rev zawieraj¹: Ala,Ela,Ola;
    printf(rev);
}
