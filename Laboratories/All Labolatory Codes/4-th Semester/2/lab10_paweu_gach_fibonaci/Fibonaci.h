#pragma once

class Type {
public:
	virtual void print() const;
};
void Type::print() const {}

template <int val>
class Fibonaci: public Type {
public:
	enum { value = Fibonaci<val-1>::value + Fibonaci<val-2>::value };
	void print() const {
		std::cout << "Fibonaci (" << val << ") = " << this->value << std::endl;
	}
};

template <>
class Fibonaci<1>:public Type {
public:
	enum { value = 1 };
	void print() const {
		std::cout << "Fibonaci (" << 1 << ") = " << this->value << std::endl;
	}
};

template <>
class Fibonaci<2>:public Type {
public:
	enum { value = 1 };
	void print() const {
		std::cout << "Fibonaci (" << 2 << ") = " << this->value << std::endl;
	}
};