#ifndef EGZA_H
#define EGZA_H
#include <iostream>
#include <cstring>
#include <vector>
#include <list>
#include <deque>
#define __TYPE__ value_type

class Int_t{
public:
    Int_t(int t=0):var(t){}
    operator int() const{
        return var;
    }
private:
    int var;
};

namespace oop{

    template <typename T> class op{
    public:
        op(T t=0):var(t){}
        void operator()(T& sum){
            sum = sum + var;
        }
    private:
        T var;
    };

    template <typename T> void fill(T& coll, const typename T::value_type& beg, const typename T::value_type& end){
        for(int i=beg; i!=end; i++)
            coll.push_back(i);
    }

    template <typename T> void print_stl(const T& coll, const std::string pref, const std::string suf){
        typename T::const_iterator iter;
        std::cout << pref;
        for(iter=coll.begin(); iter!=--coll.end(); iter++)
            std::cout << *iter << suf;
        std::cout << *iter++ << std::endl;
    }

    template <typename T, typename U> void for_each(T beg, T end, U op){
        for(;beg!=end;beg++)
            op(*beg);
    }
}

#endif // EGZA_H
