#pragma once

class Type {
public:
	virtual void Print() const=0;
	virtual ~Type() {}
};

template <typename T>
class Variable: public Type {
public:
	Variable(std::string name, T value): Type(), m_name(name), m_value(value) {}
	virtual void Print() const {
		std::cout << m_name << ": " << m_value << std::endl;
	}
	virtual void SetValue(T value) {
		m_value = value;
	}
	virtual ~Variable() {}
protected:
	std::string m_name;
	T m_value;
};

template <typename T>
class VariableWithUnits: public Variable<T> {
public:
	VariableWithUnits(std::string name, T value, std::string unit): Variable<T>(name, value), m_unit(unit) {}
	void Print() const {
		std::cout << Variable<T>::m_name << ": " << Variable<T>::m_value << " [" << m_unit << "]\n";
	}
protected:
	std::string m_unit;
};