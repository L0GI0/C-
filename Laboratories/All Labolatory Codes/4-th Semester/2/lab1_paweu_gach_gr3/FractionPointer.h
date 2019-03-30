#ifndef FRACTIONPOINTER_H
#define FRACTIONPOINTER_H

class FractionPointer
{
public:
	FractionPointer(Fraction* frac);
	FractionPointer(const FractionPointer& pointer);
	Fraction* operator -> () { return _frac; }
	Fraction& operator ->* (Fraction::Action) const { return *_frac; }
	Fraction& operator * () { return *_frac; } 
	Fraction operator * (const FractionPointer& pointer);
	FractionPointer& operator *= (const Fraction& frac);
	FractionPointer& operator = (FractionPointer& pointer);
	~FractionPointer();
private:
	Fraction* _frac;
	mutable int _counter;
};

#endif