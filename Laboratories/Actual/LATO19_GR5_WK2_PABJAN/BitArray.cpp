#include "BitArray.h"


BitArray::BitArray(int n, bool value):_bitn(n){
	_size = (n / 8) + 1;

	_Bits = new unsigned char [_size];

	if(value){
		for(int i = 0; i < _size; i++){
			_Bits[i] = 0xFF;
			// std::cout << "val" << std::endl;
		}
	}
	else {
		for(int i = 0; i < _size; i++){
			_Bits[i] = 0;
		}
	}
}


Bit BitArray::operator[](int i)const{

	int index = (i / 8);
	return Bit(_Bits[index], i); 
}


void Bit::operator=(bool value){
	if(value){
	_Byte |= (1 <<  _bit);
	}	 
	else{
		_Byte &= ~(1 << _bit);
	}
}


Bit::Bit(unsigned char & B, int bit):_Byte(B){
	_bit = bit % 8;
}


void BitArray::print()const{
	for(int i = _bitn; i >= 0; i--){
		// static_cast<bool>( data & (1 << npos) )
		std::cout << ((_Bits[ int(i / 8)] & (1 << (i % 8))) == 1 ? "1" : "0"); 
		if( (i % 8) == 0){
			std::cout << " <-" << i << " ";
		}
			// 000 <-32 00000000 <-24 00000000 <-16 00000000 <-8 00001000 <-0 
	}
	std::cout << std::endl;
}


void BitArray::operator=(const BitArray & tc){
	
	for(int i = 0; i < _size; i++){
		_Bits[i] = tc._Bits[i];
	}

}


// Bit::~Bit(){
// 	delete [] _Byte;
// }

BitArray::~BitArray(){
	delete [] _Bits;
}