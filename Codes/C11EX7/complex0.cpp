#include "complex0.h"
#include <iostream>


Complex::Complex(){
	A = 0;
	B = 0;
}

Complex::Complex(float a, float b){
	A = a;
	B = b;
}

Complex Complex::operator+(const Complex obj){
	Complex sum;
	sum.A = this.A + obj.A;
	sum.B = this.B + obj.B;
	return sum;

}
