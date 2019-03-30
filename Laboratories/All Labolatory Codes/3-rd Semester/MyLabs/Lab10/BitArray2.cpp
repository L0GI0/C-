#include "BitArray2.h"

BitArray::BitArray(int bits, bool sign){
	int length = (bits/8) + 1;
	bitArray = new unsigned char[length];
	if(sign == true)
		for(int i = 0; i < length; i++){
			bitArray[i] = 255;
		}

Bit BitArray::operator=(int bit){
	int byteNumber = (bit / 8);
	int bitNumber = bit % 8;
	return Bit(&bitArray[byteNumber], bitNumber);
}


	
