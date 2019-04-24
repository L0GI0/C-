#pragma once 

#include <string>

enum Colors{ WHITE, BLACK, BLUE, RED, GREEN };	


class Shape{

	public:
		virtual ~Shape() = default;
		virtual void draw(){}
		virtual void scale(double ){}
		std::string color[5] = {"white", "black", "blue", "red", "green"};

	private:

};


class ColoredShape: public Shape{

	public:

	
		
	ColoredShape(Shape * tA, Colors fillColor, Colors borderColor)
	:m_shape(tA), m_fillColor(fillColor), m_borderColor(borderColor){}

	
	virtual void setColor(Colors c) = 0;

	protected:

		Shape * m_shape;
		Colors m_fillColor;
		Colors m_borderColor;
};