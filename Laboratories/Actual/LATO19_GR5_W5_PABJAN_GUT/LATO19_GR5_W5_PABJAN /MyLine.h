#pragma once 

#include <iostream>
#include <string>
#include "AttColor.h"
#include "AttFormat.h"
#include "Printable.h"

class MyLine : public AttColor, public Printable {

public:
	MyLine() = default;
	MyLine(const char formatting, unsigned size, AttColor::Option color) 
		: AttColor(color), m_Formatting(formatting), m_LineSize(size), Printable() {}
	~MyLine() = default;

	virtual void print() const override { std::cout << rawString() << "\n"; }
	const std::string rawString() const { return std::string(m_LineSize, m_Formatting); }

	void setLength(unsigned length) { m_LineSize = length; }
	void setChar(const char formatting) { m_Formatting = formatting; }

private:
	char m_Formatting;
	unsigned m_LineSize;
};