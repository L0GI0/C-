#include "Main.h"
#include <iostream>
	
//////////////////////FRACTION/////////////////////////////////////////	
Fraction::Fraction(int numi, int denomi)
{
	m_numerator=numi;
	m_denominator=denomi;
	cout<<"Creating "<< m_numerator<<"/"<<m_denominator<<"\n";
}

int Fraction::Numerator() const
{
	return m_numerator;
}

int Fraction::Denominator() const
{
	return m_denominator;
}
	
std::ostream & operator << (std::ostream & s, const Fraction & frac)
{
	
	s<<"Address"<<&frac<<" value="<<frac.Numerator()<<"/"<<frac.Denominator()<<"\n";
	return s;
}
	
Fraction & Fraction::operator *= (int x)
{
	m_numerator*=x;
	return *this;
}		


/////////////////////FRACTIONREGISTER////////////////////////////////

int FractionRegister::m_size=0;
		
FractionRegister::FractionRegister()
{
	//if (m_size==0) 
}

FractionRegister::~FractionRegister()
{

}
		
std::ostream & operator << (std::ostream & s, const FractionRegister & frac)
{

}

void * operator new [] (size_t size)		
{

}


////////////////////FRACTIONPOINTER////////////////////////////////////

static bool PointerCheck()
{
	
}
	
FractionPointer::FractionPointer(const Fraction & frac) 
{

}
		
FractionPointer & FractionPointer::operator = (const Fraction & frac)
{

}
