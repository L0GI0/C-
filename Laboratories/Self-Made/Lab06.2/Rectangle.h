#pragma once 

#include "Shape.h"

class Square : public Shape{

	public:
		
		Square(float a):m_a(a){}
		
		void draw() override{
			std::cout << "Rectangle with sides " << m_a << ", " << m_a << std::endl;
		}

		void scale(double x) override{
			m_a *= x;
		}
		
	protected:
		float m_a;
};


class Rectangle : public Square{

	public:
		
		Rectangle(float a):Square(a), m_b(a){
			
		};

		Rectangle(float a, float b):Square(a), m_b(b){

		}

		void operator*=(double x){
			m_a *= x;
			m_b *= x;
		}

		void scale(double x) override{
			m_a *= x;
			m_b *= x;
		}
		
		void draw() override{
			std::cout << "Rectangle with sides " << m_a << ", " << m_b << std::endl;
		}

	private:
		float m_b;
};