#pragma once 

#include "Component.h"


#include <iostream>
#include <string>

class Dir : public Component{

	public:

		Dir(std::string name):Component(name){}

		void operator +=(Component * tA);

		friend std::ostream & operator<<(std::ostream & o,const Dir & tP);
	private:

};