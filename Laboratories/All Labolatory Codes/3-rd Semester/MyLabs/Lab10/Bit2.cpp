#include "Bit2.h"	
#include "math.h"

Bit::Bit(unsigned char *bPointer, int bitNumber):bit(bitNumber),bytePointer(bPointer){};

void Bit::operator=(bool value){
	if(value == false)
		(*bytePointer) &= ~(1 << bit)
	else
		(*bytePointer) |= (1 << bit);  
}
