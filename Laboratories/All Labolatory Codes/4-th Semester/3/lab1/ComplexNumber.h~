#pragma once
#include <iostream>




class ComplexNumber
{
	private:
		int Re, Im;		
		
	public:
		ComplexNumber (int re, int im) : Re(re), Im(im) {}
		ComplexNumber (const ComplexNumber& ComNum);
		ComplexNumber & operator * (const ComplexNumber & Sample) 
			{	
				int x=this->Re+Sample.Re; 
				int y= this->Im+Sample.Im; 
				ComplexNumber A(x,y);
				return A;
			}
		ComplexNumber & operator = (const ComplexNumber & Sample)
		{	
				int x=this->Re+Sample.Re; 
				int y= this->Im+Sample.Im; 
				ComplexNumber A(x,y);
				return A;
			}
		ComplexNumber & operator + (const ComplexNumber & Sample)
		{	
				int x=this->Re+Sample.Re; 
				int y= this->Im+Sample.Im; 
				ComplexNumber A(x,y);
				return A;
			}
		ComplexNumber & operator *= (const ComplexNumber & Sample)
{	
				int x=this->Re+Sample.Re; 
				int y= this->Im+Sample.Im; 
				ComplexNumber A(x,y);
				return A;
			}
		
		friend std::ostream & operator << (std::ostream & s, const ComplexNumber & Sample);
};

		//ComplexNumber & operator * (int c, int y);