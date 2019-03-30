#include "SlopeFit.h"
#include <iostream>

SlopeFit::SlopeFit(std::string str) : Fit(str)
{
	a=0;
	i=1;
}
////////////////////////////////////////////////////
Fit::Fit(std::string str)
{
	Name = str;
}

void Fit::print()
{
	std::cout<<"This is "<<Name<<std::endl;
}

void Fit::appendPoint( float x1, float y1) 
{
	sumxy += sumxy +x1*y1;
	sumxx += sumxx + x1*x1;
	a = sumxy/sumxx;
}

FitResult Fit::result()
{	
	if (i == 1)
	return FitResult(i, a);
	else 
	return FitResult(i,a,b);
}

/////////////////////////////////////////////////////

FitResult::FitResult(int i, float a, float b)
{
	m_i=i;
	a=A;
	b=B;
	Name.resize(2);
	Name[0]="a";
	Name[1]="b";
	Param[0]=a;
	Param[1]=b;
}

FitResult::FitResult(int i, float a);
{
	i=j;
	a=A;
	Name.resize(1);
	Name[0]="a";
	Param[0]=a;
	
}

void FitResult::expression();
{
	if(i==2)
	cout<<"y = a * x"<<std::endl;
	else
	std::cout<<"y = a * x + b"<< std::endl;
}

int FitResult::nParams();
{
	return i;
}

void FitResult::parameterName(int i);
{
	return vect
}

void FitResult::parameterValue(int i);