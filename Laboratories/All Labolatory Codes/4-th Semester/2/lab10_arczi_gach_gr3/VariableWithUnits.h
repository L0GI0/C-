#pragma once
#include <string>
#include "VariableType.h"

template <typename S>
class VariableWithUnits : public VariableType<S>
{
	public:
		VariableWithUnits<S>(const std::string name, S val, const std::string unit) : VariableType<S>(name, val) { m_unit = unit; }
		void Print() const {  VariableType<S>::Print(m_unit); }

	private:
		std::string m_unit;
	
};