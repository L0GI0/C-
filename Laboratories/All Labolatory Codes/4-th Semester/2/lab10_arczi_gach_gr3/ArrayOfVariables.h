#pragma once
#include <vector>
#include <string>
#include "VariableType.h"
#include "VariableTypeBase.h"

typedef VariableType<double> VariableDouble;
typedef VariableType<float> VariableFloat;
typedef VariableType<int> VariableInt;
typedef VariableType<char> VariableChar;
typedef VariableType<bool> VariableBool;

class ArrayOfVariables 
{
	public:
		ArrayOfVariables(const unsigned int);

		template <typename T>
		VariableType<T>* CreateAndAdd(const std::string, T);

		void Print() const;

		~ArrayOfVariables();

	protected:
		static unsigned int m_maxArraySize;
		std::vector<VariableTypeBase*> m_array;
};




template <typename T>
VariableType<T>* ArrayOfVariables::CreateAndAdd(const std::string name, T val) {
	VariableType<T>* toReturn = new VariableType<T>(name, val);
	m_array.push_back(toReturn);
	return toReturn;
}