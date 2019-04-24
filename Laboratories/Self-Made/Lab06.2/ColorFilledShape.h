#pragma once 

#include "Shape.h"

class ColorFilledShape : public ColoredShape{

	public:

		void draw() override{
			m_shape->draw();
			std:: cout << "-- with " << color[m_fillColor] << " filling" << std::endl;		
		}

		
		
		ColorFilledShape(Shape * tA):ColoredShape(tA, Colors::WHITE, Colors::BLACK){

		}	

		void setColor(Colors c){
			m_fillColor = c; 
		}

	private:
		
};