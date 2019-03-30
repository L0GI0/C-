#ifndef __LINEFIT_H__
#define __LINEFIT_H__

#include <string>

class LineFit : public Fit
{
	protected:
		float a;
		float b;
	
	
	public:
		LineFit (std::string str);
		
}

#endif