#include "numbers.h"


polish::polish(const int givenNum) : _val(givenNum) { 
	// 
}

float operator, (const polish a, const int b) {
	int d = 10;
	while(b > d)
		d*=10;
	float x = a.GetNum() + (float)b/d;
	return x;
}

