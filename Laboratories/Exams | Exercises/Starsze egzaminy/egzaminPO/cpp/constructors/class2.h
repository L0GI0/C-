/*
 * class2.h
 *
 *  Created on: Jan 28, 2011
 *      Author: olivia
 */

#ifndef CLASS2_H_
#define CLASS2_H_

#include <iostream>
#include "class1.h"

class Test2: public Test1 {
public:
	Test2() {
		std::cout << "Dziala konstruktor klasy Test2" << std::endl;
	}
	~Test2() {
		std::cout << "Dziala destruktor klasy Test2" << std::endl;
	}
};

#endif /* CLASS2_H_ */
