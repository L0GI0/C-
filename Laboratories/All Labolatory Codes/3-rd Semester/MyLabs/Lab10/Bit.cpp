#include "Bit.h"
#include "math.h"


std::ostream &operator<<(std::ostream &o, const Bit &bitReference){
	return o << "overloaded print works" << std::endl;
}

Bit::Bit(unsigned char * byteReference, int bitNumber): byte(byteReference), bit(bitNumber){};
void Bit::operator=(bool sign){
	int value = pow(2, bit);
	if (sign == false){
		*byte = (*byte) & value;
	}
	else{
		*byte = (*byte) | value;
	}
}

