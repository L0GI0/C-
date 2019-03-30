#ifndef _STL_PRINT_H_
#define _STL_PRINT_H_

#include <iostream>

namespace OOP
{
	template <typename T>
		inline void stl_print_el(const T& coll, const char* optcstr = "", const char* del = " ")
	{
		typename T::const_iterator pos;

		std::cout << optcstr;

		for (pos = coll.begin(); pos != coll.end(); ++pos)
		{
				std::cout << *pos << del;
		}
	  
		std::cout << std::endl;
	}

	template <typename T>
		inline void stl_print_el_rev(const T& coll, const char* optcstr = "", const char* del = " ")
	{
		typename T::const_reverse_iterator pos;

		std::cout << optcstr;

		for (pos = coll.rbegin(); pos != coll.rend(); ++pos)
		{
				std::cout << *pos << del;
		}
	  
		std::cout << std::endl;
	}

}//namespace
#endif //_STL_PRINT_H_
