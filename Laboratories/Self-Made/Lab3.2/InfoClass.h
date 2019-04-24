#pragma once 
#include <iostream>
#include <string>



class InfoClass{

	public:
		InfoClass(std::string name);
		virtual ~InfoClass();
		virtual std::string info()const;
		int getPCount();
		void increasePCount();
		void decreasePCount();
		void info(std::string);

	protected:
		std::string _name;
		int _pCount;
		int _num;
};


class InfoSuperClass: public InfoClass{
	public:
		InfoSuperClass(std::string name, int num):InfoClass(name), _num(num){}
		std::string info()const;			
	private:
		int _num;

}; 