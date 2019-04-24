
#include "Component.h"

std::string Component::getName(){
	return _name;
}


int Component::getIndentation(){
	return _indentation;
}


Component * Component::operator[](int i){
	return _components[i];

}



int Component::getSize(){
	return _size;
}
