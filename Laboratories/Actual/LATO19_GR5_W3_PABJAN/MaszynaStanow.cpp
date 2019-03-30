#include "MaszynaStanow.h"


void MaszynaStanow::operator +=(Stan * tA){

	if(_size < 9)
	_states[_size++] = tA;
}

void MaszynaStanow::start(){

	std::cout << "Rozpoczynamy dzialanie maszyny stanow!" << std::endl;


}

std::ostream & operator<<(std::ostream &o, const MaszynaStanow & tP){

	for(int i = 0; i < tP._size; i++){
		if(tP._current == i){
			o << ">" << tP._states[i]->nazwa() <<  "< ";
		}
		else{
		o << tP._states[i]->nazwa() << " ";
			}
	}
	return o;
}