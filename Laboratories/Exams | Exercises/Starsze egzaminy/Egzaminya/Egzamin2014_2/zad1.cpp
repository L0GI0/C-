#include <iostream>
template<typename T> struct remove_ptr{
    typedef T value_type;
};
template<typename T> struct remove_ptr<T*>{
    typedef T value_type;
};
template<typename T> struct is_ptr{
    static const bool value = false;
};
template<typename T> struct is_ptr<T*>{
    static const bool value = true;
};
template<typename T> struct is_ptr<const T*>{
    static const bool value = true;
};
template<typename T> struct is_const{
    static const bool value = false;
};
template<typename T> struct is_const<const T>{
    static const bool value = true;
};
template<typename T> struct is_const<const T*>{
    static const bool value = true;
};
template<typename T> struct remove_const{
    typedef T value_type;
};
template<typename T> struct remove_const<const T>{
    typedef T value_type;
};

template <bool v> struct static_assert_test;
template<> struct static_assert_test<true>{
	enum {value = 1};
};
template<> struct static_assert_test<false>;

#define ASSERT(T) static_assert_test<T>::value

struct A {  };

int main(){
    std::cout << ASSERT(is_ptr<A*>::value); //ok bo w () jest A*
    std::cout << ASSERT(is_const<const A*>::value); // ok bo w () jest const
   // std::cout << ASSERT(is_ptr<A>::value); //Ÿle bo w () jest A

    std::cout << ASSERT(is_ptr<const A*>::value); //ok bo w () jest const A*
    //std::cout << ASSERT(is_const<A*>::value); //Ÿle bo w () jest A*
  //  std::cout << ASSERT(is_const<A>::value); //Ÿle bo w () jest A

    std::cout << ASSERT(is_ptr<remove_ptr<A*>::value_type*>::value); // dobrze bo w () jest A*
  //  std::cout << ASSERT(is_ptr<remove_ptr<A*>::value_type>::value); // Ÿle bo w () jest A

    std::cout << ASSERT(is_const<const remove_const<const A>::value_type>::value); // tu chyba by³o jakoœ inaczej, w ka¿dym razie mia³o dzia³aæ :D
   // std::cout << ASSERT(is_const< remove_const<const A>::value_type>::value); // mia³o nie dzia³aæ
    return 0;
}
