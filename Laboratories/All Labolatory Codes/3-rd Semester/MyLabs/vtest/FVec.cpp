#include "FVec.h"

FVec::FVec(int length):_first(0),_last(length){
	_vector = new double[length];
}

FVec::~FVec(){
	delete[] _vector;
}

FVec::FVec(int begin, int end):_first(begin),_last(end){
	_vector = new double[end - begin];
}

FVec::FVec(const FVec &toCopy):_first(toCopy._first),_last(toCopy._last){
_vector = new double(_last - _first);
for(int i = _first; i < _last; i++){
	_vector[i] = toCopy._vector[i];
}	
}



double & FVec::operator[](int i){
	return _vector[i - _first];
}

FVec & FVec::operator=(FVec & other){
	if(this != &other){
	delete[] _vector;
	_vector = other._vector;
	_first = other._first;
	_last = other._last;
	for (int i = _first; i < _last; i++){
		_vector[i] = other._vector[i]; //(*this[i] = other_vector[i] would work as well, cos of = operator ?)
	}
}
	return (*this);
};

FVec & FVec::set(int index, double value){
	(*this)[index] = value;
	return (*this);
}

void FVec::print(const char * message)const{
	std::cout << message << "idx[" << _first << "," << _last << "] ";
	for(int i = _first; i < _last; i++){
		std::cout << _vector[i - _first] << " ";
	}
	std::cout << std::endl;
}

int FVec::begin(){
	return _first;
};

int FVec::end(){
	return _last;
}



