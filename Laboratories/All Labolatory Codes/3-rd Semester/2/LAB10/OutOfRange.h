#pragma once
#include <iostream>
#include <string>
#include "Number.h"
class OutOfRange
{
public:
	OutOfRange(const std::string name1, float value1): name(name1), value(value1)
	{
		to_delete = false;
		
	}
	OutOfRange(const OutOfRange &copy)
	{	
			to_delete = true;
				}
	~OutOfRange()
	{
		if(to_delete)
		{
			Number::Destroy();
		}
	}
	
	friend std::ostream& operator<<(std::ostream &o, OutOfRange &abc)
	{
		return o << "Number named: "<< abc.name << " has value " << abc.value << " which is outside of the allowed range: ["<< Number::from << ", " <<Number::to << "]";
	};

private:
	bool to_delete;
	std::string name;
	float value;
};