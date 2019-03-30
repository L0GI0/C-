#pragma once 

#include <iostream>


class Bit{

	public:
		// ~Bit();
		Bit(unsigned char & B, int bit);
		void operator=(bool value);
		operator bool(){
			return static_cast<bool>( _Byte & (1 << (char) _bit) );
		}
	private:
		unsigned char & _Byte;
		int _bit;

};


class BitArray{
	public:
		~BitArray();
		BitArray(int n, bool value = false);
		Bit operator[](int i)const;
		void print()const;
		void operator=(const BitArray & tc);
	private:
		unsigned char * _Bits;
		int _size;
		int _bitn;
};

