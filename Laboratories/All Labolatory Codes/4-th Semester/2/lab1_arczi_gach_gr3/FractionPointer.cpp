#include "FractionPointer.h"
#include "Fraction.h"

FractionPointer::FractionPointer(Fraction* ptr) : _ptr(ptr) {
	_ptr->IncrementCounter();
}

FractionPointer::FractionPointer(const FractionPointer& source) : _ptr(source._ptr) {
	_ptr->IncrementCounter();
}

FractionPointer::~FractionPointer() {
	_ptr->DecrementCounter();
	if(_ptr->GetPtrCounter() == 0) delete _ptr;
}

Fraction* FractionPointer::operator-> () {
	return _ptr;
}

FractionPointer& FractionPointer::operator* () {
	return *this;
}

FractionPointer& FractionPointer::operator*= (const FractionPointer& ptrGiven) {
	_ptr->Multiply(*(ptrGiven._ptr));
	return *this;
}

Fraction FractionPointer::operator* (FractionPointer& right) {
	Fraction newFraction(_ptr->GetNom() * right->GetNom(), _ptr->GetDenom() * right->GetDenom());
	return newFraction;
}

FractionPointer& FractionPointer::operator= (const FractionPointer& right) {
	_ptr->DecrementCounter();
	if(_ptr->GetPtrCounter() == 0) delete _ptr;
	_ptr = right._ptr;
	_ptr->IncrementCounter();
	return *this;
}

Fraction& FractionPointer::operator->* (Fraction& (*f)(Fraction*)) {
	return f(_ptr);
}

ostream& operator<< (ostream& os, const FractionPointer& fraction) {
	return os << fraction.GetPtr()->GetNom() << "/" << fraction.GetPtr()->GetDenom();
}