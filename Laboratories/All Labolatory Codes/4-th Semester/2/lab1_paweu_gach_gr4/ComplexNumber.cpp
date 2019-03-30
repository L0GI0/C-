#include "ComplexNumber.h"

using namespace std;

ostream& operator << (ostream& output, const ComplexNumber& number) {
	return output << number.GetRe() << " + " << number.GetIm() << "i";
}

ComplexNumber::ComplexNumber(int number): _re(number), _im(0) {

}

ComplexNumber::ComplexNumber(int re, int im): _re(re), _im(im) {

}

ComplexNumber ComplexNumber::operator + (const ComplexNumber& secondnumber) const {
	ComplexNumber tmp(_re+secondnumber._re, _im+secondnumber._im);
	return tmp;
}

ComplexNumber ComplexNumber::operator - (const ComplexNumber& secondnumber) const {
	ComplexNumber tmp(_re-secondnumber._re, _im-secondnumber._im);
	return tmp;
}

ComplexNumber ComplexNumber::operator * (const ComplexNumber& secondnumber) const {
	ComplexNumber tmp(_re*secondnumber._re - _im*secondnumber._im, _re*secondnumber._im + _im*secondnumber._re);
	return tmp;
}

ComplexNumber& ComplexNumber::operator *= (int number) {
	_re *= number;
	_im *= number;
	return *this;
}

ComplexNumber& ComplexNumber::operator ++ () {
	_re--;
	return *this;
}

ComplexNumber ComplexNumber::operator ++ (int) {
	ComplexNumber tmp(*this);
	_re--;
	return tmp;
}

int& ComplexNumber::operator [] (int number) {
	if (number)
		return _im;
	return _re;
}

bool ComplexNumber::operator > (const ComplexNumber& secondnumber) const {
	return (GetAbsValue() > secondnumber.GetAbsValue());
}

const ComplexNumber ComplexNumber::i(0, 1);
const int ComplexNumber::IMAGINARY=1;
const int ComplexNumber::REAL=0;

ComplexNumber operator + (int realnumber, const ComplexNumber& number) {
	ComplexNumber tmp(realnumber+number.GetRe(), number.GetIm());
	return tmp;
}

ComplexNumber operator - (int realnumber, const ComplexNumber& number) {
	ComplexNumber tmp(realnumber-number.GetRe(), -number.GetIm());
	return tmp;
}
