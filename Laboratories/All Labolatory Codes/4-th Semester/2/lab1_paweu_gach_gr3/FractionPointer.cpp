#include "Main.h"

FractionPointer::FractionPointer(Fraction* frac): _frac(frac), _counter(1) {

}

FractionPointer::FractionPointer(const FractionPointer& pointer) {
	if (this == &pointer)
		return;
	this->_frac = pointer._frac;
	pointer._counter++;
	// if (!pointer._counter)
	// 	delete pointer._frac;
	this->_counter++;
}

Fraction FractionPointer::operator * (const FractionPointer& pointer) {
	Fraction tmp(this->_frac->GetNom()*pointer._frac->GetNom(), this->_frac->GetDen()*pointer._frac->GetDen());
	return tmp;
}

FractionPointer& FractionPointer::operator *= (const Fraction& frac) {
	this->_frac->SetNom() *= frac.GetNom();
	this->_frac->SetDen() *= frac.GetDen();
	return *this;
}

FractionPointer& FractionPointer::operator = (FractionPointer& pointer) {
	if (this == &pointer)
		return *this;
	this->_counter--;
	if (!_counter)
		delete _frac;
	_frac = pointer._frac;
	_counter++;
	return *this;
}

FractionPointer::~FractionPointer() {
	if (_counter == 1)
	delete _frac;
}