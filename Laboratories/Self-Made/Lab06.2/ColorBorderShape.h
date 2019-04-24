#pragma once 

#include "Shape.h"


class ColorBorderShape: public ColoredShape{

	public:

	ColorBorderShape(Shape *  tA):ColoredShape(tA, Colors::WHITE, Colors::BLACK){

	}

	void draw() override{
		m_shape->draw();
		std:: cout << "-- with " << color[m_borderColor] << " border" << std::endl;		
	}

	
	void setColor(Colors c){
		m_borderColor = c; 
	}

	private:
		
};