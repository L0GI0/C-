#pragma once 

#include <iostream>
#include <string>


class Component{

	public:

		Component(std::string name):_name(name), _indentation(0), _size(0){
			_components = new Component * [10];
		}
		void setIndentation(int indentation){
			_indentation = indentation;
		}
		std::string getName();
		int getIndentation();
		int getSize();
		Component * operator[](int i);


	protected:

		Component ** _components;
		std::string _name;
		int _indentation;
		int _size;
};