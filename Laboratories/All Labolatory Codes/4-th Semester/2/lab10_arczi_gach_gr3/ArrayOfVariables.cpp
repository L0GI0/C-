#include "ArrayOfVariables.h"

unsigned int ArrayOfVariables::m_maxArraySize = 0;

ArrayOfVariables::ArrayOfVariables(const unsigned int maxArraySize) {
	m_maxArraySize = maxArraySize;
}

void ArrayOfVariables::Print() const {

	std::vector<VariableTypeBase*>::const_iterator iter = m_array.begin();
	const std::vector<VariableTypeBase*>::const_iterator end = m_array.end();
	for (; iter != end; ++iter) {
		VariableTypeBase* obj = *iter;
		obj->Print();
	}

	/* 
	//==========Nowy standard
	for(VariableTypeBase* obj; m_array) {
		obj->Print();
	}*/
}

ArrayOfVariables::~ArrayOfVariables() {
	std::vector<VariableTypeBase*>::const_iterator iter = m_array.begin();
	const std::vector<VariableTypeBase*>::const_iterator end = m_array.end();
	for (; iter != end; ++iter) {
		VariableTypeBase* obj = *iter;
		delete obj;
	}
	m_array.clear();
}