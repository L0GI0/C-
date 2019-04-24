#pragma once 

#include "Shape.h"

class Circle: public Shape{

	public:

		Circle(float r):m_r(r){
			std::cout << "Circle with radius " << m_r << std::endl; 
		}

		void draw() override{

		}

		void scale(double x) override{
			m_r *= x;
		}

	private:
		float m_r;
};