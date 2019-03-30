//2. Uzupełnij kod w podanym miejscu (liczba linii jest dowolna) tak, aby wypisywał dane podane w komentarzu:
#include <iostream>
#include <sstream>
namespace test
{


template<typename T = double >
struct conv
{
	conv(){};

	static T from(const std::string &str)
	{
		T tmp;
		std::istringstream is(str);
        is>>tmp;
        return tmp;
	}; 

	static std::string to(const T &val)
	{
		std::ostringstream os;
		os <<"<"<<val<<">";
		return os.str();

	};
};



}
/* UZUPELNIJ 1 */
int main() {
    std::string pi =
        test::conv<>::to(test::conv<int>::from("-1") + test::conv<>::from("4.14159"));
    std::cout << pi;
}
//Wynik działania programu (tylko linia poniżej):
//<3.14159>