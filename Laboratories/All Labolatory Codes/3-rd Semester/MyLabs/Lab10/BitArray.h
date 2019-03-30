#include "Bit.h"

class BitArray{
public:
	BitArray(int bitNumber, bool sign = false);
	Bit operator[](int bitNumber) const;
	void print() const;
private:
	unsigned char *bArray;
	int bSize;
};
