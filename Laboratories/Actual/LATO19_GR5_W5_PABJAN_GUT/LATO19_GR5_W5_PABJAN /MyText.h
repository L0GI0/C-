#pragma once

#include <iostream>
#include <string>
#include "AttColor.h"
#include "AttFormat.h"
#include "Printable.h"

class MyText : public AttColor, public AttFormat, public Printable {
public:
	MyText() = default;
	MyText(std::string str, AttFormat format, AttColor::Option color)
		: m_Text(str), AttFormat(format), AttColor(color), Printable() {}

	~MyText() = default;

	virtual void print() const override { std::cout << rawString() << "\n"; }
	const std::string rawString() const { return m_Text; }

	void setText(std::string text) { m_Text = text; }
private:
	std::string m_Text;
};