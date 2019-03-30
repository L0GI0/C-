#pragma once

#include "Zaglowiec.h"
#include "StatekSilnikowy.h"

class Jacht: public virtual Zaglowiec, public virtual StatekSilnikowy 
{
	public:
		Jacht(const float masa);
		 
};

