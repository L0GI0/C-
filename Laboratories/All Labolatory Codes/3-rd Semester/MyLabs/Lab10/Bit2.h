#include <iostream>

class Bit{
public:
	Bit(unsigned char *bPointer, int bitNumber);
	void operator=(bool value);
private:
	int bit;
	unsigned char * bytePointer;
}