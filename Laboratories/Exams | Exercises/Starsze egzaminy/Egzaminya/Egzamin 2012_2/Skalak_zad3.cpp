
//3. Uzupełnij kod w podanym miejscu (liczba linii jest dowolna) tak, aby w kontenerach znajdowały sie podane w komentarzach wartości z zachowaniem kolejności. Odpowiedź uzasadnij.

#include <set>
#include <iostream>

template<typename T>
struct cmp
{
	enum sort{norm, rev};
	cmp(sort type1=norm):type(type1){};
	bool operator()(const T &a, const T &b)const
	{
		return type==norm ? a<b : b<a;
	};

	sort type;

};


typedef std::set<std::string, cmp<std::string>> set_of_strings;

/* UZUPEŁNIJ 1 */
int main() {
    set_of_strings norm; //Kontener STL set
    norm.insert("Ela"); norm.insert("Ola"); norm.insert("Ala");
    //norm zawiera: Ala, Ela, Ola
    set_of_strings rev(norm.begin(), norm.end(), cmp<std::string>::rev);
    //rev zawiera: Ola,Ela,Ala
    rev=norm; //norm i rev zawierają: Ala,Ela,Ola;
}