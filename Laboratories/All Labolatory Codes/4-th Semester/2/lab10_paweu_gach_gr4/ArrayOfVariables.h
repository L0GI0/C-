#pragma once

class ArrayOfVariables {
public:
	ArrayOfVariables(const int& maxsize) { m_tab.reserve(maxsize); }
	template <typename T>
	Variable<T>* CreateAndAdd(std::string name, T value) {
		Variable<T>* item = new Variable<T>(name, value);
		m_tab.push_back(item);
		return item;
	}
	void Print() const {
		for (std::vector<Type*>::const_iterator it = m_tab.begin(); it != m_tab.end(); ++it)
			(*it)->Print();
	}
	~ArrayOfVariables() {
		for (std::vector<Type*>::const_iterator it = m_tab.begin(); it != m_tab.end(); ++it)
			delete *it;
	}
protected:
	std::vector<Type*> m_tab; 
};