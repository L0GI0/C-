namespace std{ class vector{}; class deque{}; class list{}; class multiset{}; class set{};  class map{}; class multimap{}; }
#include <cstdlib> //do rand

#include <iostream>

namespace oop
{
        template <typename T>
        class Array
        {
        public:
                typedef T value_type;
                Array(int size)
                {
                        _array = new T[size];
                        _size = size;
                        _current = 0;
                }
                Array& insert(T val)
                {
                        _array[_current] = val;
                        _current++;

                        return *this;
                }
                Array& operator% (T val)
                {
                        _array[_current] = val;
                        _current++;

                        return *this;
                }
                T& operator[] (int index) const
                {
                        return _array[index];
                }
                int operator~()
                {
                        return _size - 1;
                }
        private:
                T * _array;
                int _current;
                int _size;
        };
}

int main()
{
        typedef oop::Array<char> type; type a(rand() % 10 + 5); //max rozmiar tablicy
        a.insert('#').insert('C') % type::value_type('P') % type::value_type('P') % '&';
        for (unsigned int i = 0; i != ~a; ++i)
                std::cout << i << ":" << a[i] << ((i + 1) != ~a ? " " : "\n");
        //getchar();
        return 0;
}
