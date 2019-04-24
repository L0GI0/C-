#pragma once 
#include <iostream>

class ObiektMiotajacy; 

class Type{
	public:
		virtual void PrzedstawSie() const = 0;
		virtual std::string getName() const = 0;
		~Type();
};	

class ExceptType1: public Type{
	public:
		void PrzedstawSie() const;
		std::string getName() const;
};

class ExceptType2: public Type{
	public:
		void PrzedstawSie() const;
		std::string getName() const;
};

class ExceptType3: public Type{
	public:
		void PrzedstawSie() const;
		std::string getName() const;
};

class ExceptType4: virtual public Type, public ExceptType2{
	public:
		ExceptType4(){}
		void PrzedstawSie() const;
		std::string getName() const;
		ExceptType4(ObiektMiotajacy * o): m_o(o){}
	private:
		ObiektMiotajacy * m_o;
};
