#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
public:
	Fraction(int nominator, int denominator);
	void Print() const { std::cout << _nominator << "/" << _denominator << "\n"; }
	typedef void (Fraction::*Action)();
	void Simplify();
	int GetNom() const { return _nominator; }
	int GetDen() const { return _denominator; }
	int& SetNom() {return _nominator;}
	int& SetDen() {return _denominator;}
	~Fraction();
private:
	int _nominator;
	int _denominator;
};

std::ostream& operator << (std::ostream& out, const Fraction& num);

#endif