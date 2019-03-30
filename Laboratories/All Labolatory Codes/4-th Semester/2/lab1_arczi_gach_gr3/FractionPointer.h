#pragma once
#include <iostream>

using namespace std;

class Fraction;

class FractionPointer
{
	public:
		FractionPointer(Fraction*);
		FractionPointer(const FractionPointer&);
		~FractionPointer();
		// 
		Fraction* GetPtr() const { return _ptr; }
		// 
		Fraction* operator-> ();
		FractionPointer& operator* ();
		FractionPointer& operator*= (const FractionPointer&);
		Fraction operator* (FractionPointer&);
		FractionPointer& operator= (const FractionPointer&);
		Fraction& operator->* (Fraction& (*)(Fraction*));
	private:
		Fraction* _ptr;
};

ostream& operator<< (ostream&, const FractionPointer&);