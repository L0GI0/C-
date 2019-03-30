#pragma once
#include <string>
#include <iostream>

class VariableTypeBase
{
	public:
		virtual void Print() const = 0;
	protected:
		std::string m_name;
	
};