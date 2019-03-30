#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>

using std::list;

struct A
{
    A(){};
    void operator()(int &a)
    {
        static int s=-1;
        a=s;
        --s;
    }
} lol;


int main()
{
    list<int> coll(11);
    for_each(coll.begin(), coll.end(), lol);
    copy(coll.begin(),coll.end(), std::ostream_iterator<int>(std::cout, ";"));
    return 0;
}
