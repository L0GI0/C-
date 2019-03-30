#include "BitArray.h"



void BitArray::print() const{
	for(int i=bSize - 1; i >= 0; i--){
            std::cout << ((bArray[i / 8] >> i % 8)%2);
            if(!(i % 8))
                std::cout << " <-" << i << " ";
	}
}

BitArray::BitArray(int bitSize, bool sign):bSize(bitSize){
	int size = (bitSize / 8) + 1;
	bArray = new unsigned char[size];	
	if (sign == true){
		for(int i = 0;i < size; i++){
			bArray[i] = 255;
		}
	}
	else for(int i = 0;i < size; i++)
			bArray[i] = 0;
}

Bit BitArray::operator[](int bitNumber) const{
	int index = bitNumber / 8;
	int bit = bitNumber % 8;
	return Bit(&bArray[index], bit); 
}
