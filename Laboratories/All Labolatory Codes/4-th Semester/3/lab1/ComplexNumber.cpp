#include "ComplexNumber.h"



ComplexNumber::ComplexNumber (const ComplexNumber & ComNum)
{
	this->Re= ComNum.Re;
	this->Im= ComNum.Im;
}
		
	//	ComplexNumber::ComplexNumber & operator + (const ComplexNumber & Sample)
		//ComplexNumber::ComplexNumber & operator * (int c, int y)
	//	ComplexNumber::ComplexNumber & opertaor * (const ComplexNumber & Sample)
	//	ComplexNumber::ComplexNumber & operator = (const ComplexNumber & Sample)
	//	ComplexNumber::ComplexNumber & opertor *= (const ComplexNumber & Sample)

std::ostream & operator << (std::ostream & s, const ComplexNumber & Sample)
{
	s<<Sample.Re<<" + i"<<Sample.Im;
	return s;				
}