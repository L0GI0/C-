#pragma once 

#include <iostream>



class Malenstwo;





class MemoryManagment{

	public:	

		friend class Malenstwo;

	private:
		static int _occupied;
		static Malenstwo * _memory;
	};




class Malenstwo{


	public:

		void * operator new[](size_t size);
		void * operator new(size_t size);
		Malenstwo(int value);
		Malenstwo();
		int & wartosc(){
			return _value;
		}

	private:
		int _value;
};


