#include <iostream>

class Bit{
public:
	operator bool(){
		return true;
	}
	Bit(unsigned char * Byte, int bitNumber);
	void operator=(bool value);
	friend std::ostream &operator<<(std::ostream &o, const Bit &bitReference);
private:
	int bit;
	unsigned char * byte;
};
