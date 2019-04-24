#include "PVec.h"
#include "cstring"



PVec  & PVec::push_back(Wrapper  * o){
	Wrapper **tmp = new Wrapper*[_size];
	unsigned int i;
	memcpy(tmp, o, sizeof(Wrapper *) * _size);
	for(i = 0; i < _size; i++){
		tmp[i] = A[i];
		delete A[i];
	}
	A = new Wrapper * [++_size];
	for(i = 0; i < _size; i++){
		A[i] = tmp[i];
	}
		A[_size - 1] = o;
		return *this;
}


std::ostream & operator <<(std::ostream & o, const PVec & a){
	for(unsigned int i = 0; i < a.getSize(); i++){
		o << a[i].print();
	}
	return o;
}


std::string IntWrapper::print(){
	return std::to_string(_i);
} 

std::string FloatWrapper::print(){
	return std::to_string(_f);
} 

std::string StringWrapper::print(){
	return _s;
} 

void PVec::operator<<(Wrapper *  o){
	Wrapper **tmp = new Wrapper * [_size];
	memcpy(tmp, o, sizeof(Wrapper *) * _size);
	unsigned int i;
	for(i = 0; i < _size; i++){
		tmp[i] = A[i];
		delete A[i];
	}
	A = new Wrapper * [++_size];
	for(i = 0; i < _size; i++){
		A[i] = tmp[i];
	}
		A[_size - 1] = o;
}

void Wrapper::print(std::ostream & o){
	o << this->print();
}

Wrapper & PVec::operator[](int i)const{
	return *A[i];
}
