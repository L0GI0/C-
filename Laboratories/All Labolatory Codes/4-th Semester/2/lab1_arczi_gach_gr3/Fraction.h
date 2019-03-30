#pragma once
#include <iostream>

using namespace std;

class Fraction
{
	public:
		Fraction(int, int);
		~Fraction();
		// 
		int GetNom() const { return _nom; }
		int GetDenom() const { return _denom; }
		// 
		int GetPtrCounter() const { return _ptrCounter; }
		void IncrementCounter() { _ptrCounter++; }
		void DecrementCounter() { _ptrCounter--; }
		// 
		void SetFraction(const Fraction* given) { _nom = given->_nom; _denom = given->_denom; }
		// 
		void Print() const;
		void Multiply(const Fraction&);
		// 
		typedef Fraction& (*Action)(Fraction*);
		static Fraction& Simplify(Fraction*);
	private:
		int _nom;
		int _denom;
		int _ptrCounter;
};

ostream& operator<< (ostream&, const Fraction&);
int GCD(int, int); //Greatest Common Dividor (pol. NWD)