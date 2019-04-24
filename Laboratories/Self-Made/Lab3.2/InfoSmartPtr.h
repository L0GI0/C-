#pragma once 

#include "InfoClass.h"

class InfoSmartPtr{
	public:
		InfoSmartPtr(InfoClass * o);
		InfoSmartPtr(InfoSmartPtr & tC);
		~InfoSmartPtr();
		InfoClass & operator*()const;
		InfoClass * operator->()const;
		void operator=(InfoSmartPtr & tA);
	private:
		InfoClass *_ptr;
		
};