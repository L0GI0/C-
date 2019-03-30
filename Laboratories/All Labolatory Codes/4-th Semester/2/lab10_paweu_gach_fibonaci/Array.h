#pragma once

class Array {
public:
	void push_back(Type* pushed_elem) {
		m_tab.push_back(pushed_elem);
	}
	void print() const {
		for (std::vector<Type*>::const_iterator it = m_tab.begin(); it != m_tab.end(); ++it)
			(*it)->print();
	}
	Type* operator [] (const int& val) {
		return m_tab[val];
	}
protected:
	std::vector<Type*> m_tab;
};