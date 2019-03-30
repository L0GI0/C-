#pragma once
#include <iostream>

using namespace std;

class Fraction
{
	private:
		int m_numerator;
		int m_denominator;
	
	public:
	
		Fraction(int numi, int denomi);
		
		friend std::ostream & operator << (std::ostream & s, const Fraction & frac);
		Fraction & operator *= (int x);
		
		int Numerator() const;
  		int Denominator() const; 
	
};

class FractionPointer
{
	private:
		Fraction * frac;
		
	public:
		static bool PointerCheck();
		FractionPointer(const Fraction & frac);
		
		FractionPointer & operator = (const Fraction & frac);
};

class FractionRegister
{
	private:
	
		Fraction * m_FracTab;
		
	public:
	
		//static bool m_status;
		static int m_size;
		
		FractionRegister();
		~FractionRegister();
		
		friend std::ostream & operator << (const std::ostream & s, const FractionRegister & frac);
		void * operator new [] (size_t size);		
};
