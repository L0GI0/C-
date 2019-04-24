#pragma once 

#include <iostream>
#include <string>




class Wrapper{
	public:
		virtual std::string print(){}; 
		void print(std::ostream & o);
		virtual ~Wrapper(){}
	private:
};

class IntWrapper : public Wrapper{
	public:
		std::string print(); 
		IntWrapper(int i):_i(i){}
		~IntWrapper(){}
	private:
		int _i;
};

class FloatWrapper: public Wrapper{
	public:
		std::string print();
		FloatWrapper(float f):_f(f){}
		~FloatWrapper(){}
	private:
		float _f;
};

class StringWrapper: public Wrapper{
	public:
		std::string print();
		StringWrapper(std::string s):_s(s){}
		~StringWrapper(){}
	private:
		std::string _s;
};

class PVec{
	public:
		PVec & push_back(Wrapper * o);
		friend std::ostream & operator<<(std::ostream & o, const PVec & a);
		void operator<<(Wrapper * o);
		Wrapper & operator[](int i)const;
		unsigned int getSize()const{
			return _size;
		}
		~PVec(){}
	private:
		Wrapper **A;
		unsigned int _size;
};