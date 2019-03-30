#ifndef __SLOPEFIT_H__
#define __SLOPEFIT_H__

#include <string>
#include <vector>

class FitResult
{
	private:
		int m_i;
		std::vector <std::string> Name;
		std::vector <float> Param;
		
	public:
		FitResult(int i, float a, float b);
		FitResult(int i, float a);
		void expression();
		int nParams();
		void parameterName(int i);
		void parameterValue(int i);
		
};

class Fit 
{
	protected:
		int i;
		std::string Name;
		
	public:
		Fit(std::string str);
		FitResult result();
		void print();
  		void appendPoint( float x1, float y1);
  		
};

class LineFit;

class SlopeFit : public Fit
{
	protected:
		float a;
		float sumxy = 0;
		float sumxx = 0;
		
		
	public:
		SlopeFit(std::string str);
		
};



#endif