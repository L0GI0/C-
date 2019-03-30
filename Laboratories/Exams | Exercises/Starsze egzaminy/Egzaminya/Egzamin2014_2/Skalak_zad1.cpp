template<typename T>
struct is_ptr
{

	const static bool value = false;
};

template<typename T>
struct is_ptr<T*>
{
	const static bool value = true;
};


template<typename T>
struct is_const
{
	const static bool value = false;
};

template<typename T>
struct is_const<const T*>
{
	const static bool value = true;
};

template<typename T>
struct remove_ptr
{
	typedef T value_type;
};

template<typename T>
struct remove_ptr<T*>
{
	typedef T value_type;
};

template<typename T>
struct remove_const
{
	typedef T value_type;
};


template<typename T>
struct remove_const<T*>
{
	typedef T value_type;
};

template<bool val> struct assertt
{};

template<>
struct assertt<false>
{
	static const bool value = 0;
};

template<>
struct assertt<true>
{
	static const bool value = 1;
};

#define ASSERT(T) assertt<T>::value

struct A{};

int main()
{
ASSERT(is_ptr<A*>::value); //ok bo w () jest A*
ASSERT(is_const<const A*>::value); // ok bo w () jest const
ASSERT(is_ptr<A>::value); //źle bo w () jest A
ASSERT(is_const<A*>::value); //źle bo w () jest A*
ASSERT(is_const<A>::value); //źle bo w () jest A
ASSERT(is_ptr<remove_ptr<A*>::value_type*>::value); // dobrze bo w () jest A*
ASSERT(is_ptr<remove_ptr<A*>::value_type>::value); // źle bo w () jest A
ASSERT(is_const<const remove_const<const A>::value_type>::value); // tu chyba było jakoś inaczej, w każdym
//razie miało działać :D
ASSERT(is_const< remove_const<A>::value_type>::value); // miało nie działać
return 0;
}