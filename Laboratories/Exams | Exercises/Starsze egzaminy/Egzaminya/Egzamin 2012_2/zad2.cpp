#include <iostream>
#include <cstring>
#include <sstream>

namespace test
{


template <typename T=double>
class conv
{
public:
    conv(){}

    static T from(const std::string &s)
    {
        T tmp;
        std::istringstream is(s);
        is>>tmp;
        return tmp;
    }

    static std::string to(const T& val)
    {
        std::ostringstream os;
        os<<"<"<<val<<">";
        return os.str();
    }
};

}
/* UZUPELNIJ 1 */
int main() {
    std::string pi =
        test::conv<>::to(test::conv<int>::from("-1") + test::conv<>::from("4.14159"));
    std::cout << pi;
}
//Wynik dzia³ania programu (tylko linia poni¿ej):
//<3.14159>


