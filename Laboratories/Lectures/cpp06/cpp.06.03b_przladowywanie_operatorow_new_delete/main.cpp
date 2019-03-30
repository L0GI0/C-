/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 10-11-2011
/// \brief Classes: Overloaded operator new and delete
/////////////////////////////////////////////////////////////////////////

#include <iostream>

/////////////////////////////////////////////////////////
class NewTest{
public:
	static void* operator new (size_t size)
	{
		std::cout << "In overloaded new.\n";
		void *p = malloc(size);
		
		return p;
	}
	static void operator delete (void *p)
	{
		std::cout << "In overloaded delete.\n";		
		free(p);
	}

	static void* operator new[] (size_t size)
	{
		std::cout << "In overloaded new[].\n";
		void *p = malloc(size);
		
		return p;
	}
	static void operator delete[] (void *p)
	{
		std::cout << "In overloaded delete[].\n";		
		free(p);
	}
	
};

/////////////////////////////////////////////////////////
int main()
{
	NewTest *ptr = new NewTest;
	delete ptr;

	NewTest *ptr_tab = new NewTest[10];
	delete [] ptr_tab;
	
}
