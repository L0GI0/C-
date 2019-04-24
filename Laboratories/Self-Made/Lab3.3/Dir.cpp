#include "Dir.h"


void Dir::operator +=(Component * tA){
	
	tA->setIndentation(_indentation + 2);  
	_components[_size++] = tA;

}


std::ostream & operator<<(std::ostream & o, const Dir & tP){
		
		Component tmp = tP;
		
		
		
		return o;
	
}
