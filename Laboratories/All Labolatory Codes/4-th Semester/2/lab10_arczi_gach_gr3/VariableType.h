#pragma once
#include <string>
#include "VariableTypeBase.h"

template <typename T>
class VariableType : public VariableTypeBase
{
	public:
		VariableType<T>(const std::string, T);
		void Print() const { std::cout << m_name << ": "  << m_val << std::endl; }
		void Print(const std::string unit) const { std::cout << m_name << ": "  << m_val << " [" << unit << "]" << std::endl; }
		void SetValue(T val) { m_val = val; }

	private:
		T m_val;
};


template <typename T>
VariableType<T>::VariableType(const std::string name, T val) {
	m_name = name;
	m_val = val;
}