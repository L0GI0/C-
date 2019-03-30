#include <iostream>
#include "Bit2.h"
class BitArray{
public:
	BitArray(int bits, bool sign = false);
	Bit operator=(int bit);
private:
	unsigned char *_bitArray;
};